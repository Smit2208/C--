#include <iostream> 
using namespace std;

int main()
{
    int x = 10;
    int y = 18;

/*nested loop example but har to maintain so look below*/
    if (x < 20)
    {
        cout << "x is less than 20" << endl;
    }
    else
        if(x < 18)
        {
        cout << "x is less than 18" << endl;
        }
        else
            if (x < 14)
            {
              cout << "x is less than 14" << endl;
            }
            else
            {
                cout << "x is grater than 14" << endl;
            }

/*look here fro better version of nested loop*/
/*this is we already learned in the past so it is just review and practice*/

    if (x < 20)
    {
        cout << "x is less than 20" << endl;
    }
    else if (x < 18)
    {
        cout << "x is less than 18" << endl;
    }
    else if (x < 14)
    {
        cout << "x is less than 14" << endl;
    }
    else
    {
        cout << "x is grater than 14" << endl;
    }
}