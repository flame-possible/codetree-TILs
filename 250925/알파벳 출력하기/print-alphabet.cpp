#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    char cnt = 'A';

    for(int i = 0; i < n; i++){
        for(int k = 0; k < i + 1; k++){
            cout << cnt++;

            if(cnt == 'Z'+1){
                cnt = 'A';
            }
        }
        cout << '\n';
    }

    return 0;
}