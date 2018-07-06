#include <iostream>
#include "funs.h"
using namespace std;

int main()
{
    const char* result = add("Ala ", "ma kota.");
    cout << result << endl;
    delete []result;
    return 0;
}
