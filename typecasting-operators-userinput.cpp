#include<bits/stdc++.h>
using namespace std;
int main(){
    //type conversation (by compiler)
    char c='a';
    int a=c;
    cout<<a<<endl;

    //type casting (by program)
    double price=100.00;
    int shortPrice = (int)price;
    cout<<shortPrice<<endl;

    // user input 
    int n;
    cout<<"Enter N:: "<<endl;
    cin >> n;
    cout << "Entered Number is :: "<<n<<endl;

    //operators
    //arithmetic + - * / %
    int x=3,y=2;
    cout<<(x+y)<<endl;

    //relational < <= > >= == !=
    cout<<(x<y)<<endl; // print 0 (false)

    //logical || && !
     cout<<!(x<y)<<endl; // print 1 (true)

     //unary ++ -- 
     cout<<(++x)<<endl; // print 4 
}