#include <iostream>

using namespace std;

int st, ed;

int main() {
    cin >> st >> ed;

    int result = 0;

    for(int i = st; i <= ed; i++){

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

    // Please write your code here.

    return 0;
}
