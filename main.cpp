#include <iostream>
#include "funs.h"
using namespace std;

int main()
{
    const char* result = add("Ala ", "ma psa i kota.");
    cout << result << endl;
    delete []result;
    cout << "... a ja wole moja mame, co ma wlosy jak atrament ... " << endl;
    cout << "tarararam" << endl;
    cout << "I want to check something." << endl;
    int i = 24 + 16;
    double data = 3.14;
    return 0;
}
