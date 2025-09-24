#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int cnt = n - 1;

    for(int i = 1; i <= n; i++){
        int result = i;
        for(int k = 0; k < n; k++){

            cout << result;

            if(k & 1){
                result -= cnt;
            }
            else{
                result += cnt;
            }

        }

        cnt -= 2;
        
        cout << '\n';
    }

    return 0;
}