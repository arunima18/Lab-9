/*  [STRING] Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method. */
#include<iostream>
using namespace std;
int main(){
    char arr[]={'a','r','u','n','i','m','a'};
    //Print the characters of strings using array
    cout<<arr<<endl;
    cout<<"*****"<<endl;
    //Print characters using index method
    for(int j=0;j<7;j++){
        cout<<arr[j]<<endl;
    }
    cout<<"*****"<<endl;
    //Print the characters using pointers
    char *p=&arr[0];
    for (int i=0;i<7;i++){
        cout<<*(p+i)<<endl;
    }
    
    return 0;
}

