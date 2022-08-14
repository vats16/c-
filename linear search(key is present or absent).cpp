/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

bool search(int arr[],int size,int key){
    for(int i = 0; i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
    cout<<"Enter the element to search for"<<endl;
    int key;
    cin>>key;
    bool found = search(arr,10,key);
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }

    return 0;
}