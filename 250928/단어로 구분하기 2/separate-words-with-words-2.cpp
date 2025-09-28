#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string input[10];

    for(int i = 0; i < 10; i++){
        cin >> input[i];

        if(i % 2 == 0){
            cout << input[i] << '\n';
        }
    }

    return 0;
}