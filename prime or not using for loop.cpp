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
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    bool isprime=1;
    for(int i =2;i<n;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime==0){
        cout<<"Not a prime number"<<endl;
    }
    else{
        cout<<"prime number"<<endl;
        
    }

    return 0;
}
