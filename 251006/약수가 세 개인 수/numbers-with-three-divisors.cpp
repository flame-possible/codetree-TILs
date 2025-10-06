#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b;

    cin >> a >> b;

    int result = 0;

    for(int i = a; i <= b; i++){

        int cnt = 0;

        for(int k = 1; k <= i; k++){
            if(i % k == 0){
                cnt++;
            }
        }

        if(cnt == 3){
            result++;
        }
    }

    cout << result;

    return 0;
}