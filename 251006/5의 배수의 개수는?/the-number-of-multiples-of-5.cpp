#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int result = 0;

    for(int i = 0; i < 4; i++){
        for(int k = 0; k < 4; k++){
            int temp;

            cin >> temp;

            if(temp % 5 == 0){
                result++;
            }
        }
    }

    cout << result;

    return 0;
}