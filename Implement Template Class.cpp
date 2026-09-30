#include <iostream>
using namespace std;

template <class T>
class Demo
{
    T value;

public:
    Demo(T v)
    {
        value = v;
    }

    void display()
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    Demo<int> obj1(100);
    Demo<float> obj2(25.5);
    Demo<string> obj3("Hello");

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
