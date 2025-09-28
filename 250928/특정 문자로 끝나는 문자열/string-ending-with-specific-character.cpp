#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    string input[10];

    for(int i = 0; i < 10; i++){
        cin >> input[i];
    }

    char tar;

    cin >> tar;

    int result = 1;

    for(int i = 0; i < 10; i++){
        if(input[i][input[i].length()-1] == tar){
            result = 0;
            cout << input[i] << '\n';
        }
    }

    if(result){
        cout << "None";
    }

    return 0;
}