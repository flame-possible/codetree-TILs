#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    for(int i = 1; i <= 2 * n; i++){
        if(i & 1){
            for(int k = 0; k < n + 1 - ((i + 1) / 2); k++){
                cout << "* ";
            }
        }
        else{
            for(int k = 0; k < i / 2; k++){
                cout << "* ";
            }
        }
        cout << '\n';
    }

    return 0;
}