#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int x, y;

    cin >> x >> y;

    int result = 0;

    for(int i = x; i <= y; i++){
        int cur = i;

        int cnt0 = 0, cnt1 = 0;
        int num[10] = {0,};

        while(cur){
            num[cur % 10]++;

            cur /= 10;
        }

        for(int k = 0; k < 10; k++){
            if(num[k] == 0){
                cnt0++;
            }
            else if(num[k] == 1){
                cnt1++;
            }
        }

        if(cnt0 == 8 && cnt1 == 1){
            result++;
        }
    }

    cout << result;

    return 0;
}