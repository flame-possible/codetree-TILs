#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int input[n] = {0,};

    int cnt = 0;

    for(int i = 1; i <= n; i++){
        cin >> input[i];

        if(input[i] == 2){
            cnt++;
        }

        if(cnt == 3){
            cout << i;
            break;
        }
    }

    return 0;
}