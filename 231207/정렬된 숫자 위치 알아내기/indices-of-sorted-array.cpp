#include <iostream>
#include <algorithm>

using namespace std;

struct Num{
    int n;
    int cnt;
};

int cmp(Num &a, Num &b){
    if(a.cnt == b.cnt){
        return a.n < b.n;
    }

    return a.cnt < b.cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.

    Num num1[1001], num2[1001];
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        num1[i].n = num2[i].n = i;
        cin >> num1[i].cnt;
        num2[i].cnt = num1[i].cnt;
    }

    sort(num1+1, num1+n+1, cmp);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            // cout << num2[i].cnt << ' ' << num1[j].cnt << '\n';
            if(num2[i].n == num1[j].n && num2[i].cnt == num1[j].cnt){
                cout << j << ' ';
            }
        }
    }

    return 0;
}