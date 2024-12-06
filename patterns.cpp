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
    
    //hollow diamond pattern
    cout<<"\nhollow diamond pattern :: \n";
    for (int i = 0; i < n; i++)
    {
          //spaces
          for(int j = 0;j < n-i-1;j++){
               cout<<" ";
          }
          cout<<"*";
          if(i!=0){
               //spaces
               for(int j = 0;j < 2*i-1;j++){
               cout<<" ";
               }
               cout<<"*";
          }
          cout<<endl;
    }
    for (int i = 0; i < (n-1); i++)
    {
          //spaces
          for(int j = 0;j < i+1;j++){
               cout<<" ";
          }
          cout<<"*";
          if(i != n-2){
               //spaces
               for(int j = 0;j < 2*(n-i)-5;j++){
               cout<<" ";
          }
               cout<<"*";
          }
          cout<<endl;
    }
    //HW butterfly pattern
    cout<<"\nHW butterfly pattern :: \n";
    // Variables to store number of spaces and stars
    int spaces = 2 * n - 1;
    int stars = 0;

    // The outer loop will run for (2 * N - 1) times
    for (int i = 1; i <= 2 * n - 1; i++) {
        // Upper half of the butterfly
        if (i <= n) {
            spaces = spaces - 2;
            stars++;
        }
        // Lower half of the butterfly
        else {
            spaces = spaces + 2;
            stars--;
        }
        // Print stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        // Print spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= stars; j++) {
            if (j != n) {
                cout << "*";
            }
        }
        cout << "\n";
    }
}