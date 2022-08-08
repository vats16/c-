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
    cout<<"Enter ypur binary number"<<endl;
    cin>>n;
    int i = 0;
    int ans = 0;
    
    while (n!=0){
        int digit = n%10;
        if(digit == 1){
            ans = ans+pow(2,i);
        }
        n = n/10;
        i++;
    }
    cout<<ans<<endl;
    

    return 0;
}