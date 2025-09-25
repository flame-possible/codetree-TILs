#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int m;

    cin >> m;

    for(int i = 0; i < m; i++){
        int n;

        cin >> n;

        int cnt = 0;

        while(n != 1){
            if(n & 1){
                n *= 3;
                n++;
            }
            else{
                n /= 2;
            }
            cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}