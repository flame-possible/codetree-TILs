#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int input[3];

    cin >> input[0] >> input[1] >> input[2];

    sort(input, input + 3);

    int cha1 = input[1] - input[0];
    int cha2 = input[2] - input[1];

    if(cha1 == 2 || cha2 == 2){
        cout << '1';
    }
    else if(cha1 == 1 && cha2 == 1){
        cout << '0';
    }
    else{
        cout << '2';
    }

    return 0;
}