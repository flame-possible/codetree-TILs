#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int input[100] = {0,};

    input[0] = 1;
    input[1] = n;

    cout << input[0] << ' ' << input[1] << ' ';

    for(int i = 2; i < 100; i++){
        input[i] = input[i - 1] + input[i - 2];

        cout << input[i] << ' ';

        if(input[i] > 100){
            break;
        }
    }

    return 0;
}