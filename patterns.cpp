#include<bits/stdc++.h>
using namespace std;
int main(){
    //square pattern
    int n;
    cout<<"Enter N:: ";
    cin>>n;
    cout<<"\n1234..N square :: \n";
    for (int i = 1; i <= n; i++)
    {
       for (int j = 1; j <= n; j++)
       {
            cout<<j<<" "; // you can print * also
       }
       cout<<endl;
    }
    cout<<"\nABCD..N square :: \n";
    for (int i = 1; i <= n; i++)
    {   
        char ch='A';
       for (int j = 1; j <= n; j++)
       {
            cout<<ch<<" "; // you can print * also
            ch++;
       }
       cout<<endl;
    }
}