#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    string str[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    char input;

    cin >> input;

    int result = 0;

    for(int i = 0; i < 5; i++){
        if(str[i][2] == input || str[i][3] == input){
            cout << str[i] << '\n';
            result++;
        }
    }

    cout << result;

    return 0;
}