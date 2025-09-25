#include <iostream>
using namespace std;

int main() {

    int n;

    cin >> n;

    for(int i = 2; i <= n; i++){

        int result = 1;

        for(int k = 2; k < i; k++){
            if(i % k == 0){
                result = 0;
                break;
            }
        }

        if(result){
            cout << i << ' ';
        }
    }

    // Please write your code here.
    return 0;
}