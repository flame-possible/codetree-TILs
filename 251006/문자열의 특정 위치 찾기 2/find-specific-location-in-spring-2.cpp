#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    char input;

    cin >> input;

    int result = 0;

    for(int i = 0; i < 5; i++){
        if(arr[i][2] == input || arr[i][3] == input){
            result++;

            cout << arr[i] << '\n';
        }
    }

    cout << result;

    return 0;
}