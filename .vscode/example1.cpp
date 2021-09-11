#include<iostream>
using namespace std;
int main(){
    int salary;
    int final;
    cout<<"enter your salary";
    cin>>salary;
    if(salary>= 10000){
       final= salary+2000;
       cout<<"final salary is"<<final<<endl; 
    }
    else{
       final= salary+1000;
        cout<<"final salary is"<<final<<endl;
    }
    return 0;

}