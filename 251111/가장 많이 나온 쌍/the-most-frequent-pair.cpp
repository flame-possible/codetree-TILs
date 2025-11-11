#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N, M;

    cin >> N >> M;

    int input[N+1][N+1] = {0,};

    for(int i = 0; i < M; i++){
        int a, b;

        cin >> a >> b;

        if(a < b){
            input[a][b]++;
        }
        else{
            input[b][a]++;
        }
    }

    int result = 0;

    for(int i = 1; i <= N - 1; i++){
        for(int k = i + 1; k <= N; k++){
            result = max(result, input[i][k]);
        }
    }

    cout << result;



    return 0;
}