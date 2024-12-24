// Write a function template to find the maximum of two values of any type:
#include <iostream>
using namespace std;

template <typename T>
T maxOfTwo(const T &a, const T &b)
{
    return (a > b) ? a : b; // Custom comparison to find maximum
}

int main()
{
    int maxInt = maxOfTwo(10, 20);
    cout << "Maximum integer: " << maxInt << endl;

    double maxDouble = maxOfTwo(3.14, 2.71);
    cout << "Maximum double: " << maxDouble << endl;

    char maxChar = maxOfTwo('a', 'z');
    cout << "Maximum character: " << maxChar << endl;

    return 0;
}
