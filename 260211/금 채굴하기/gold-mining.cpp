#include <iostream>
using namespace std;

int N, M;
int input[21][21];
int cnt;
int dy[4] = {0, 1, -1, 0};
int dx[4] = {1, 0, 0, -1};

int dy2[12] = {-2, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 2};
int dx2[12] = {0, -1, 0, 1, -2, -1, 1, 2, -1, 0, 1, 0};

int checkXY(int y, int x){
    if(y < 0 || y >= N || x < 0 || x >= N){
        return 0;
    }
    return 1;
}

void answer(int y, int x){
    int temp0 = (input[y][x] * M) - 1;
    int cnt0 = input[y][x];

    int temp1 = -5 + (input[y][x] * M);
    int cnt1 = input[y][x];
    for(int i = 0; i < 4; i++){
        if(checkXY(y + dy[i], x + dx[i]) && input[y+dy[i]][x+dx[i]]){
            temp1 += M;
            cnt1++;
        }
    }

    int temp2 = -13 + (input[y][x] * M);
    int cnt2 = input[y][x];
    for(int i = 0; i < 12; i++){
        if(checkXY(y + dy2[i], x + dx2[i]) && input[y+dy2[i]][x+dx2[i]]){
            temp2 += M;
            cnt2++;
        }
    }

    if(cnt < cnt0 && temp0 > 0){
        cnt = cnt0;
    }

    if(cnt < cnt1 && temp1 > 0){
        cnt = cnt1;
    }

    if(cnt < cnt2 && temp2 > 0){
        cnt = cnt2;
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
    
    cout << cnt;


    return 0;
}