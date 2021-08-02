#include "auxiliaryFunctions.h"

QString toBinary(int n)
{
    QString tmp;
    while (n > 0) {
        tmp += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return tmp;
}
