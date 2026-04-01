#include <iostream>
using namespace std;

int N;
int input[201][201];
int r, c;

int dy[4] = {0, 1, -1, 0};
int dx[4] = {1, 0, 0, -1};

int checkXY(int y, int x){
    if(y <= 0 || y > N || x <= 0 || x > N){
        return 0;
    }

    return 1;
}

void shift(int x){
    int temp[N+1];
    int cnt = 1;

    for(int i = 0; i <= N; i++){
        temp[i] = 0;
    }

    for(int i = N; i > 0; i--){
        if(!input[i][x]){
            continue;
        }

        temp[cnt++] = input[i][x];
    }

    for(int i = 1; i <= N; i++){
        input[i][x] = temp[N - i + 1];
    }

}

void answer(){

    int cnt = input[r][c];
    input[r][c] = 0;

    for(int i = 1; i < cnt; i++){
        for(int k = 0; k < 4; k++){
            int tempy = r + (dy[k] * i);
            int tempx = c + (dx[k] * i);

            if(checkXY(tempy, tempx)){
                input[tempy][tempx] = 0;
            }
        }
    }

    for(int i = 1; i <= N; i++){
        shift(i);
    }

}

void Print(){
    for(int i = 1; i <= N; i++){
        for(int k = 1; k <= N; k++){
            cout << input[i][k] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    // Please write your code here.

    cin >> N;

    for(int i = 1; i <= N; i++){
        for(int k = 1; k <= N; k++){
            cin >> input[i][k];
        }
    }

    cin >> r >> c;

    answer();

    Print();



    return 0;
}