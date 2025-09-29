#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string input;
    char tar;

    cin >> input >> tar;

    if(input.find(tar) != string::npos){
        cout << input.find(tar);
    }
    else{
        cout << "No";
    }

    return 0;
}