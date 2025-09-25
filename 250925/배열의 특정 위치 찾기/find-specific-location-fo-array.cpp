#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int input[10] = {0,};

    int sum = 0;
    double ave = 0;

    for(int i = 0; i < 10; i++){
        cin >> input[i];

        if(i & 1){
            sum += input[i];
        }

        if((i + 1) % 3 == 0){
            ave += input[i];
        }
    }

    cout << fixed;
    cout.precision(1);

    ave /= 3;

    cout << sum << ' ' << ave;



    return 0;
}