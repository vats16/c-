/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    int i= 0;
    
    if(n<0){
        n*=-1;
    }
    
   
    while(n!=0){
        int bit = n & 1;
        ans=(bit*pow(10,i)+ans);
        n = n>>1;
        i++;
    }
    cout<<"-"<<ans<<endl;
    
    

    return 0;
}