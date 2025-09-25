#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int input[100] = {0,};

    int cnt = 0;

    while(1){
        cin >> input[cnt++];

        if(input[cnt-1] == 0){
            break;
        }

        if(input[cnt-1] & 1){
            cout << input[cnt-1] + 3 << ' ';
        }
        else{
            cout << input[cnt-1] / 2 << ' ';
        }
    }

    return 0;
}