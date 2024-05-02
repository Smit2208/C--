#include <iostream>
using namespace std;

int main()
{
    string text, text2;
    cout << "Enter the text: ";
    cin >> text;
    //getline (cin, text);
    cout << "your entered: " << text << endl;

    getline(cin, text2);
    cout << "you entered: " << text2 << endl;
    return 0;
}