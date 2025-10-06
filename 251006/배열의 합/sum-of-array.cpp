#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    for(int i = 0; i < 4; i++){

        int result = 0;

        for(int k = 0; k < 4; k++){
            int temp;

            cin >> temp;

            result += temp;
        }

        cout << result << '\n';
    }

    return 0;
}