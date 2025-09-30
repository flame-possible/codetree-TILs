#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    cin >> input;

    while(input.length() > 1){
        int n;

        cin >> n;

        if(n >= input.length()){
            input.erase(input.length()-1, 1);
        }
        else{
            input.erase(n, 1);
        }

        cout << input << '\n';
    }

    return 0;
}