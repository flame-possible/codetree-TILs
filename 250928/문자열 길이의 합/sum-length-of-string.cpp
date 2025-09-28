#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    string input[n];

    int sum = 0;
    int aSum = 0;

    for(int i = 0; i < n; i++){
        cin >> input[i];

        sum += input[i].length();

        if(input[i][0] == 'a'){
            aSum++;
        }

    }

    cout << sum << ' ' << aSum;

    return 0;
}