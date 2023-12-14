#include <iostream>

using namespace std;

int main() {
    
    int a, b;
    string N;

    cin >> a >> b;
    cin >> N;

    int result = 0;

    for(int i = 0; i < N.length(); i++){
        result = (result * a) + (N[i] - '0');
    }

    string str;
    int cnt = 0;

    while(result > 0){
        str[cnt++] = (result % b) + '0';
        result /= b;
    }

    for(int i = cnt-1; i >= 0; i--){
        cout << str[i];
    }

    return 0;
}