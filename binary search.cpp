/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(key==arr[mid]){
        return mid;
            
        }
        if(key>arr[mid]){
        s=mid+1;
            
        }
        else{
        e=mid-1;
            
        }
        mid = s+(e-s)/2;
        
    }
    return -1;
}

int main()
{
    int even[6]={1,2,6,9,10,26};
    int odd[5]={2,10,15,18,20};
    int eindex = binarySearch(even,6,10);
    int oindex = binarySearch(odd,5,10);
    cout<<eindex<<endl;
    cout<<oindex<<endl;

    return 0;
}