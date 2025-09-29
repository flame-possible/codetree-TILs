#include <iostream>
using namespace std;

string a;
string b;

int main() {
    // Please write your code here.


    getline(cin, a);
    cout << a << '\n';
    getline(cin, b);
    cout << b << '\n';

    int cnt = 0;
    int result = 0;


    while(1){
        if(a.find(b) != string::npos){
            cnt = a.find(b) + 1;
            result++;
        }
        else{
            break;
        }
    }

    cout << result;

    return 0;
}