#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int input[n];

    for(int i = 0; i < n; i++){
        cin >> input[i];
    }

    for(int i = n - 1; i >= 0; i--){
        if(input[i] % 2 == 0){
            cout << input[i] << ' ';
        }
    }

    return 0;
}