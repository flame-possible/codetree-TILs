#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int cnt = 9;

    for(int i = 0; i < n; i++){
        for(int k = 0; k < n; k++){
            cout << cnt--;

            if(cnt == 0){
                cnt = 9;
            }
        }

        cout << '\n';
    }

    return 0;
}