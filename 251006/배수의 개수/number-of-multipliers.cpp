#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int result3 = 0, result5 = 0;

    for(int i = 0; i < 10; i++){
        int temp;

        cin >> temp;

        if(temp % 3 == 0){
            result3++;
        }
        
        if(temp % 5 == 0){
            result5++;
        }
    }

    cout << result3 << ' ' << result5;

    return 0;
}