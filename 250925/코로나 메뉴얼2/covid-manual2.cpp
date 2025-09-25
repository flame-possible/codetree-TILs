#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int output[4] = {0,};

    for(int i = 0; i < 3; i++){
        char a;
        int b;

        cin >> a >> b;

        if(a == 'Y' && b >= 37){
            output[0]++;
        }
        else if(a == 'N' && b >= 37){
            output[1]++;
        }
        else if(a == 'Y' && b < 37){
            output[2]++;
        }
        else{
            output[3]++;
        }
    }

    for(int i = 0; i < 4; i++){
        cout << output[i] << ' ';
    }

    if(output[0] >= 2){
        cout << 'E';
    }

    return 0;
}