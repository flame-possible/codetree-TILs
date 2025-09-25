#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int arr1[100] = {0,};
    int arr2[100] = {0,};

    int a, b;

    cin >> a >> b;

    for(int i = 0; i < a; i++){
        cin >> arr1[i];
    }
    
    for(int i = 0; i < b; i++){
        cin >> arr2[i];
    }

    for(int i = 0; i < a - b; i++){

        int result = 1;

        for(int k = 0; k < b; k++){
            if(arr1[i + k] != arr2[k]){
                result = 0;
            }
        }

        if(result){
            cout << "Yes\n";

            return 0;
        }
    }

    cout << "No";

    return 0;
}