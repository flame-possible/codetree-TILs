#include <iostream>
using namespace std;

int N, a, b, c;

int main() {
    // Please write your code here.

    cin >> N >> a >> b >> c;

    int result = 0;

    for(int i = 1; i <= N; i++){
        for(int k = 1; k <= N; k++){
            for(int p = 1; p <= N; p++){
                if((i <= a + 2 && i >= a - 2) || (k <= b + 2 && k >= b - 2) || (p <= c + 2 && p >= c - 2)){
                    result++;
                }
            }
        }
    }

    cout << result;


    return 0;
}