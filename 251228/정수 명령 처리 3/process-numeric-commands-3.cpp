#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    deque<int> deck;

    for(int i = 0; i < N; i++){
        string input;

        cin >> input;

        if(input == "push_front"){
            int a;

            cin >> a;

            deck.push_front(a);
        }
        else if(input == "push_back"){
            int a;

            cin >> a;

            deck.push_back(a);
        }
        else if(input == "pop_front"){
            cout << deck.front() << '\n';
            deck.pop_front();
        }
        else if(input == "pop_back"){
            cout << deck.back() << '\n';
            deck.pop_back();
        }
        else if(input == "size"){
            cout << deck.size() << '\n';
        }
        else if(input == "empty"){
            cout << deck.empty() << '\n';
        }
        else if(input == "front"){
            cout << deck.front() << '\n';
        }
        else{
            cout << deck.back() << '\n';
        }
    }

    return 0;
}