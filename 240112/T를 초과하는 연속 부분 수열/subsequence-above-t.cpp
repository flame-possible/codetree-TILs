#include <iostream>

using namespace std;

int main() {
    
    int n, t;

    cin >> n >> t;

    int arr[1001] = {0,};

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int cur = 0, max = 0;

    for(int i = 0; i < n; i++){

        if(arr[i] > t){
            cur++;
        }
        else{
            cur = 0;
        }

        if(max < cur) max = cur;
    }

    cout << max << '\n';

    return 0;
}