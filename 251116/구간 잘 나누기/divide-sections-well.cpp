#include <iostream>
#include <climits>
using namespace std;

int N, M;
int input[101];

int wall[101];
int result = INT_MAX;

void answer(int cur, int cnt){

    if(cnt == M - 1){
        wall[cnt++] = N;

        int temp[101] = {0,};

        int l = 0;
        int r = wall[0];

        int temp_result = 0;

        for(int i = 0; i < cnt; i++){
            r = wall[i];
            // cout << wall[i] << ' ';
            // cout << '\n';

            for(int k = l; k < r; k++){
                temp[i] += input[k];
            }
            cout << temp[i] << ' ';

            temp_result = max(temp_result, temp[i]);

            l = r;
        }

        cout << '\n';

        result = min(result, temp_result);

        return;
    }

    for(int i = cur; i < N; i++){
        wall[cnt] = i;

        answer(i+1, cnt+1);
    }

    return;

}

int main() {
    // Please write your code here.

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }

    answer(1, 0);

    cout << result;


    return 0;
}