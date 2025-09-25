#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    for(int i = 1; i <= 19; i++){
        for(int k = 1; k <= 19; k++){
            cout << i << " * " << k << " = " << i * k;

            if(k & 1){
                if(k == 19){
                    cout << '\n';
                }
                else{
                    cout << " / ";
                }
            }
            else{
                cout << '\n';
            }
        }
    }

    return 0;
}