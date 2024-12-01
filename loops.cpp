#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=1,sum=0;
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
    
    //practice qs
    //sum of 1 to n
    for (int i = 1; i <= n; i++)
    {
       sum+=i;
    }
    cout<<"\nSum of 1 to N numbers is :: "<<sum<<endl;

    //Loops keywords
    //break - this keyword used for break the loop 
    //continue - this keyword used for pass the statements for one time on loop

    //sum of odd numbers from 1 to n
    //EX-1 (using 2 as increment of i (i=1,3,5,7.....n))
    sum=0;
    for (int i = 1; i <= n; i+=2)
    {
       sum+=i;
    }
    cout<<"\nSum of odd numbers 1 to N numbers is :: "<<sum<<endl;
    //EX-2 (using continue keyword to pass even numbers)
    sum=0;
    for (int i = 1; i <= n; i++)
    {
       if(i%2!=0){
        sum+=i;
       }else{
        continue;
       }
    }
    cout<<"\nSum of odd numbers 1 to N numbers is :: "<<sum<<endl;

    //check number is prime or not
    bool isPrime=true;
    for (int i = 2; i*i < n; i++)
    {
        if(n%i==0){
            isPrime=false;
        }
    }
    if(isPrime==true){
        cout<<"\n N is Prime :)\n";
    }
    else{
        cout<<"\n N is NOT Prime :(\n";
    }
}