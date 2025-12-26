#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    cin >> input;

    stack<char> s;

    for(int i = 0; i < input.size(); i++){
        if(input[i] == '('){
            s.push('(');
        }
        else{
            if(s.empty()){
                cout << "No" << '\n';
                return 0;
            }
            if(s.top() == '('){
                s.pop();
            }
            else{
                cout << "No" << '\n';
                return 0;
            }
        }
    }

    if(s.size() != 0){
        cout << "No" << '\n';
    }
    else{
        cout << "Yes" << '\n';
    }

    return 0;
}