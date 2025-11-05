#include <iostream>
using namespace std;

int S[100], N[100];

int main() {
    // Please write your code here.

    int n, a, b;

    cin >> n >> a >> b;

    int sCnt = 0;
    int nCnt = 0;

    for(int i = 0; i < n; i++){
        char c;
        int x;

        cin >> c >> x;

        if(c == 'S'){
            S[sCnt++] = x;
        }

        if(c == 'N'){
            N[nCnt++] = x;
        }
    }

    int result = 0;

    for(int i = a; i <= b; i++){
        int sDis = 1000;
        int nDis = 1000;

        for(int k = 0; k < sCnt; k++){
            sDis = min(abs(S[k] - i), sDis);
        }

        for(int k = 0; k < nCnt; k++){
            nDis = min(abs(N[k] - i), nDis);
        }

        if(sDis <= nDis){
            result++;
        }

    }

    cout << result;


    return 0;
}