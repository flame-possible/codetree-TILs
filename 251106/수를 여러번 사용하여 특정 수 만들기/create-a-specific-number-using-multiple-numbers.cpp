#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b, c;

    cin >> a >> b >> c;

    int result = 0;

    for(int i = 0; i < (c / a) + 1; i++){
        for(int k = 0; k < (c / b) + 1; k++){
            int temp = (a * i) + (b * k);

            if(temp <= c){
                result = max(result, temp);
            }
        }
    }

    cout << result;

    return 0;
}