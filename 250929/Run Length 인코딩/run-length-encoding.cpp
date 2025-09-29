#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    // Please write your code here.

    char tar = A[0];
    int cnt = 0;

    string result = "";

    for(int i = 0; i < A.length(); i++){
        if(tar == A[i]){
            cnt++;
        }
        else{
            result += tar;
            result += to_string(cnt);

            // cout << tar << cnt;
            tar = A[i];
            cnt = 1;
        }
    }

    result += tar;
    result += to_string(cnt);

    cout << result.length() << '\n';
    cout << result;

    return 0;
}
