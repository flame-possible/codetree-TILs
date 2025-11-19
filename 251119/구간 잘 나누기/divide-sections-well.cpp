#include <iostream>
#include <climits>
using namespace std;

int N, M;
int input[101];

int wall[101];
int result = 5000;


int main() {
    // Please write your code here.

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }


    for(int i = 1; i <= 5000; i++){
        int cur = 0;
        int wall = 0;

        for(int k = 0; k < N; k++){
            cur += input[k];

            if(cur <= i){
                continue;
            }
            else{
                wall++;
                cur = input[k];
            }
        }

        wall++;

        if(wall == M && cur <= i){
            cout << i;
            break;
        }
    }


    return 0;
}