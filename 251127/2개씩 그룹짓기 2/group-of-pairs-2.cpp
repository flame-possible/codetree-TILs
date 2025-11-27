#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int N;

    cin >> N;

    int input[(N * 2) + 1];

    for(int i = 1; i <= N * 2; i++){
        cin >> input[i];
    }

    sort(input + 1, input + ((N * 2) + 1));

    int l = N;
    int r = N * 2;

    int result = INT_MAX;

    while(l > 0){
        result = min(result, (input[r] - input[l]));

        l--;
        r--;
    }

    cout << result;

    return 0;
}