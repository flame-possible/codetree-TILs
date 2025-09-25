#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int input[100] = {0,};

    int result = 0;

    int cnt = 0;

    for(int i = 0; i < 100; i++){
        cin >> input[i];

        if(input[i] == 0){
            result = input[i - 3] + input[i - 2] + input[i - 1];
            break;
        }
    }

    cout << result;

    return 0;
}