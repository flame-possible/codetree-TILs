#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    char a[4] = {0,};
    int b[4] = {0,};

    int result = 0;

    for(int i = 0; i < 3; i++){
        cin >> a[i] >> b[i];
        
        if(a[i] == 'Y' && b[i] >= 37){
            result++;
        }
    }

    if(result >= 2){
        cout << "E";
    }
    else{
        cout << "N";
    }

    

    return 0;
}