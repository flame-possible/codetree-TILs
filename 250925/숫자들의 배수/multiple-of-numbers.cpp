#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int result = 0;

    for(int i = 1; ; i++){
        cout << n * i << ' ';

        if(n * i % 5 == 0){
            result++;
        }

        if(result == 2){
            break;
        }
    }

    return 0;
}