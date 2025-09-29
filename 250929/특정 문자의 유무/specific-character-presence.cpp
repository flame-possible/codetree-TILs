#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    cin >> input;

    if(input.find("ee") != string::npos){
        cout << "Yes ";
    }
    else{
        cout << "No ";
    }

    if(input.find("ab") != string::npos){
        cout << "Yes ";
    }
    else{
        cout << "No ";
    }

    return 0;
}