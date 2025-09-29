#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    cin >> input;

    int result1 = 0, result2 = 0;

    int cnt = 0;

    while(1){
        if(input.find("ee", cnt) != string::npos){
            cnt = input.find("ee", cnt) + 1;
            result1++;
        }
        else{
            break;
        }
    }

    cnt = 0;

    while(1){
        if(input.find("eb", cnt) != string::npos){
            cnt = input.find("eb", cnt) + 1;
            result2++;
        }
        else{
            break;
        }
    }

    cout << result1 << ' ' << result2;

    return 0;
}