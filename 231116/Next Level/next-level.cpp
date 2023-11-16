#include <iostream>

using namespace std;

struct User{
    string id;
    int lv;

    User(string id, int lv) : id(id), lv(lv) {}
};

int main() {
    
    User user = {"codetree", 10};
    cout << "user " << user.id << ' ' << "lv " << user.lv << '\n';

    cin >> user.id >> user.lv;
    cout << "user " << user.id << ' ' << "lv " << user.lv << '\n';

    return 0;
}