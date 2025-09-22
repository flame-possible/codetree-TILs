#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int result = 0;

    for(int i = 0; i < n; i++){
        int temp;

        cin >> temp;

        if(temp & 1 && temp % 3 == 0){
            result += temp;
        }
    }

    cout << result;

    return 0;
}