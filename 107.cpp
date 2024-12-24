// Write a function template to find the minimum of two values of any type:
#include <iostream>
using namespace std;

template <typename T>
T minOfTwo(const T &a, const T &b)
{
    return (a < b) ? a : b; // Custom comparison to find the minimum
}

int main()
{
    int minInt = minOfTwo(10, 20);
    cout << "Minimum integer: " << minInt << endl;

    double minDouble = minOfTwo(3.14, 2.71);
    cout << "Minimum double: " << minDouble << endl;

    char minChar = minOfTwo('a', 'z');
    cout << "Minimum character: " << minChar << endl;

    return 0;
}
