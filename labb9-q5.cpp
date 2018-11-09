/* Write a piece of code which prints the characters in a cstring in a reverse order.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    //Input size of string from user
    cout<<"Enter the size of the string"<<endl;
    cin>>n;
    //Declare array of desired size
    char arr[n];
    //Intake characters from user
    for (int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<"th value"<<endl;
        cin>>arr[i];
    }
    //Point the pointer to the last value and print the characters
    char *ptr=&arr[n-1];
    for (int j=0;j<n;j++){
        cout<<*(ptr-j);
    }
    return 0;
}


