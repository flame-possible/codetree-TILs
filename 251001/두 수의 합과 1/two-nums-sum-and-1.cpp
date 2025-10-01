#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b;

    cin >> a >> b;

    string temp = to_string(a+b);

    int result = 0;

    for(int i = 0; i < temp.size(); i++){
        if(temp[i] == '1'){
            result++;
        }
    }

    cout << result;


    return 0;
}