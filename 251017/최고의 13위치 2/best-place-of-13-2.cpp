#include <iostream>
using namespace std;

int n;
int input[20][20];

int check(int y, int x){

    int result = 0;

    for(int i = y; i < n; i++){

        if(i == y){

            for(int k = x; k < n - 2; k++){
                int temp = input[i][k] + input[i][k+1] + input[i][k+2];

                if(result < temp){
                    result = temp;
                }
            }

        }
        else{
            for(int k = 0; k < n - 2; k++){
                int temp = input[i][k] + input[i][k+1] + input[i][k+2];

                if(result < temp){
                    result = temp;
                }
            }
        }
    }

    return result;
}

int main() {
    // Please write your code here.

    cin >> n;


    for(int i = 0; i < n; i++){
        for(int k = 0; k < n; k++){
            cin >> input[i][k];
        }
    }

    int result = 0;

    for(int i = 0; i < n; i++){
        for(int k = 0; k < n - 2; k++){
            int temp = input[i][k] + input[i][k+1] + input[i][k+2];

            temp += check(i, k + 3);

            if(result < temp){
                result = temp;
            }
        }
    }

    cout << result;

    return 0;
}