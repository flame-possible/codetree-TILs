#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int N;

    int input[1001] = {0,};

    cin >> N;

    for(int i = 0; i < N*2; i++){
        cin >> input[i];
    }

    sort(input, input+(N*2));

    int cnt = 0;

    int sum_a = 0, sum_b = 0;

    for(int i = 0; i < N; i++){
        sum_a += input[cnt++];
        sum_b += input[cnt++];
    }

    if(sum_a <= sum_b){
        cout << sum_b;
    }
    else{
        cout << sum_a;
    }

    return 0;
}