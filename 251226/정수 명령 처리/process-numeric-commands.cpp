#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    stack<int> s;

    for(int i = 0; i < N; i++){
        string input;
        cin >> input;

        if(input == "push"){
            int a;
            cin >> a;

            s.push(a);
        }
        else if(input == "pop"){
            cout << s.top() << '\n';
            s.pop();
        }
        else if(input == "size"){
            cout << s.size() << '\n';
        }
        else if(input == "empty"){
            cout << s.empty() << '\n';
        }
        else{
            cout << s.top() << '\n';
        }

    }

    return 0;
}