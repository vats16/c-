/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int fibonacci(int n){
    
    int a = 0;
    int b = 1;
    
    for(int i = 1;i<=n;i++){
        int next = a+b;
        a=b;
        b = next;
    }
    return b;
}


int main()
{
    int n;
    cin>>n;
    cout<< "nth term of series is"<<" "<<fibonacci(n)<<endl;

    return 0;
}