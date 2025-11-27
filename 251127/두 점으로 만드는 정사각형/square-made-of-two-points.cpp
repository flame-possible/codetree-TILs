#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int x1, y1, x2, y2, a1, b1, a2, b2;

    cin >> x1 >> y1 >> x2 >> y2 >> a1 >> b1 >> a2 >> b2;

    int xMin = 11;
    int xMax = 0;
    int yMin = 11;
    int yMax = 0;

    xMin = min(xMin, min(x1, min(x2, min(a1, a2))));
    xMax = max(xMax, max(x1, max(x2, max(a1, a2))));
    
    yMin = min(yMin, min(y1, min(y2, min(b1, b2))));
    yMax = max(yMax, max(y1, max(y2, max(b1, b2))));

    int result = max((xMax - xMin), (yMax - yMin));

    cout << result * result;

    return 0;
}