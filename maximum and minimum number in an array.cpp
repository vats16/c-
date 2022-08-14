/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int getMax(int num[], int n){
    int max = INT_MIN;
    for(int i = 0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}

int getMin(int num[],int n){
    int min = INT_MAX;
    for(int i = 0; i<n,i++){
        if(num[i]<min){
            min = num[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cin>>size;
    
    int num[100];
    
    for(int i= 0;i<size;i++){
        cin>>num[i];
    }
    
    cout<<"Maximum number in array"<<" "<<getMax<<endl;
    cout<<"Minimum number in array"<<" "<<getMin<<endl;

    return 0;
}