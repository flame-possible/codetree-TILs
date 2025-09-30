#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string a, b;

    cin >> a >> b;

    string a_result = "", b_result = "";

    for(int i = 0; i < a.size(); i++){
        if(isdigit(a[i])){
            a_result += a[i];
        }
    }
    
    for(int i = 0; i < b.size(); i++){
        if(isdigit(b[i])){
            b_result += b[i];
        }
    }

    cout << stoi(a_result) + stoi(b_result);

    return 0;
}