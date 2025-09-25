#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int output[7] = {0,};

    for(int i = 0; i < 10; i++){
        int temp = 0;

        cin >> temp;

        output[temp]++;
    }

    for(int i = 1; i < 7; i++){
        cout << i << " - " << output[i] << '\n';
    }

    return 0;
}