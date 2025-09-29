#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string input;
    int q;

    cin >> input >> q;

    for(int i = 0; i < q; i++){
        int a;

        cin >> a;

        if(a == 1){
            int b, c;

            cin >> b >> c;

            char temp = input[c - 1];
            input[c-1] = input[b-1];
            input[b-1] = temp;

            cout << input << '\n';
        }
        else{
            char b, c;

            cin >> b >> c;
            
            for(int k = 0; k < input.length(); k++){
                if(input[k] == b){
                    input[k] = c;
                }
            }

            cout << input << '\n';
        }
    }

    return 0;
}