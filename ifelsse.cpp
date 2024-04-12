#include <iostream> 
using namespace std;


void printArray (int *array, int length)
     {
        cout << "\nArray Elements ";
        for (int index = 0; index < length; ++index)
        {
            cout << array[index];
        }
     }


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

    /***************************************************************************/

    int time = 15;
    string message;
    if(time < 10)
    {
        message = "Good Mornin\ng";
       // cout << "Good Day";
    }
    else 
    {
        message = "Good Afternoon \n";
        //cout << "Good evening";
    }

    cout << message;

    /* short hand if*/

    int time1 = 15;
    string result;

    result = (time1 < 11) ? "2. Good Morning.\n" : "2. Good Afternoon.\n";
    cout << result;

    /**Switch statement*/
    int day = 6;

    switch (day)
    {
        case 6:
        cout << "Today is monday\n";
        break;
        
        case 7:
        cout << "Today is Tuesday\n";
        break;

        default:
        cout << "Today is Sunday\n";
        break;
    }


    /**repitation example from last week (todauy april11) it is an example of while loop */
    int i, sum, z, e, sum1, j;
    sum = 0;
    i = 1;

    while (z <= 100)
    {
        sum = sum + 1;
        i = i+1;
    }

    cout << "Sum is " << sum << endl;

    /*e = 0;
    sum1 = 0;
    j = 1;
     while (e <= 100)
    {
        sum1 = sum1 + 1;
        j = j-1;
    } 

    cout << "Sum1 is " << sum1 << endl;*/


    /****pointers****/
    int r = 10;
    cout << r << endl;
    cout << &r << endl; // store where the variable address store

    int *ptr; //point address of the varable
    ptr = &r; //store the memory address
    cout << ptr << endl; //printing value

    /*manipulating the valuse based on the address on the pointer way*/

    int firstvalue = 5;
    int secondvalue = 15;

    int *p1, *p2;
    p1 = &firstvalue;
    p2 = &secondvalue;

    *p1 = 10; // assigning the 10 value to the firstvalue address
    *p2 = *p1; // assigning the p1 pointer value to the p2 pointer address
    p1 = p2; // p1 = p2 (value of the pointer copied)
    *p1 = 20; // assign the 20 value to the pointer p1 address

    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl;

     
     /***upper void method uses here*/
    //testing pointers arry
    int array [6] = {6,5,4,3,2,1};
    printArray(array, 6);

    return 0; 

}