#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.

    int max = INT_MIN;

    int input[10] = {0,};

    for(int i = 0; i < 10; i++){
        cin >> input[i];

        if(input[i] > max){
            max = input[i];
        }
    }

    cout << max;

    return 0;
}