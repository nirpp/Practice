#include<iostream>
using namespace std;
int main(){
    int year;
    cout<< "enter the year"<<endl;
    cin>>year;
    if((year%4==0)&&(year%100!=0))
    cout<<"its a leap year"<<endl;
    else if (year%400==0)
    cout<<"its a leap year"<<endl;
    else 
    cout<<"not leap year"<<endl;
return 0;
}
