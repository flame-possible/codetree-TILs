#include <iostream>
using namespace std;

int N, M;
int input[21][21];
int result;
int dy[4] = {0, 1, -1, 0};
int dx[4] = {1, 0, 0, -1};

struct Pos{
    int y;
    int x;

    Pos() : y(0), x(0) {}
    Pos(int _y, int _x) : y(_y), x(_x) {}
};

int checkXY(int y, int x){
    if(y < 0 || y >= N || x < 0 || x >= N){
        return 0;
    }
    return 1;
}

int calPay(int k){
    return -((k * k) + ((k + 1) * (k + 1)));
}

void answer(int y, int x){
    int k = 0;
    int check[N][N] = {0,};
    
    for(int i = 0; i < N; i++){
        for(int k = 0; k < N; k++){
            check[i][k] = 0;
        }
    }

    check[y][x] = 1;
    int gold = input[y][x];
    int pay = (gold * M) - calPay(k);

    if(pay >= 0){
        result = max(result, gold);
    }

    Pos bfslist[400];
    int bfscnt = 0;

    bfslist[bfscnt++] = Pos(y, x);

    int cur = 0;

    while(k < N){

        k++;

        int tempK = calPay(k);
        int tempGold = gold;
        int curMax = bfscnt;

        while(cur < curMax){


            Pos curPos = bfslist[cur++];

            for(int i = 0; i < 4; i++){
                int tempy = curPos.y + dy[i];
                int tempx = curPos.x + dx[i];

                if(checkXY(tempy, tempx) && !check[tempy][tempx]){
                    check[tempy][tempx] = 1;

                    if(input[tempy][tempx]){
                        tempGold++;
                    }

                    bfslist[bfscnt++] = Pos(tempy, tempx);
                }
            }

        }

        tempK += tempGold * M;

        // cout << y << ' ' << x << '\n';
        // cout << tempK << ' ' << tempGold << '\n';

        if(tempK >= 0){
            result = max(result, tempGold);
            gold = tempGold;
            pay = tempK;
        }
        else{
            gold = tempGold;
        }

    }


}

int main() {
    // Please write your code here.

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        for(int k = 0; k < N; k++){
            cin >> input[i][k];
        }
    }

    for(int i = 0; i < N; i++){
        for(int k = 0; k < N; k++){
            answer(i, k);
        }
    }
    
    cout << result;


    return 0;
}
