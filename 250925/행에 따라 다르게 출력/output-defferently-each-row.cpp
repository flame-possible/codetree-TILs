#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int cnt = 0;

    for(int i = 0; i < n; i++){
        for(int k = 0; k < n; k++){
            if(i & 1){
                cnt += 2;
                cout << cnt << ' ';
            }
            else{
                cnt++;
                cout << cnt << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}