#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    getline(cin, input);

    char tar;
    cin >> tar;

    int result = 0;

    for(int i = 0; i < input.length(); i++){
        if(tar == input[i]){
            result++;
        }
    }

    cout << result;

    return 0;
}