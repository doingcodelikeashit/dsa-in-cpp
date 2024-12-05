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

    cout<<"\n1234..N square (2) :: \n";
    int count=1;
    for (int i = 1; i <= n; i++)
    {
       for (int j = 1; j <= n; j++)
       {
            cout<<count<<" ";
            count++;
       }
       cout<<endl;
    }

    //Home work pattern
    cout<<"\nABCD..N square :: \n";
    char ch='A';
    for (int i = 1; i <= n; i++)
    {   
       for (int j = 1; j <= n; j++)
       {
            cout<<ch<<" "; // you can print * also
            ch++;
       }
       cout<<endl;
    }

    //triangle pattern
    cout<<"\n * triangle :: \n";
    for(int i=0;i<n;i++){
     for(int j=0;j<i+1;j++){
          cout<<"* ";
     }
     cout<<endl;
    }

    //numbers triangle
    cout<<"\n numbers triangle :: \n";
    for(int i=0;i<n;i++){
     for(int j=0;j<i+1;j++){
          cout<<(i+1)<<" ";
     }
     cout<<endl;
    }

    cout<<"\n numbers triangle (2) :: \n";
    for(int i=0;i<n;i++){
     for(int j=0;j<i+1;j++){
          cout<<(j+1)<<" ";
     }
     cout<<endl;
    }

    //reverse triangle pattern
    cout<<"\n reverse triangle pattern :: \n";
    for(int i=0;i<n;i++){
     for(int j=i+1;j>0;j--){
          cout<<j<<" ";
     }
     cout<<endl;
    }

    cout<<"\n floyds triangle :: \n";
    count=1;
    for(int i=0;i<n;i++){
     for(int j=0;j<i+1;j++){
          cout<<count<<" ";
          count++;
     }
     cout<<endl;
    }

    //inverted triangle pattern
    cout<<"\n inverted triangle pattern :: \n";
    for (int i = 0; i < n; i++)
    {
          for(int j = 0;j < i;j++){
               cout<<" ";
          }
          for(int k = 0;k<n-i;k++){
               cout<<(i+1);
          }
          cout<<endl;
    }

    //pyramid pattern
    cout<<"\npyramid triangle pattern :: \n";
    for (int i = 0; i < n; i++)
    {
          for(int j = 0;j < n-i-1;j++){
               cout<<" ";
          }
          for(int j = 1;j<=i+1;j++){
               cout<<j;
          }
          for(int j=i;j>0;j--){
               cout<<j;
          }
          cout<<endl;
    }
    
}