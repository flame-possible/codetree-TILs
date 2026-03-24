#include <iostream>
using namespace std;

int N;
int input[101][101];
int r, c, m1, m2, m3, m4, dir;

void Print(){
    for(int i = 1; i <= N; i++){
        for(int k = 1; k <= N; k++){
            cout << input[i][k] << ' ';
        }
        cout << '\n';
    }
}

void rotate0(){
    int temp = input[r][c];

    int cury = r;
    int curx = c;

    for(int i = 0; i < m4; i++){
        input[cury-i][curx-i] = input[cury-i-1][curx-i-1];
    }

    cury -= m4;
    curx -= m4;

    for(int i = 0; i < m3; i++){
        input[cury-i][curx+i] = input[cury-i-1][curx+i+1];
    }

    cury -= m3;
    curx += m3;

    for(int i = 0; i < m2; i++){
        input[cury+i][curx+i] = input[cury+i+1][curx+i+1];
    }

    cury += m2;
    curx += m2;

    for(int i = 0; i < m1; i++){
        input[cury+i][curx-i] = input[cury+i+1][curx-i-1];
    }
    
    input[r-1][c+1] = temp;
}

void rotate1(){
    int temp = input[r][c];

    int cury = r;
    int curx = c;

    for(int i = 0; i < m1; i++){
        input[cury-i][curx+i] = input[cury-i-1][curx+i+1];
    }

    cury -= m1;
    curx += m1;

    for(int i = 0; i < m2; i++){
        input[cury-i][curx-i] = input[cury-i-1][curx-i-1];
    }

    cury -= m2;
    curx -= m2;

    for(int i = 0; i < m3; i++){
        input[cury+i][curx-i] = input[cury+i+1][curx-i-1];
    }

    cury += m3;
    curx -= m3;

    for(int i = 0; i < m4; i++){
        input[cury+i][curx+i] = input[cury+i+1][curx+i+1];
    }
    
    input[r-1][c-1] = temp;
}

int main() {
    
    cin >> N;

    for(int i = 1; i <= N; i++){
        for(int k = 1; k <= N; k++){
            cin >> input[i][k];
        }
    }

    cin >> r >> c >> m1 >> m2 >> m3 >> m4 >> dir;

    if(dir){
        rotate1();
    }
    else{
        rotate0();
    }
    
    Print();

    return 0;
}