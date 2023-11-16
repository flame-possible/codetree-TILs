#include <iostream>
#include <algorithm>

using namespace std;

int strncmp(string a, string b, int cnt){
    for(int i = 0; i < cnt; i++){
        if(a[i] !=  b[i]){
            return -1;
        }
    }
    return 0;
}

int main() {
    
    int n, k;
    string T;

    string input[101];    

    cin >> n >> k >> T;

    int T_len = T.length();
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> input[cnt];
        if(strncmp(T, input[cnt], T_len)){
            continue;
        }
        cnt++;
    }

    sort(input, input+cnt);

    cout << input[k-1];

    
    return 0;
}