

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, A, B, y;

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
        A = 1 + x;

        if (x <= 4)
            B = exp(log(2 + 2 * x) + 2 * x);
        else if (x <= 7)
            B = 1.0 / tan((1 + x) / 9.0) + 8 * x;
        else
            B = 1 - 7 * x + x * x - 2 * x * x * x;

        y = A + B;

        cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(10) << setprecision(3) << y
             << " |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
