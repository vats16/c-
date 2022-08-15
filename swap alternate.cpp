/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void swapAlternate(int arr[],int size){
    for(int i = 0;i<size; i+=2){
        if((i+1)<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printarray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}



int main()
{
    int even[6]={1,3,5,7,9,26};
    int odd[9]={1,2,3,4,5,6,7,8,10};
    
    swapAlternate(even,6);
    printarray(even,6);
    cout<<endl;
    swapAlternate(odd,9);
    printarray(odd,9);

    return 0;
}