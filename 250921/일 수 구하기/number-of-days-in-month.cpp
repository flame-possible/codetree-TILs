#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int result[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int n;

    cin >> n;

    if(n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12){
        cout << "31";
    }
    else if(n == 2){
        cout << "28";
    }
    else{
        cout << "30";
    }

    // cout << result[n];

    return 0;
}