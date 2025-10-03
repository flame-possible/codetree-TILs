#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    string a;

    cin >> n >> a;

    int result = 0;

    for(int i = 0; i < n; i++){
        string temp;

        cin >> temp;

        if(a == temp){
            result++;
        }
    }

    cout << result;


    return 0;
}