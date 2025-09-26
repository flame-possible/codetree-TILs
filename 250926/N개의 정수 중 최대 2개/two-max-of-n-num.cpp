#include <iostream>
#include <climits>

using namespace std;

int N;
int A[100];

int main() {
    cin >> N;

    int max1 = INT_MIN;
    int cnt1 = 0;
    int max2 = INT_MIN;

    for (int i = 0; i < N; i++) {
        cin >> A[i];

        if(A[i] > max1){
            max1 = A[i];
            cnt1 = i;
        }
    }

    for(int i = 0; i < N; i++){
        if(i == cnt1){
            continue;
        }

        if(A[i] > max2){
            max2 = A[i];
        }
    }

    cout << max1 << ' ' << max2;

    // Please write your code here.

    return 0;
}
