// program to add two numbers using a function

#include <iostream>

using namespace std;

// declaring a function
int add(int a, int b) {
    return (a + b);
}

int main() {
int n1,n2;
    int sum;
    cout<<"enter n1"<<endl;
    cin>>n1;
    cout<<"enter n2"<<endl;
    cin>>n2;

    // calling the function and storing
    // the returned value in sum
    sum = add(n1, n2);

    cout << "therefore the sum is " << sum << endl;

    return 0;
}