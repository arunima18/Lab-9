/*  here, we want to show string repeatedly by shifting top character of string from right to left. Refer to a below execution example. Write a below source code, complement the expression 
hidden by "******" to meet this requirement. */
#include<iostream>
using namespace std;
int main(){
    //Ask size of string from user
    int n;
    cout<<"Enter the size of string"<<endl;
    cin>>n;
    //Declare array o desired size
    char arr[n];
    //Input values from user
    for (int j=0;j<n;j++){
        cout<<"Enter the "<<j+1<<"th character"<<endl;
        cin>>arr[j];
    }
    //Point the pointer starting from last character to first character in loop
   for (int i=4;i>=0;i--){
        char *ptr=&arr[i];
        cout<<ptr<<endl;
    }
    return 0;
}

