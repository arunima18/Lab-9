/* Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method. */
#include<iostream>
using namespace std;
int main(){
    //Create array of size 10
    int arr1[10]={2,3,4,9,8,7,5,6,1,2};
    //Print using index method
    for(int i=0;i<10;i++){
        cout<<arr1[i]<<endl;
    }
    cout<<"*****"<<endl;
    //Print using pointer method
    int *ptr1;
    ptr1=arr1;
    for (int j=0;j<10;j++){
        cout<<*(ptr1+j)<<endl;
    }
    return 0;
}

