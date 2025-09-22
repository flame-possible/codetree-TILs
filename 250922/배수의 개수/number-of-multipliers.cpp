#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int cnt3 = 0, cnt5 = 0;
    int input;

    for(int i = 0; i < 10; i++){
        cin >> input;

        if(input % 3 == 0){
            cnt3++;
        }
        if(input % 5 == 0){
            cnt5++;
        }
    }
    
    cout << cnt3 << ' ' << cnt5;

    return 0;
}