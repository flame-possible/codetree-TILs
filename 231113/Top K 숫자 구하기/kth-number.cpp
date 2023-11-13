#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int N, k;

    cin >> N >> k;

    int input[1001] = {0,};

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }

    sort(input, input+N);

    cout << input[k-1];

    return 0;
}