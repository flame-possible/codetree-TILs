#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b;

    cin >> a >> b;

    int result = 0;

    if(a < b){
        for(int i = a; i <= b; i++){
            if(i % 5 == 0){
                result += i;
            }
        }
    }
    else{
        for(int i = b; i <= a; i++){
            if(i % 5 == 0){
                result += i;
            }
        }
    }


    cout << result;

    return 0;
}