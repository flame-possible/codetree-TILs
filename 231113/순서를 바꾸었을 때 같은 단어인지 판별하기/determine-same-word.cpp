#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    
    string a, b;

    cin >> a >> b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int a_len = a.length(), b_len = b.length();

    if(a_len != b_len){
        cout << "No";
        return 0;
    }
    else{
        if(a != b){
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";



    return 0;
}