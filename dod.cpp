#include "dod.h"
#include "var.h"

using namespace nsVar;

// Обчислення наступного доданка ряду
void nsDod::dod()
{
    a *= -(2 * k + 1) / ((2 * k + 3) * x * x);
    k++;
}