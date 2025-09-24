#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        int cnt;

        if(i & 1){
            cnt = (i - 1) * n;
        }
        else{
            cnt = i * n;
        }

        for(int k = 1; k <= n; k++){

            if(i & 1){
                cout << ++cnt << ' ';
            }
            else{
                cout << cnt-- << ' ';
            }

        }
        cout << '\n';
    }

    return 0;
}