#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int input[10] = {0,};

    int cnt = 9;
    int flag = 0;

    for(int i = 0; i < 10; i++){
        cin >> input[i];

        if(input[i] == 0 && flag == 0){
            cnt = i - 1;
            flag = 1;
        }
    }

    int result = 0;

    for(int i = 0; i <= cnt; i++){
        result += input[i];
    }

    cout << fixed;
    cout.precision(1);

    cout << result << ' ' << (double) result / (cnt + 1);


    return 0;
}