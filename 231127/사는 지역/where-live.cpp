#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct Info{
    string name;
    string address;
    string city;
};

int cmp(Info &a, Info &b){
    return a.name > b.name;
}

int main() {
    
    Info info[10];

    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> info[i].name >> info[i].address >> info[i].city;
    }

    sort(info, info+n, cmp);

    cout << "name " << info[0].name << '\n';
    cout << "addr " << info[0].address << '\n';
    cout << "city " << info[0].city << '\n';

    return 0;
}