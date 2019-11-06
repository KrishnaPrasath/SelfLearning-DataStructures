// Implement dynamic array
#include <iostream>
using namespace std;

class Array
{
    int *size;

public:
    Array(int size)
    {
        size = size;
    }
    void getter()
    {

        cout << "address of :" << &size << "Value of" << size << '\n';
    }
};

int main()
{
    int capacity = 0;
    int size;
    cin >> size;
    Array b(size);
    b.getter();
}
