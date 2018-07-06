#include <cstring>
#include "funs.h"

template <>
const char* add(const char* a, const char* b)
{
    int a_size{}, b_size{};
    while(a[a_size++]);
    while(b[b_size++]);
    a_size--; b_size--;

    char* result = new char[a_size + b_size];
    strcpy(result, a);
    strcpy(result + a_size, b);
    return result;
}
