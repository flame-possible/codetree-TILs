#include <iostream>
using namespace std;

int N;
int input[1001];

int target[1001];
int check[1001];

int answer(int cnt){

    if(cnt > 1){
        
        if((target[cnt-2] + target[cnt-1]) == input[cnt - 2]){

            if(cnt == N){
                return 1;
            }
            
        }
        else{
            return 0;
        }

    }

    for(int i = 1; i <= N; i++){
        if(!check[i]){
            check[i] = 1;

            target[cnt] = i;

            if(answer(cnt+1)){
                return 1;
            }

            check[i] = 0;
        }
    }


    return 0;

}

int main() {
    // Please write your code here.

    cin >> N;

    for(int i = 0; i < N - 1; i++){
        cin >> input[i];
    }

    answer(0);

    for(int i = 0; i < N; i++){
        cout << target[i] << ' ';
    }

    return 0;
}
