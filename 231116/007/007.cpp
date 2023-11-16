#include <iostream>

using namespace std;

struct Agent{
    string code;
    char sector;
    int time;
};

int main() {
    // 여기에 코드를 작성해주세요.

    Agent a;

    cin >> a.code >> a.sector >> a.time;

    cout << "secret code : " << a.code << '\n';
    cout << "meeting point : " << a.sector << '\n';
    cout << "time : " << a.time << '\n';

    return 0;
}