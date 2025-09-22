#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    while(1){

        int temp;

        cin >> temp;

        if(temp < 25){
            cout << "Higher\n";
        }
        else if(temp > 25){
            cout << "Lower\n";
        }
        else{
            cout << "Good\n";
            break;
        }


    }

    return 0;
}