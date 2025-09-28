#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    cin >> input;
    
    int cnt;

    cin >> cnt;

    // cout << input.length() << '\n';
    // cout << input.length() - cnt << '\n';

    if(cnt >= input.length()){
        for(int i = input.length() - 1; i >= 0; i--){
            cout << input[i];
        }
    }
    else{
        for(int i = input.length() - 1; i >= input.length() - cnt; i--){
            // cout << i << '\n';
            cout << input[i];
        }
    }

    return 0;
}