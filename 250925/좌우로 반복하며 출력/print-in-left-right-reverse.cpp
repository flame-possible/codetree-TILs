#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        if(i & 1){
            for(int k = n; k > 0; k--){
                cout << k;
            }
        }
        else{
            for(int k = 1; k <= n; k++){
                cout << k;
            }
        }

        cout << '\n';
    }

    return 0;
}