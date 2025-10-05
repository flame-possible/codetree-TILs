#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b, c;

    cin >> a >> b >> c;

    int re1, re2, re3;

    if(a > b){

        if(a > c){
            re1 = a;

            if(b > c){
                re2 = b;
                re3 = c;
            }
            else{
                re2 = c;
                re3 = b;
            }
        }
        else{
            re1 = c;
            re2 = a;
            re3 = b;
        }
        
    }
    else{
        if(b > c){
            re1 = b;

            if(a > c){
                re2 = a;
                re3 = c;
            }
            else{
                re2 = c;
                re3 = a;
            }

        }
        else{
            re1 = c;
            re2 = b;
            re3 = a;
        }
    }

    cout << re2;

    return 0;
}