#include <cmath>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace nsDod;
using namespace nsVar;

// Обчислення суми ряду Тейлора
void nsSum::sum()
{
    n = 0;
    k = 0;

    a = -1 / x;
    s = -acos(-1.0) / 2;

    do
    {
        s += a;
        n++;

        dod();

    } while (fabs(a) > e);
}