#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    
    int n;
    int input[101] = {0,};
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d", input+i);
        sort(input+1, input+i+1);

        if(i&1){
            cout << input[(i/2) + 1] << ' ';
        }
    }

    return 0;
}