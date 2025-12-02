#include <iostream>
#include <list>
using namespace std;

int main() {
    // Please write your code here.

    int N, M;

    cin >> N >> M;

    list<char> input;
    
    string s;
    cin >> s;

    list<char>::iterator it;

    for(int i = 0; i < s.size(); i++){
        input.push_back(s[i]);
    }
    it = input.end();
    
    for(int i = 0; i < M; i++){
        char a;
        char b;

        cin >> a;

        if(a == 'L'){
            if(it != input.begin()){
                it--;
            }
        }
        else if(a == 'R'){
            if(it != input.end()){
                it++;
            }
        }
        else if(a == 'D'){
            if(it != input.end()){
                it = input.erase(it);
            }
        }
        else{
            cin >> b;

            if(it != input.end()){
                input.insert(it, b);
            }
        }

        // for(list<char>::iterator temp = input.begin(); temp != input.end(); temp++){
        //     cout << *temp;
        // }
        // cout << '\n';

    }

    for(it = input.begin(); it != input.end(); it++){
        cout << *it;
    }

    return 0;
}