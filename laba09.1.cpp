
#include <iostream>
#include <cmath>
#include <iomanip>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
    cout << "Enter x_p = ";
    cin >> x_p;

    cout << "Enter x_k = ";
    cin >> x_k;

    cout << "Enter dx = ";
    cin >> dx;

    cout << "Enter e = ";
    cin >> e;

    // Перевірка введених даних
    if (x_p > x_k || x_k >= -1 || dx <= 0 || e <= 0)
    {
        cout << "Incorrect input data!" << endl;
        return 1;
    }

    cout << endl;

    cout << "Calculation of arctg(x) using Taylor series" << endl;

    cout << fixed << setprecision(8);

    cout << setw(12) << "x"
        << setw(18) << "arctg(x)"
        << setw(18) << "Sum"
        << setw(15) << "N" << endl;

    x = x_p;

    while (x <= x_k)
    {
        sum();

        cout << setw(12) << x
            << setw(18) << atan(x)
            << setw(18) << s
            << setw(15) << n << endl;

        x += dx;
    }

    return 0;
}
