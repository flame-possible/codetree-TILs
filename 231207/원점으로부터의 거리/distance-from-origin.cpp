#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

struct Point{
    int n;
    int x, y;
};

int cmp(Point &a, Point &b){
    int cnt_a = abs(a.x) + abs(a.y);
    int cnt_b = abs(b.x) + abs(b.y);
    if(cnt_a == cnt_b){
        return a.n < b.n;
    }

    return cnt_a < cnt_b;
}

int main() {

    int n;
    Point point[1001];

    cin >> n;

    for(int i = 1; i <= n; i++){
        point[i].n = i;
        cin >> point[i].x >> point[i].y;
    }
    
    sort(point+1, point+n+1, cmp);

    for(int i = 1; i <= n; i++){
        cout << point[i].n << '\n';
    }


    return 0;
}