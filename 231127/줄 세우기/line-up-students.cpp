#include <iostream>
#include <algorithm>

using namespace std;

struct Info{
    int height;
    int weight;
    int num;
};

int cmp(Info &a, Info &b){
    if(a.height == b.height){
        if(a.weight == b.weight){
            return a.num < b.num;
        }
        return a.weight > b.weight;
    }
    return a.height > b.height;
}

int main() {
    
    int n;

    cin >> n;

    Info info[1001];

    for(int i = 0; i < n; i++){
        cin >> info[i].height >> info[i].weight;
        info[i].num = i+1;
    }

    sort(info, info+n, cmp);

    for(int i = 0; i < n; i++){
        cout << info[i].height << ' ' << info[i].weight << ' ' << info[i].num << '\n';
    }

    return 0;
}