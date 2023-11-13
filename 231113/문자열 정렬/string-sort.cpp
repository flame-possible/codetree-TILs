#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    
    string input;

    cin >> input;

    sort(input.begin(), input.end());

    cout << input;

    return 0;
}