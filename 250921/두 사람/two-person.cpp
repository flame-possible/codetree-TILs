#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int y1, y2;
    char g1, g2;

    cin >> y1 >> g1 >> y2 >> g2;

    if(y1 >= 19 || y2 >= 19){
        if(g1 == 'M' || g2 == 'M'){
            cout << "1";

            return 0;
        }
    }

    cout << "0";

    return 0;
}