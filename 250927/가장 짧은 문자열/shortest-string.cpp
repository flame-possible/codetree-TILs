#include <iostream>
#include <climits>
#include <string>
#include <cstring>
using namespace std;

int main() {
    // Please write your code here.

    int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0; i < 3; i++){
        string input;

        cin >> input;

        int tar = input.length();

        if(tar < min){
            min = tar;
        }

        if(tar > max){
            max = tar;
        }
        
    }

    cout << max - min;

    return 0;
}