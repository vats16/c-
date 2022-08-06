/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a = 0;
    int b = 1;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i =1;i<=n;i++){
        int next = a+b;
        cout<<next<<endl;
        
        a=b;
        b=next;
    }

    return 0;
}