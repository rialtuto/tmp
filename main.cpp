#include <iostream>
#include "funs.h"
using namespace std;

int main()
{
    const char* result = add("Ala ", "ma psa i kota.");
    cout << result << endl;
    delete []result;
    cout << "Dorotka chcialaby miec slonia i zyrafe." << endl;
    return 0;
}
