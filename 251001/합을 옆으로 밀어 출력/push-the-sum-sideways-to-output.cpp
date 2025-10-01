#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int sum = 0;

    for(int i = 0; i < n; i++){
        int temp;

        cin >> temp;

        sum += temp;
    }

    string result = to_string(sum);

    result = result.substr(1, result.size()-1) + result.substr(0, 1);

    cout << result;

    return 0;
}