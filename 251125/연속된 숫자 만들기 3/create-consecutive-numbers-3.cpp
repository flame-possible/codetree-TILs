#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.

    int input[3];

    cin >> input[0] >> input[1] >> input[2];

    sort(input, input+3);

    int result = 0;

    while(input[0] + 1 != input[1] || input[1] + 1 != input[2]){

        if(input[1] - input[0] > input[2] - input[1]){
            input[2] = input[1] - 1;
        }
        else{
            input[0] = input[2] - 1;
        }

        result++;

        sort(input, input+3);

    }

    // for(int i = 0; i < 3; i++){
    //     cout << input[i] << ' ';
    // }

    cout << result;

    return 0;
}