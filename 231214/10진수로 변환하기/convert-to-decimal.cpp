#include <iostream>

using namespace std;

int main() {
    
    string input;

    cin >> input;

    int cnt = 0;

    int num = 0;

    while(cnt != input.length()){
        num = (num * 2) + (input[cnt++] - '0');
    }

    cout << num;

    return 0;
}