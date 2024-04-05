/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int b = 3;
    
    int a [5] = {1,2,3,4,5};
    
    cout << "a first element " << a[0] << " memory address" << &b << a[0]<< endl;
     cout << "b first element " << a[1] << " memory address" << &b << a[1]<< endl;
      cout << "c first element " << a[2] << " memory address" << &b << a[2]<< endl;
      cout << "d first element " << a[3]<< " memory address" << &b << a[3] << endl;
        cout << "e first element " << a[4] << " memory address" << &b << a[4]<< endl;
        
        a[0] = 90;
        a[4] = 80;
        for (int i = 0; i < 5; i++)
        {
         cout << "a " << a[i] << " memory address" << &b << a[i] << endl;   
        }
    return 0;
}
