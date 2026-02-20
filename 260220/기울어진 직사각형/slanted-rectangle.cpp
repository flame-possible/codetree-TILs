#include <iostream>

using namespace std;

int N;
int grid[20][20];
int result = 0;

int checkXY(int y, int x){
    if(y < 0 || y >= N || x < 0 || x >= N){
        return 0;
    }
    return 1;
}

void Ractangle1(int y1, int x1, int y2, int x2, int cnt){
    int temp = grid[y1][x1] + grid[y2][x2];

    int curY1 = y1;
    int curX1 = x1;
    int curY2 = y2;
    int curX2 = x2;

    for(int i = 0; i < N - 1; i++){
        if(checkXY(curY1+1, curX1-1) && checkXY(curY2+1, curX2-1)){
            curY1++;
            curX1--;
            curY2++;
            curX2--;

            temp += grid[curY1][curX1] + grid[curY2][curX2];
            int cntTemp = 0;

            if(cnt > 1){
                for(int k = 1; k < cnt; k++){
                    cntTemp += grid[curY1+k][curX1+k] + grid[y1+k][x1+k];
                }
            }

            result = max(result, temp + cntTemp);
        }
        else{
            break;
        }
    }

}

void Ractangle2(int y1, int x1, int y2, int x2, int cnt){
    int temp = grid[y1][x1] + grid[y2][x2];

    int curY1 = y1;
    int curX1 = x1;
    int curY2 = y2;
    int curX2 = x2;

    for(int i = 0; i < N - 1; i++){
        if(checkXY(curY1+1, curX1+1) && checkXY(curY2+1, curX2+1)){
            curY1++;
            curX1++;
            curY2++;
            curX2++;

            temp += grid[curY1][curX1] + grid[curY2][curX2];
            int cntTemp = 0;

            if(cnt > 1){
                for(int k = 1; k < cnt; k++){
                    cntTemp += grid[curY1+k][curX1-k] + grid[y1+k][x1-k];
                }
            }

            result = max(result, temp+cntTemp);
        }
        else{
            break;
        }
    }

}


void answer(int y, int x){

    for(int i = 1; i < N - 1; i++){
        if(checkXY(y+i, x+i)){
            Ractangle1(y, x, y+i, x+i, i);
        }
        

        if(checkXY(y+i, x-i)){
            Ractangle2(y, x, y+i, x-i, i);
        }
    }


}


int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int k = 0; k < N; k++){
            answer(i, k);
        }
    }

    cout << result;

    // Please write your code here.

    return 0;
}
