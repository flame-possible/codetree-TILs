#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string input;
    int n;

    cin >> input >> n;

    for(int i = 0; i < n; i++){
        int temp;

        cin >> temp;

        if(temp == 1){
            input = input.substr(1, input.length() - 1) + input.substr(0, 1);
        }
        else if(temp == 2){
            input = input.substr(input.length() - 1, 1) + input.substr(0, input.length() - 1);
        }
        else{
            string tar = "";
            for(int k = input.length() - 1; k >= 0; k--){
                tar += input.substr(k, 1);
            }
            input = tar;
        }

        cout << input << '\n';
    }

    return 0;
}