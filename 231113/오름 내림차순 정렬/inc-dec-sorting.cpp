#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    
    int N;
    int input[101];

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }

    sort(input, input+N);

    for(int i = 0; i < N; i++){
        cout << input[i] << ' ';
    }
    cout << '\n';

    sort(input, input+N, greater<int>());

    for(int i = 0; i < N; i++){
        cout << input[i] << ' ';
    }
    cout << '\n';


    return 0;
}