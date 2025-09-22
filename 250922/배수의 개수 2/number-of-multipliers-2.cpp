#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int cnt = 0;
    int input;

    for(int i = 0; i < 10; i++){
        cin >> input;

        if(input & 1){
            cnt++;
        }
    }
    
    cout << cnt;

    return 0;
}