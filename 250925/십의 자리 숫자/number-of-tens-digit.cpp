#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int output[10] = {0,};

    while(1){
        int temp;

        cin >> temp;

        if(temp == 0){
            break;
        }

        output[temp / 10]++;
    }

    for(int i = 1; i < 10; i++){
        cout << i << " - " << output[i] << '\n';
    }

    return 0;
}