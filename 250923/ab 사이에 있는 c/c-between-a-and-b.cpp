#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b, c;

    cin >> a >> b >> c;

    int result = 0;

    for(int i = a; i <= b; i++){
        if(i % c == 0){
            result = 1;
            break;
        }
    }

    if(result & 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}