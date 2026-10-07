#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    double x, y, R;

    srand((unsigned) time(NULL));

    cout << "R = "; cin >> R;

    // 1 спосіб: 10 пострілів з клавіатури
    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if ((x * x + y * y <= R * R && y >= 0) ||
            (x <= 0 && y >= -R && y <= x))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    cout << endl << fixed;

    // 2 спосіб: 10 випадкових пострілів з інтервалу [-R; R]
    for (int i = 0; i < 10; i++)
    {
        x = 2.0 * R * rand() / RAND_MAX - R;
        y = 2.0 * R * rand() / RAND_MAX - R;

        if ((x * x + y * y <= R * R && y >= 0) ||
            (x <= 0 && y >= -R && y <= x))
            cout << setw(8) << setprecision(4) << x << " "
                 << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
                 << setw(8) << setprecision(4) << y << " " << "no" << endl;
    }

    return 0;
}
