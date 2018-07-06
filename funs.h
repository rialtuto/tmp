template <typename T>
T add(T a, T b)
{
    return a + b;
}

template <>
const char* add(const char* a, const char* b);

template <typename T>
T substract(T a, T b)
{
    return a - b;
}

template <typename T>
T multiply(T a, T b)
{
    return a * b;
}

template <typename T>
T divide(T a, T b)
{
    return a / b;
}
