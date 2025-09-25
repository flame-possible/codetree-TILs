#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n - i + 1; k++){
            cout << i << " * " << k << " = " << i * k;

            if(k != n - i + 1){
                cout << " / ";
            }
        }
        cout << '\n';
    }

    return 0;
}