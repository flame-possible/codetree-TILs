#include <iostream>

using namespace std;

int main() {
    
    int N;

    cin >> N;

    int max = 0;
    int cur = 0;

    int input, prev = 0;
    for(int i = 0; i < N; i++){
        cin >> input;

        if(i > 0){
            if((input > 0 && prev > 0) || (input < 0 && prev < 0)){
                cur++;
            }
            else{
                cur = 1;
            }
        }
        else{
            cur++;
        }
        
        prev = input;

        if(cur > max) max = cur;
    }

    cout << max << '\n';

    return 0;
}