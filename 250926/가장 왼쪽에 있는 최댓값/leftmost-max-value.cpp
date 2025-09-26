#include <iostream>
#include <climits>

using namespace std;

int N;
int a[1001];

int main() {
    cin >> N;

    int max = INT_MIN;
    int cnt = N;

    for (int i = 1; i <= N; i++) {
        cin >> a[i];
    }

    while(cnt != 0){
        int max_idx = cnt;

        for(int i = 1; i <= max_idx; i++){
            if(a[i] > max){
                max = a[i];
                cnt = i;
            }
        }

        // for(int i = 1; i <= cnt; i++){
        //     if(a[i] == max){
        //         cnt = i;
        //     }
        // }

        cout << cnt-- << ' ';

        max = 0;

    }

    // Please write your code here.

    return 0;
}
