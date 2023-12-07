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

    Num num[1001];
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        num[i].n = i;
        cin >> num[i].cnt;
    }

    sort(num+1, num+n+1, cmp);

    int answer[1001] = {0,};

    for(int i = 1; i <= n; i++){
        answer[num[i].n] = i;
    }

    for(int i = 1; i <= n; i++){
        cout << answer[i] << ' ';
    }

    return 0;
}