#include <iostream>
#include <climits>

using namespace std;

int N;
int A[100];

int main() {
    cin >> N;

    int min = INT_MAX;

    for (int i = 0; i < N; i++) {
        cin >> A[i];

        if(A[i] < min){
            min = A[i];
        }
    }

    int cnt = 0;

    for(int i = 0; i < N; i++){
        if(A[i] == min){
            cnt++;
        }
    }

    cout << min << ' ' << cnt;

    // Please write your code here.

    return 0;
}
