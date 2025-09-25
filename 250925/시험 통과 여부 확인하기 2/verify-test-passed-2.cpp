#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int input[4] = {0,};

    int cnt = 0;

    for(int i = 0; i < n; i++){
        int result = 0;

        for(int k = 0; k < n; k++){
            cin >> input[k];

            result += input[k];
        }

        if(result / 4 >= 60){
            cout << "pass\n";

            cnt++;
        }
        else{
            cout << "fail\n";
        }
    }

    cout << cnt << '\n';

    return 0;
}