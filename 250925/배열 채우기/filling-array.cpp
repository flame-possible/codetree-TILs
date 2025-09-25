#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int input[10] = {0,};

    int cnt = 9;

    for(int i = 0; i < 10; i++){
        cin >> input[i];

        if(input[i] == 0){
            cnt = i - 1;
            break;
        }
    }

    for(int i = cnt; i >= 0; i--){
        cout << input[i] << ' ';
    }

    return 0;
}