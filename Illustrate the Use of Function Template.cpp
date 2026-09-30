#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << "Maximum of integers: " << maximum(10, 20) << endl;
    cout << "Maximum of floats: " << maximum(10.5, 20.3) << endl;
    cout << "Maximum of characters: " << maximum('A', 'Z') << endl;

    return 0;
}
