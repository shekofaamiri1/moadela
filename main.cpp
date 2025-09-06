#include <iostream>

using namespace std;

int main() {

    double a, b, c, d,x, x1, x2;
    cout << "Enter a,b,c";
    cin >> a >> b >> c;
    if (a!=0)
    {
        d = b * b - 4 * a * c;
        if (d > 0)
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            cout << "x1=" << x1 << endl;
            cout << "x2=" << x2;
        }
    return 0;

}