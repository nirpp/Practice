#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;

    cout << "Before swapping." << endl;
    cout << "a = " <<endl;
    cin>>a;
    cout<<"b="<<endl;
    cin>>b;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}