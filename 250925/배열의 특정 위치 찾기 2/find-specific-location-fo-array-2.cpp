#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int odd_sum = 0;
    int even_sum = 0;

    int input[10] = {0,};

    for(int i = 0; i < 10; i++){
        cin >> input[i];

        if(i & 1){
            even_sum += input[i];
        }
        else{
            odd_sum += input[i];
        }
    }

    if(even_sum > odd_sum){
        cout << even_sum - odd_sum;
    }
    else{
        cout << odd_sum - even_sum;
    }

    return 0;
}