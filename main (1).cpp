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
    int n ;
    cin>> n;
    if(n % 2 != 0){
        cout<< "n is prime number"<< endl;
        
    }
    else{
        cout<< "n is not prime number"<< endl;
        
    }
    return 0;
}