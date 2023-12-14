#include <iostream>

using namespace std;

int main() {
    
    int N, B;

    cin >> N >> B;

    string str;

    int cnt = 0;

    while(N > 0){
        str[cnt++] = (N % B) + '0';
        N /= B;
    }

    for(int i = cnt-1; i >= 0; i--){
        cout << str[i];
    }

    return 0;
}