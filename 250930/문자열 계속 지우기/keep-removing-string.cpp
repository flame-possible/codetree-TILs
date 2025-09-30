#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string a, b;

    cin >> a >> b;

    int cnt = a.find(b);

    while(cnt != string::npos){
        a.erase(cnt, b.length());

        cnt = a.find(b);
    }

    cout << a;

    return 0;
}