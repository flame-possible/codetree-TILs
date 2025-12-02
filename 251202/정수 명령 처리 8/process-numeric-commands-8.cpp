#include <iostream>
#include <list>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    list<int> input;

    for(int i = 0; i < N; i++){
        string a;
        int b;

        cin >> a;

        if(a == "push_front"){
            cin >> b;
            input.push_front(b);
        }
        else if(a == "push_back"){
            cin >> b;
            input.push_back(b);
        }
        else if(a == "pop_front"){
            cout << input.front() << '\n';
            input.pop_front();
        }
        else if(a == "pop_back"){
            cout << input.back() << '\n';
            input.pop_back();
        }
        else if(a == "size"){
            cout << input.size() << '\n';
        }
        else if(a == "empty"){
            cout << input.empty() << '\n';
        }
        else if(a == "front"){
            cout << input.front() << '\n';
        }
        else{
            cout << input.back() << '\n';
        }

    }

    return 0;
}