#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double R;
    double x, xp, xk, dx;
    double y;

    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
         << setw(10) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= 0)
            y = -R * (x + 6) / 6.0;
        else if (x <= R)
            y = -sqrt(R * R - x * x);
        else if (x <= 2 * R)
            y = sqrt(R * R - (x - 2 * R) * (x - 2 * R));
        else
            y = R;

        cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(10) << setprecision(3) << y
             << " |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
