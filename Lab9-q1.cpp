//Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables.
#include<iostream>
using namespace std;
int main(){
    //Declare integer and pointer
    int a;
    int *ptr1=&a;
    //Declare boolean and pointer
    bool b;
    bool *ptr2=&b;
    //Declare float and pointer
    float c;
    float *ptr3=&c;
    //Declare character and pointer
    char d;
    char *ptr4=&d;
   
    //Print sizes of each variable and pointer
    cout<<sizeof(a)<<endl;
    cout<<sizeof(ptr1)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(ptr2)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(ptr3)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(ptr4)<<endl;
   
    return 0;
}


