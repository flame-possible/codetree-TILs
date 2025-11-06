#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int x, y;

    cin >> x >> y;

    int result = 0;

    for(int i = x; i <= y; i++){

        int s[7] = {0,};
        int cnt = 0;
        int cur = i;

        while(cur){
            s[cnt++] = cur % 10;

            cur /= 10;
        }

        int l = 0;
        int r = cnt-1;

        int pan = 1;

        while(l < r){
            if(s[l++] != s[r--]){
                pan = 0;
                break;
            }
        }

        if(pan) result++;

    }

    cout << result;

    return 0;
}