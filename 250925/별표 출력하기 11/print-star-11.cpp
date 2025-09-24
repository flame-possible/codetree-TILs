#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    for(int i = 1; i <= (2 * n) + 1; i++){
        for(int k = 1; k <= (2 * n) + 1; k++){
            if(i % 2 == 0 && k % 2 == 0){
                cout << "  ";
            }
            else{
                cout << "* ";
            }
            
        }
        cout << '\n';
    }

    return 0;
}