#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    string input[n];

    for(int i = 0; i < n; i++){
        cin >> input[i];
    }

    char tar;

    cin >> tar;

    int sum = 0;
    double ave = 0;

    for(int i = 0; i < n; i++){
        if(input[i][0] == tar){
            sum++;
            ave += input[i].length();
        }
    }

    cout << fixed;
    cout.precision(2);

    cout << sum << ' ' << ave / sum;

    return 0;
}