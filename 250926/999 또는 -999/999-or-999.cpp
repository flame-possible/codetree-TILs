#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.

    int max = INT_MIN;
    int min = INT_MAX;

    int input[100] = {0,};

    for(int i = 0; i < 100; i++){
        cin >> input[i];

        if(input[i] == 999 || input[i] == -999){
            break;
        }

        if(input[i] > max){
            max = input[i];
        }

        if(input[i] < min){
            min = input[i];
        }
    }

    cout << max << ' ' << min;

    return 0;
}