#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int input1[3][3] = {0,};
    int input2[3][3] = {0,};

    for(int i = 0; i < 3; i++){
        for(int k = 0; k < 3; k++){
            cin >> input1[i][k];
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int k = 0; k < 3; k++){
            cin >> input2[i][k];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int k = 0; k < 3; k++){
            cout << input1[i][k] * input2[i][k] << ' ';
        }
        cout << '\n';
    }

    return 0;
}