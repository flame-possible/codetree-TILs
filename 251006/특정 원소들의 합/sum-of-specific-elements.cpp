#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int result = 0;

    for(int i = 0; i < 4; i++){
        for(int k = 0; k < 4; k++){
            int temp;

            cin >> temp;

            if(k <= i){
                result += temp;
            }
        }
    }

    cout << result;

    return 0;
}