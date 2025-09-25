#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int output[11] = {0,};

    while(1){
        int temp;

        cin >> temp;

        if(temp == 0){
            break;
        }

        output[temp / 10]++;
    }

    for(int i = 10; i > 0; i--){
        cout << i * 10 << " - " << output[i] << '\n';
    }

    return 0;
}