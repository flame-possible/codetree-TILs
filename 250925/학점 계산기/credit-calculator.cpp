#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    double sub[n] = {0,};

    double result = 0;

    for(int i = 0; i < n; i++){
        cin >> sub[i];

        result += sub[i];
    }

    cout << fixed;
    cout.precision(1);

    cout << result / n << '\n';

    if(result / n >= 4){
        cout << "Perfect";
    }
    else if(result / n >= 3){
        cout << "Good";
    }
    else{
        cout << "Poor";
    }



    return 0;
}