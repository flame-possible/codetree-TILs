#include <iostream>
using namespace std;

int N, M, Q;
int input[101][101];
int r1, c1, r2, c2;
int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};

void Print(){
    
    for(int i = 1; i <= N; i++){
        for(int k = 1; k <= M; k++){
            cout << input[i][k] << ' ';
        }
        cout << '\n';
    }
}

int checkXY(int y, int x){

    if(y < 1 || y > N || x < 1 || x > M){
        return 0;
    }

    return 1;
}

void rotate(){
    int temp1 = input[r1][c2];
    int temp2 = input[r2][c2];
    int temp3 = input[r2][c1];

    for(int i = c2; i > c1; i--){
        input[r1][i] = input[r1][i-1];
    }

    for(int i = r2; i > r1 + 1; i--){
        input[i][c2] = input[i-1][c2];
    }

    input[r1+1][c2] = temp1;

    for(int i = c1; i < c2 - 1; i++){
        input[r2][i] = input[r2][i+1];
    }

    input[r2][c2-1] = temp2;

    for(int i = r1; i < r2 - 1; i++){
        input[i][c1] = input[i+1][c1];
    }

    input[r2-1][c1] = temp3;


}

void calculate(){

    int temp[101][101];

    for(int y = r1; y <= r2; y++){
        for(int x = c1; x <= c2; x++){
            int result = input[y][x];
            int cnt = 1;

            for(int p = 0; p < 4; p++){
                if(checkXY(y + dy[p], x + dx[p])){
                    result += input[y + dy[p]][x + dx[p]];
                    cnt++;
                }
            }

            temp[y][x] = result / cnt;
        }
    }

    for(int y = r1; y <= r2; y++){
        for(int x = c1; x <= c2; x++){
            input[y][x] = temp[y][x];
        }
    }

}

int main() {

    cin >> N >> M >> Q;

    for(int i = 1; i <= N; i++){
        for(int k = 1; k <= M; k++){
            cin >> input[i][k];
        }
    }

    for(int i = 0; i < Q; i++){
        cin >> r1 >> c1 >> r2 >> c2;

        rotate();
        calculate();
    }

    Print();


    return 0;
}