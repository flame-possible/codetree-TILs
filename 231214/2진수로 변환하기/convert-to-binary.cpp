#include <iostream>

using namespace std;

int main() {

    int n;
    string str;

    cin >> n;

    int cnt = 0;

    if(n == 0){
        cout << "0\n";
        return 0;
    }

    while(n > 0){
        str[cnt++] = n%2 + '0';
        n /= 2;
    }

    for(int i = cnt-1; i >= 0; i--){
        cout << str[i];
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}