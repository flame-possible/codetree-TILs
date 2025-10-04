#include <iostream>
#include <climits>
using namespace std;

int cal(int a, int b){

    int result = 1;

    while(a > 0 && b > 0){
        if((a % 10) + (b % 10) >= 10){
            result = 0;
            break;
        }

        a /= 10;
        b /= 10;
    }

    return result;
}

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int input[n] = {0,};

    for(int i = 0; i < n; i++){
        cin >> input[i];
    }

    int result = -1;

    for(int i = 0; i < n; i++){
        for(int k = i + 1; k < n; k++){
            for(int p = k + 1; p < n; p++){
                if(cal(input[i], input[k]) && cal(input[i] + input[k], input[p])){
                    if(input[i] + input[k] + input[p] > result){
                        result = input[i] + input[k] + input[p];
                    }
                }
            }
        }
    }

    cout << result;

    return 0;
}