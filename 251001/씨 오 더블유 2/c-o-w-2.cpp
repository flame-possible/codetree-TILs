#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    string input;

    cin >> input;

    int result = 0;

    for(int i = 0; i < n; i++){

        if(input[i] == 'C'){

            for(int k = i + 1; k < n; k++){

                if(input[k] == 'O'){

                    for(int p = k + 1; p < n; p++){

                        if(input[p] == 'W'){
                            result++;
                        }

                    }

                }
            }

        }
    }

    cout << result;

    return 0;
}