#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    string input1, input2;

    cin >> input1 >> input2;

    if(input1.length() > input2.length()){
        cout << input1 << ' ' << input1.length();
    }
    else if(input1.length() < input2.length()){
        cout << input2 << ' ' << input2.length();
    }
    else{
        cout << "same";
    }

    return 0;
}