#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string a, b;

    cin >> a >> b;

    int result = -1;

    for(int i = 0; i < a.size(); i++){
        a = a.substr(a.size() - 1, 1) + a.substr(0, a.size() - 1);

        if(a == b){
            result = i + 1;
            break;
        }
    }

    cout << result;

    return 0;
}