#include <iostream>

using namespace std;

int main() {
    
    string N;

    cin >> N;

    int result = 0;

    for(int i = 0; i < N.length(); i++){
        result = (result * 2) + (N[i] - '0');
    }

    result *= 17;

    string str;
    int cnt = 0;

    while(result > 0){
        str[cnt++] = (result % 2) + '0';
        result /= 2;
    }

    for(int i = cnt-1; i >= 0; i--){
        cout << str[i];
    }

    return 0;
}