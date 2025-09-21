#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    cout << N * N << '\n';

    if(N < 5){
        cout << "tiny";
    }

    return 0;
}