#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    queue<int> q;

    for(int i = 0; i < N; i++){
        string input;
        cin >> input;

        if(input == "push"){
            int a;
            cin >> a;

            q.push(a);
        }
        else if(input == "pop"){
            cout << q.front() << '\n';
            q.pop();
        }
        else if(input == "size"){
            cout << q.size() << '\n';
        }
        else if(input == "empty"){
            cout << q.empty() << '\n';
        }
        else{
            cout << q.front() << '\n';
        }
    }

    return 0;
}