#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double P, S;
    int j, i;

    // Спосіб 1: while
    P = 1;
    j = 1;
    while (j <= 15)
    {
        S = 0;
        i = j;
        while (i <= j * j)
        {
            S += 1.0 * i * i;
            i++;
        }
        P *= sqrt(S);
        j++;
    }
    cout << "1) P = " << P << endl;

    // Спосіб 2: do ... while
    P = 1;
    j = 1;
    do
    {
        S = 0;
        i = j;
        do
        {
            S += 1.0 * i * i;
            i++;
        } while (i <= j * j);
        P *= sqrt(S);
        j++;
    } while (j <= 15);
    cout << "2) P = " << P << endl;

    // Спосіб 3: for (++)
    P = 1;
    for (j = 1; j <= 15; j++)
    {
        S = 0;
        for (i = j; i <= j * j; i++)
        {
            S += 1.0 * i * i;
        }
        P *= sqrt(S);
    }
    cout << "3) P = " << P << endl;

    // Спосіб 4: for (--)
    P = 1;
    for (j = 15; j >= 1; j--)
    {
        S = 0;
        for (i = j * j; i >= j; i--)
        {
            S += 1.0 * i * i;
        }
        P *= sqrt(S);
    }
    cout << "4) P = " << P << endl;

    return 0;
}
