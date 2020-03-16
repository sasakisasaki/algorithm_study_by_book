#include <iostream>
using namespace std;


int gcd (int u, int v) {
    int t;
    while (u > 0) {
        //cout << "u = " << u << ", v = " << v << '\n';
        if (u < v) { t = u; u = v; v = t; }
        u = u - v;
    }
    return v;
}

int main() {
    int x, y;
    while (cin >> x && cin >> y)
        if (x > 0 && y > 0)
            cout << x << ' ' << y << ' ' << gcd(x, y) << '\n';

}
