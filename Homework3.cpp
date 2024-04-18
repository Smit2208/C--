#include <iostream>
using namespace std;


int main()
{
    
    /*first question ansawer it is corrct*/
    /*int val [4] = {-11, 12, 16, 0};
    for (int i = 0; i < 4; i++)
    {
        cout <<"Element at index " << i << ": " << val[i] << " Memory Address: " << &val[i] << endl;
    }*/


    float b[] = {-8, 3, 4, 45, -1};
    float sum =0;

    for(int i = 0; i < sizeof(b)/sizeof(b[0]); i++)
    {
        cout << "Element at index " << i << ": " << b[i] << " Memory Address: " << &b[i] << endl;
        sum += b[i];
    }

    cout << "Sum of all values in the array: " << sum << endl;
    return 0;
}