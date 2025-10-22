#include <iostream>
using namespace std;

int checkCnt1[10][2];
int checkCnt2[10][2];
int checkCnt3[10][2];

int n;


int main() {
    // Please write your code here.

    cin >> n;

    int result = 0;

    int input[n][3] = {0,};
    int inputCnt[n][2] = {0,};

    for(int i = 0; i < n; i++){
        int temp;
        int a, b, c;

        int cnt1, cnt2;

        cin >> temp >> cnt1 >> cnt2;

        a = temp / 100;
        
        temp %= 100;
        
        b = temp / 10;

        temp %= 10;

        c = temp;

        input[i][0] = a;
        input[i][1] = b;
        input[i][2] = c;

        inputCnt[i][0] = cnt1;
        inputCnt[i][1] = cnt2;

    }

    
    for(int i = 1; i <= 9; i++){
        for(int k = 1; k <= 9; k++){
            for(int p = 1; p <= 9; p++){
                if(i == k || i == p || k == p) continue;

                int ans = 0;

                for(int o = 0; o < n; o++){
                    int temp1 = 0, temp2 = 0;
                    
                    int a = input[o][0];
                    int b = input[o][1];
                    int c = input[o][2];

                    int cnt1 = inputCnt[o][0];
                    int cnt2 = inputCnt[o][1];

                    if(a == i){
                        temp1++;
                    }
                    else if(a == k || a == p){
                        temp2++;
                    }
                    
                    if(b == k){
                        temp1++;
                    }
                    else if(b == i || b == p){
                        temp2++;
                    }
                    
                    if(c == p){
                        temp1++;
                    }
                    else if(c == i || c == k){
                        temp2++;
                    }

                    if(temp1 == cnt1 && temp2 == cnt2){
                        ans++;
                    }
                }

                if(ans == n){
                    result++;
                }

            }
        }
    }

    cout << result;

    return 0;
}