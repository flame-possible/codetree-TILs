#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct Info{
    int height;
    double weight;
    string name;
};

int cmp_name(Info &a, Info &b){
    return a.name < b.name;
}

int cmp_height(Info &a, Info &b){
    return a.height > b.height;
}

int main() {
    

    Info info[5];
    int n = 5;

    for(int i = 0; i < n; i++){
        cin >> info[i].name >> info[i].height >> info[i].weight;
    }

    sort(info, info+n, cmp_name);

    cout << "name\n";
    for(int i = 0; i < n; i++){
        cout << info[i].name << ' ' << info[i].height << ' ' << info[i].weight << '\n';
    }

    sort(info, info+n, cmp_height);

    cout << "\nheight\n";
    for(int i = 0; i < n; i++){
        cout << info[i].name << ' ' << info[i].height << ' ' << info[i].weight << '\n';
    }

    return 0;
}