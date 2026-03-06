#include <iostream>

using namespace std;

int n, m;
int grid[20][20];
int result = -1;

int checkXY(int y, int x){
    if(y < 0 || y >= n || x < 0 || x >= m){
        return 0;
    }

    return 1;
}

int check(int y, int x, int yCnt, int xCnt){
    for(int i = 0; i <= yCnt; i++){
        for(int k = 0; k <= xCnt; k++){
            if(checkXY(y + i, x + k)){
                if(grid[y+i][x+k] <= 0){
                    return 0;
                }
            }
        }
    }

    return 1;
}

void answer(int y, int x){

    for(int i = 0; i < n - y; i++){
        for(int k = 0; k < m - x; k++){
            if(check(y, x, i, k)){
                result = max(result, (i+1) * (k+1));
            }
        }
    }

}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int k = 0; k < m; k++){
            answer(i, k);
        }
    }

    cout << result;
    

    return 0;
}
