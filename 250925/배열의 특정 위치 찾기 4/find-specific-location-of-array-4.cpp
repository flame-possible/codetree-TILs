#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int input[10] = {0,};
    int cnt = 0;
    int result = 0;

    for(int i = 0; i < 10; i++){
        cin >> input[i];

        if(input[i] == 0){
            break;
        }

        if(input[i] % 2 == 0){
            cnt++;
            result += input[i];
        }
    }

    cout << cnt << ' ' << result;

    return 0;
}