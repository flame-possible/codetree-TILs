#include <iostream>

using namespace std;

int main() {
    
    int N;

    cin >> N;

    int max = 0, cur = 0;

    int input, prev = 0;
    for(int i = 0; i < N; i++){
        cin >> input;

        if(cur == 0){
            cur++;
        }
        else{
            if(input > prev){
                cur++;
            }
            else{
                cur = 1;
            }
        }
        prev = input;

        if(max < cur) max = cur;
    }

    cout << max << '\n';

    return 0;
}