#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n; k++){
            if(i == 1 || i == n || k == 1 || k == n){
                cout << "* ";
            }
            else{
                if(k < i){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
                
                // for(int p = k; p < i; p++){
                //     cout << "* ";
                // }

                // for(int p = 0; p < n - i; p++){
                //     cout << "  ";
                // }
            }
        }
        cout << '\n';
    }

    return 0;
}