#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    
    int n;

    cin >> n;

    string input[101];

    for(int i = 0; i < n; i++){
        cin >> input[i];
    }

    sort(input, input+n);

    for(int i = 0; i < n; i++){
        cout << input[i] << '\n';
    }

    return 0;
}