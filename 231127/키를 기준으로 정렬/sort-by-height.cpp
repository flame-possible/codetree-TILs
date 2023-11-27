#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct Info{
    string name;
    int height;
    int weight;
};

int comp(Info &a, Info &b){
    return a.height < b.height;
}

int main() {
    
    int n;

    cin >> n;

    Info info[11];

    for(int i = 0; i < n; i++){
        cin >> info[i].name >> info[i].height >> info[i].weight;
    }

    sort(info, info+n, comp);

    for(int i = 0; i < n; i++){
        cout << info[i].name << ' ' << info[i].height << ' ' << info[i].weight << '\n';
    }

    return 0;
}