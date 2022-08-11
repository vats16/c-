/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i =1;i<=n;i++){
        fact = fact * i;
        
    }
    return fact;
}
int nCr(int n , int r){
    int num = factorial(n);
    int deno = factorial(r) * factorial(n-r);
    int ans = num / deno;
    return ans;
}
    

int main()
{
    int n , r;
    cin>>n;
    cin>>r;
    cout<< "Factotrial is "<<nCr(n,r)<<endl;
    return 0;
}