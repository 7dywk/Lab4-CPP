#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    double x, xp, xk, dx;
    double F;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
         << setw(10) << "F" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (c < 0 && x != 0)
            F = -a * x - c;
        else if (c > 0 && x == 0)
            F = (x - a) / -c;
        else
            F = (b * x) / (c - a);

        cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(10) << setprecision(3) << F
             << " |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
