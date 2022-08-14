/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

bool isprime(int n){
    for (int i = 2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<"is a prime number"<<endl;
    }
    else{
        cout<<"is not a prime number"<<endl;
    }

    return 0;
}