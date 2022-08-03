#include <iostream>
using  namespace std;
int main()
{
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j=1;
        while (j<=n-i+1){
            cout<<j;
            j=j+1;
        }
        int j2 = 1;
        while (j2<=i-1){
            cout<<"*";
            j2=j2+1;
        }
        int j3 = 1;
        while(j3<=i-1){
            cout<<"*";
            j3=j3+1;
        }
        int j4 = n-i+1;
        while(j4){
            cout<<j4;
            j4=j4-1;
        }
       
        
        cout<<endl;
        i =i+1;
    }
}