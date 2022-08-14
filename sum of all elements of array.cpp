/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int SumArr(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cin>>size;
    
    int arr[100];
    
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    
    cout<<"sum of elements in the array"<<" "<<SumArr(arr, size)<<endl;

    return 0;
}