#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string input[200];

    int cnt = 0;

    while(1){
        cin >> input[cnt];

        if(input[cnt++] == "0"){
            break;
        }
    }

    cout << cnt - 1 << '\n';

    for(int i = 0; i < cnt; i++){
        if(i % 2 == 0)
            cout << input[i] << '\n';
    }

    return 0;
}