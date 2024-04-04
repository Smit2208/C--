#include <iostream> 
using namespace std;

int main()
{
    int a = 5;
    int b = 7;
    
    if (a <= b)
    {
        cout << "min is " << a << endl;
    }
    else
    {
        cout << "max is " << b << endl;
    }

    if (a >= b)
    {
        cout << "min is " << a << endl;
    }
    else
    {
        cout << "max is " << b << endl;
    }

    if ((a <= b) && (b <= c))
    {
        cout << "min is " << a << " and  " << b << endl;
    }
    else
    {
        cout << "max is " << c << endl;
    }

    return 0;
}
