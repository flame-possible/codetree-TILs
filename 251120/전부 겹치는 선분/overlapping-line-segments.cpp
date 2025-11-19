#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    int input[101] = {0,};

    for(int i = 0; i < N; i++){
        int x1, x2;
        cin >> x1 >> x2;

        for(int i = x1; i <= x2; i++){
            input[i]++;

            if(input[i] == N){
                cout << "Yes";
                return 0;
            }
        }

    }

    cout << "No";

    return 0;
}