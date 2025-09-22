#include <iostream>
using namespace std;

int check(int tar){

    int result = 0;

    if(tar / 10 == 3 || tar / 10 == 6 || tar / 10 == 9 || tar % 10 == 3 || tar % 10 == 6 || tar % 10 == 9){
        result = 1;
    }

    return result;

}

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 || check(i)){
            cout << "0 ";
        }
        else{
            cout << i << ' ';
        }
    }

    return 0;
}