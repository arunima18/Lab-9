/* Write a program to declare two variables a,b and a pointer variable p (all integer type). Try to understand pointers while doing this.
Point p to a. And store the value pointed by p in b. Print the values of a, b and *p.
Assign values a=2 and b = 3. Print the values of a, b and *p.
Now point p to b. Print the values of a, b and *p. */

#include<iostream>
using namespace std;
int main(){
    //Declare a,b and a pointer p
    int a,b;
    cout<<"Enter value of a"<<endl;
    cin>>a;
    cout<<"Enter value of b"<<endl;
    cin>>b;
    int *p;
    //Point p to a
    p=&a;
    //Store value pointed by p in b;
    b=*p;
    //Print values in a,b and *p
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<*p<<endl;
    cout<<"*****"<<endl;
    //Assign values 2 and 3 to a and b respectively
    a=2;
    b=3;
    //print values of a,b and *p
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<*p<<endl;
    cout<<"*****"<<endl;
    //Point p to b
    p=&b;
    //print a,b and *p
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<*p<<endl;
    return 0;
}

