#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int result = 0;

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            result = 1;
            break;
        }
    }

    if(result & 1){
        cout << "C";
    }
    else{
        cout << "P";
    }

    return 0;
}