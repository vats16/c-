/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int AP(int n){
    int ap = (3*n)+7;
    return ap;
}

int main()
{
    int n;
    cin>>n;
    int ans = AP(n);
    cout << "ANSWER is "<<ans<<endl;

    return 0;
}