#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct Info{
    int height;
    int weight;
    string name;
};


int cmp(Info &a, Info &b){

    if(a.height == b.height){
        return a.weight > b.weight;
    }

    return a.height < b.height;
}

int main() {
    

    Info info[11];

    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> info[i].name >> info[i].height >> info[i].weight;
    }

    sort(info, info+n, cmp);

    for(int i = 0; i < n; i++){
        // printf("%s %d %.1lf\n", info[i].name.c_str(), info[i].height, info[i].weight);
        cout << info[i].name << ' ' << info[i].height << ' ' << info[i].weight << '\n';
    }

    return 0;
}