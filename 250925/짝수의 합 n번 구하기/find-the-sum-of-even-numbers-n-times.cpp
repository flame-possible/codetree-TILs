#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b;

        cin >> a >> b;

        int result = 0;

        for(int k = a; k <= b; k++){
            if(k % 2 == 0){
                result += k;
            }
        }

        cout << result << '\n';

    }

    return 0;
}