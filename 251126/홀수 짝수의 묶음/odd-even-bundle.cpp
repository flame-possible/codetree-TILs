#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    
    int N;

    cin >> N;

    int input[N];

    int odd = 0;
    int even = 0;

    for(int i = 0; i < N; i++){
        cin >> input[i];

        if(input[i] & 1){
            odd++;
        }
        else{
            even++;
        }
    }
    
    int cnt = 0;

    while(1){

        if(cnt & 1){
            if(odd >= 1){
                odd -= 1;
            }
            else{
                break;
            }

        }
        else{
            if(even >= 1){
                even -= 1;
            }
            else if(odd >= 2){
                odd -= 2;
            }
            else{
                if(odd >= 1 && even == 0){
                    cnt--;
                }
                break;
            }

        }

        cnt++;

    }
    
    cout << cnt;

    return 0;
}