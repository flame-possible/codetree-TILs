#include <iostream>
using namespace std;

int n;
int a1, b1, c1;
int a2, b2, c2;

int check [101][101][101];

int cal(int a){
    if(a <= 0){
        if(a == 0){
            return n;
        }
        else{
            return n - 1;
        }
    }
    else{
        a %= n;

        return a;
    }
}

int pos(int o, int temp){
    
    for(int i = 0; i < 5; i++){
        if(o == temp){
            return 1;
        }
        temp++;

        if(temp > n){
            temp = 1;
        }
    }

    return 0;

}


void solve(int a, int b, int c){

    int a_min = cal(a - 2);
    int b_min = cal(b - 2);
    int c_min = cal(c - 2);

    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n; k++){
            for(int p = 1; p <= n; p++){
                int a_true = 0, b_true = 0, c_true = 0;

                a_true = pos(i, a_min);
                b_true = pos(k, b_min);
                c_true = pos(p, c_min);


                if(a_true && b_true && c_true){
                    check[i][k][p] = 1;
                }
            }
        }
    }

}

int main() {
    // Please write your code here.

    cin >> n;

    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    solve(a1, b1, c1);
    solve(a2, b2, c2);

    int result = 0;

    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n; k++){
            for(int p = 1; p <= n; p++){
                result += check[i][k][p];
            }
        }
    }

    cout << result;

    return 0;
}