#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int result = 1;

    for(int i = 0; i < 5; i++){
        int temp;

        cin >> temp;

        if(temp % 3 != 0){
            result = 0;
        }
    }

    cout << result;

    return 0;
}