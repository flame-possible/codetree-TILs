#include <iostream>
#include <string>

using namespace std;

struct Code{
    string code;
    char color;
    int second;
};

int main() {
    
    Code code;

    cin >> code.code >> code.color >> code.second;

    cout << "code : " << code.code << '\n';
    cout << "color : " << code.color << '\n';
    cout << "second : " << code.second << '\n';

    return 0;
}