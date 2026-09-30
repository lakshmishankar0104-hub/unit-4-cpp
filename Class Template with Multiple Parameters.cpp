#include <iostream>
using namespace std;

template <class T1, class T2>
class Test
{
    T1 value1;
    T2 value2;

public:
    Test(T1 a, T2 b)
    {
        value1 = a;
        value2 = b;
    }

    void display()
    {
        cout << "First value: " << value1 << endl;
        cout << "Second value: " << value2 << endl;
    }
};

int main()
{
    Test<int, float> obj1(10, 20.5);

    Test<string, int> obj2("Age", 20);

    obj1.display();
    cout << endl;
    obj2.display();

    return 0;
}
