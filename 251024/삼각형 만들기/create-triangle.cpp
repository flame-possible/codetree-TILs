#include <iostream>
using namespace std;

int N;
int input[100][2];

int check(int a, int b, int c){
    int result = 0;

    int ay = input[a][0];
    int ax = input[a][1];
    
    int by = input[b][0];
    int bx = input[b][1];
    
    int cy = input[c][0];
    int cx = input[c][1];

    if(ax == bx){
        if(cy == ay){
            result = abs(ay - by) * abs(cx - ax);
        }
        else if(cy == by){
            result = abs(ay - by) * abs(cx - bx);
        }
    }
    else if(ax == cx){
        if(by == ay){
            result = abs(ay - cy) * abs(bx - ax);
        }
        else if(by == cy){
            result = abs(ay - cy) * abs(bx - cx);
        }
    }
    else if(bx == cx){
        if(ay == by){
            result = abs(by - cy) * abs(ax - bx);
        }
        else if(ay == cy){
            result = abs(by - cy) * abs(ax - cx);
        }
    }

    return result;
}

int main() {
    // Please write your code here.


    cin >> N;


    for(int i = 0; i < N; i++){
        cin >> input[i][0] >> input[i][1];
    }

    int result = 0;

    for(int i = 0; i < N - 2; i++){
        for(int k = i + 1; k < N - 1; k++){
            for(int p = k + 1; p < N; p++){
                result = max(result, check(i, k, p));
            }
        }
    }

    cout << result;

    return 0;
}