#include <iostream>
using namespace std;

int N, C, G, H;
int T[1001][2];

int main() {
    // Please write your code here.

    cin >> N >> C >> G >> H;

    int TMin = 1000;
    int TMax = 0;

    for(int i = 0; i < N; i++){
        cin >> T[i][0] >> T[i][1];

        TMin = min(TMin, T[i][0]);
        TMax = max(TMax, T[i][1]);
    }

    int result = 0;

    for(int i = TMin - 1; i <= TMax + 1; i++){
        int temp = 0;

        for(int k = 0; k < N; k++){
            if(i < T[k][0]){
                temp += C;
            }
            else if(i >= T[k][0] && i <= T[k][1]){
                temp += G;
            }
            else{
                temp += H;
            }
        }

        result = max(result, temp);

    }

    cout << result;



    return 0;
}