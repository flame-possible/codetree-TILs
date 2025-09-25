#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n, q;

    cin >> n >> q;

    int input[n] = {0,};

    for(int i = 0; i < n; i++){
        cin >> input[i];
    }

    for(int i = 0; i < q; i++){
        int a, b, c;

        cin >> a;

        if(a == 3){

            cin >> b >> c;

            for(int i = b - 1; i < c; i++){
                cout << input[i] << ' ';
            }

            cout << '\n';

        }
        else{
            cin >> b;

            if(a == 1){
                cout << input[b-1] << '\n';
            }
            else{
                int find = 1;

                for(int i = 0; i < n; i++){
                    if(input[i] == b){
                        cout << i + 1 << '\n';
                        find = 0;
                        break;
                    }
                }

                if(find){
                    cout << "0\n";
                }
            }
        }
    }

    return 0;
}