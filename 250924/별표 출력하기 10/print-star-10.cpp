#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int st = 1, ed = n;

    for(int i = 1; i <= n; i++){

        int cnt = 0;

        if(i & 1){
            cnt = st++;
        }
        else{
            cnt = ed--;
        }

        for(int k = 0; k < cnt; k++){
            cout << "* ";
        }

        cout << '\n';

        // cout << st << ' ' << ed << '\n';
    }

    st--;
    ed++;

    for(int i = n; i > 0; i--){
        
        int cnt = 0;

        if(i & 1){
            cnt = st--;
        }
        else{
            cnt = ed++;
        }

        for(int k = 0; k < cnt; k++){
            cout << "* ";
        }

        cout << '\n';
        
        // cout << st << ' ' << ed << '\n';
    }

    return 0;
}