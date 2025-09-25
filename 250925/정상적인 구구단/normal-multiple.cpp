#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n; k++){
            cout << i << " * " << k << " = " << i * k;

            if(k < n){
                cout << ",";
            }
            cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}