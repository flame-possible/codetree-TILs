#include <iostream>

using namespace std;

int n, m;
int grid[6][6];
int result = -25000;

int answer(int x, int y, int w, int h){

    int temp = 0;

    for(int i = 0; i <= w; i++){
        for(int k = 0; k <= h; k++){
            temp += grid[y + k][x + i];
        }
    }

    return temp;

}

int overlap(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2){
    if(x1 + w1 < x2 || x1 > x2 + w2 || y1 + h1 < y2 || y1 > y2 + h2){
        return 1;
    }
    return 0;
}


int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> grid[i][j];
        }
    }

    for(int x1 = 1; x1 <= m; x1++){
        for(int y1 = 1; y1 <= n; y1++){

            int temp1 = 0;

            for(int w1 = 0; w1 <= m - x1; w1++){
                for(int h1 = 0; h1 <= n - y1; h1++){

                    temp1 = answer(x1, y1, w1, h1);

                    for(int x2 = 1; x2 <= m; x2++){
                        for(int y2 = 1; y2 <= n; y2++){
                            
                            int temp2 = 0;

                            for(int w2 = 0; w2 <= m - x2; w2++){
                                for(int h2 = 0; h2 <= n - y2; h2++){

                                    if(overlap(x1, y1, w1, h1, x2, y2, w2, h2)){
                                        temp2 = answer(x2, y2, w2, h2);

                                        result = max(result, temp1 + temp2);
                                    }

                                }
                            }

                        }
                    }

                }
            }
        }
    }

    cout << result;

    return 0;
}
