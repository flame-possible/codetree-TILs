#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    while(1){

        int temp;

        cin >> temp;

        if(temp == 1){
            cout << "John\n";
        }
        else if(temp == 2){
            cout << "Tom\n";
        }
        else if(temp == 3){
            cout << "Paul\n";
        }
        else if(temp == 4){
            cout << "Sam\n";
        }
        else{
            cout << "Vacancy\n";
            break;
        }


    }

    return 0;
}