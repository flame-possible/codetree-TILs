#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int n;

    cin >> n;

    int input_a[101] = {0,};
    int input_b[101] = {0,};

    for(int i = 0; i < n; i++){
        cin >> input_a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> input_b[i];
    }

    sort(input_a, input_a+n);
    sort(input_b, input_b+n);

    for(int i = 0; i < n; i++){
        if(input_a[i] != input_b[i]){
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";

    return 0;
}