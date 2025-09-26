#include <iostream>

using namespace std;

int n;
int price[1000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    int result = 0;

    for(int i = 0; i < n-1; i++){
        for(int k = i+1; k < n; k++){
            if(price[k] - price[i] > result){
                result = price[k] - price[i];
            }
        }
    }

    cout << result;

    // Please write your code here.

    return 0;
}
