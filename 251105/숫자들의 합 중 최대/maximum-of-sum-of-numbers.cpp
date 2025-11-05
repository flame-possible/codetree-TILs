#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int x, y;

    cin >> x >> y;

    int result = 0;

    for(int i = x; i <= y; i++){
        int temp = 0;
        int cur = i;

        while(cur){
            temp += cur % 10;

            cur /= 10;
        }

        result = max(result, temp);
    }

    cout << result;

    return 0;
}