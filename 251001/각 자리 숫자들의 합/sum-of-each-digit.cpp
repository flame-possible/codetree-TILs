#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    string temp = to_string(n);

    int result = 0;

    for(int i = 0; i < temp.size(); i++){
        result += temp[i] - '0';
    }

    cout << result;

    return 0;
}