#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int input;

    for(int i = 0; i < n; i++){
        cin >> input;

        if(input & 1 && input % 3 == 0){
            cout << input << '\n';
        }
    }

    return 0;
}