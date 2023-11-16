#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int n;
    int input[101] = {0,};
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> input[i];
        sort(input+1, input+i);

        if(i&1){
            cout << input[(i/2) + 1] << ' ';
        }
    }

    return 0;
}