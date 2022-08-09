/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int power(int a, int b){
    int ans=1;
    for(int i = 1;i<=b;i++){
        ans = ans*a;
    }
    return ans;
}

int main()
{
    int a,b;
    cin>>a>>b;
    
    int answer = power(a,b);
    cout<<answer<<endl;
    return 0;
}