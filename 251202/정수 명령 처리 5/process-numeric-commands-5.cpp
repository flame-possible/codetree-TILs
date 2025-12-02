#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    vector<int> input;

    for(int i = 0; i < N; i++){
        string a;
        int b;

        cin >> a;

        if(a == "push_back"){
            cin >> b;
            input.push_back(b);
        }
        else if(a == "pop_back"){
            input.pop_back();
        }
        else if(a == "size"){
            cout << input.size() << '\n';
        }
        else{
            cin >> b;
            cout << input[b-1] << '\n';
        }

    }

    return 0;
}