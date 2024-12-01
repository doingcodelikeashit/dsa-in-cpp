#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=1;
    cout<<"Enter N:: ";
    cin >> n;

    //while loop
    cout<<"\n using while loop \n";
    while (count <= n)
    {
        cout<<count<<endl;
        count++;
    }

    //for loop
    cout<<"\n using for loop \n";
    for (int i = 1; i <= n; i++)
    {
       cout<<i<<endl;
    }

    //do while loop
    cout<<"\n using do while loop \n";
    count=1;
    do
    {
        cout<<count<<endl;
        count++;
    } while (count<=n);
    
    
}