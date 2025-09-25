#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int result = 0;
    int cnt = 0;
    int flag = 0;

    for(int i = 0; i < 10; i++){
        int n;

        cin >> n;

        if(flag == 0){
            if(n < 250){
                result += n;
            }
            else{
                flag = 1;
                cnt = i;
            }
        }
    }

    cout << fixed;
    cout.precision(1);

    cout << result << ' ';

    if(flag == 0){
        cout << (double) result / 10;
    }
    else{
        cout << (double) result / cnt;
    }

    return 0;
}