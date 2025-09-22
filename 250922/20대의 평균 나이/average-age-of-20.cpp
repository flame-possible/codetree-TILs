#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int sum = 0, cnt = 0;

    while(1){

        int temp;

        cin >> temp;

        sum += temp;
        cnt++;

        if(temp >= 30){
            sum -= temp;
            cnt--;
            break;
        }

    }

    cout << fixed;
    cout.precision(2);

    cout << (double) sum / cnt;

    return 0;
}