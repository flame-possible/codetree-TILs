#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int cnt = 0;

    while(1){

        int temp;

        cin >> temp;

        if(temp % 2 == 0){
            cout << temp / 2 << "\n";
            cnt++;
        }

        if(cnt == 3){
            break;
        }


    }

    return 0;
}