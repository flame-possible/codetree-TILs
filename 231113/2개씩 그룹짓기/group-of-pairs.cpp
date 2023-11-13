#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int N;

    int input[2001] = {0,};

    cin >> N;

    for(int i = 0; i < N*2; i++){
        cin >> input[i];
    }

    sort(input, input+(N*2));

    int sum = 0;

    int st = 0, en = (N*2) - 1;

    while(st < en){
        int temp = input[st++] + input[en--];
        if(sum < temp){
            sum = temp;
        }
    }

    cout << sum;

    return 0;
}