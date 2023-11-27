#include <iostream>
#include <string>

using namespace std;

struct Product{

    string name;
    int code;

};

int main() {
    Product fir, sec;

    fir.name = "codetree";
    fir.code = 50;

    cin >> sec.name >> sec.code;

    cout << "product " << fir.code << " is " << fir.name << '\n';
    cout << "product " << sec.code << " is " << sec.name << '\n';


    return 0;
}