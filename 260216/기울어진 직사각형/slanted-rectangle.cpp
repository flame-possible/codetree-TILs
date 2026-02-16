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

void Ractangle1(int y1, int x1, int y2, int x2){
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

            result = max(result, temp);
        }
        else{
            break;
        }
    }

}

void Ractangle2(int y1, int x1, int y2, int x2){
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

            result = max(result, temp);
        }
        else{
            break;
        }
    }

}


void answer(int y, int x){

    if(checkXY(y+1, x+1)){
        Ractangle1(y, x, y+1, x+1);
    }

    if(checkXY(y+1, x-1)){
        Ractangle2(y, x, y+1, x-1);
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
