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

    if (a == b)
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "not equal " << endl;
    }

    /*while condition example*/
        
    int i, sum, x;
    sum = 0;
    i = 1;
    x = 5;
    
    while (i <= 100)
    {
        sum = sum + x;
        i = i +1;
    }
    cout << "sum is " << sum << endl;
    /* taking values from user (from keyboard) */
    int j, y, sum1 ;
    j = 1;
    y = 0;
    sum1 =0;
    
    cout << "Enter the value " << endl;
    cin >> y;
    
    while (j <= 100)
    {
        sum1 = sum1 + y;
        j = j +1;
    }
    cout << "sum is " << sum1 << endl;

    /*for loop and writing 2 x 1 = 2, 2 x 2 = 2 ....*/
    
    int sum, x;
    sum = 0;
    x = 5;
    
    for (int i = 1; i <= 10; i++)
    {
        int mul = 2 * i;
        cout << "2 x " << i << " = " << mul << endl;
    }

    /*for loop with user input so I can write anyone 11eca(Gujarati) */

    return 0;
}
