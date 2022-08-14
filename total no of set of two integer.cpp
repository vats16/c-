/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int SetbitB(int b){
    int count = 0;
    while(b!=0){
        if(b&1){
            count++;
        }
        b = b>>1;
    }
    return count;
    
}

int SetbitA(int a){
    int count = 0;
    while(a!=0){
        if(a!=0){
            count++;
        }
        a= a>>1;
    }
    return count;
}

int main()
{
    int a;
    int b;
    cin>>a;
    cin>>b;
    int ans1 = SetbitA(a);
    int ans2 = SetbitB(b);
    cout<< "set of bit a"<<" "<<ans1<<endl;
    cout<< "set of bit b"<<" "<<ans2<<endl;
    int ans = ans1+ans2;
    cout<<" total number of 1 bit"<<" "<<ans<<endl;

    return 0;
}