#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int input[10] = {0,};

    int result = 0;

    for(int i = 0; i < 10; i++){
        cin >> input[i];

        if(input[i] % 3 == 0){
            result = input[i-1];
            break;
        }
    }

    cout << result;

    return 0;
}