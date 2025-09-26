#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.

    int input[10] = {0,};

    int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0; i < 10; i++){
        cin >> input[i];

        if(input[i] < 500){
            if(input[i] > max){
                max = input[i];
            }
        }
        else if(input[i] > 500){
            if(input[i] < min){
                min = input[i];
            }
        }
    }

    cout << max << ' ' << min;

    return 0;
}