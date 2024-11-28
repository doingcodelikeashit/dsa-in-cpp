#include<bits/stdc++.h>
using namespace std;
int main(){
    //simple if else
    //number is positive or nagative
    int n;
    cout << "enter n ::";
    cin >> n;
    if(n>=0){
        cout<<"number is positive"<<endl;
    }
    else{
        cout<<"number is nagative"<<endl;
    }

    // odd or even
    int num;
    cout<<"enter num::";
    cin >> num;
    if(n%2==0){
        cout<<"Number is Even \n";
    }else{
        cout<<"Number is Odd \n";
    }

    //Nested if else
    //Max out of 3
    int a,b,c;
    cout<<"enter a,b and c::";
    cin >> a >> b >> c;
    if (a>b)
    {
        if (a>c)
        {
            cout<<"A is Max"<<endl;
        }
        else{
            cout<<"C is Max"<<endl;
        }
    }
    else
    {
        if (b>c)
        {
            cout<<"B is Max"<<endl;
        }
        else{
            cout<<"C is Max"<<endl;
        }
        
    }

    //else if
    if(n>0){
        cout<<"number is positive"<<endl;
    }
    else if(n==0){
        cout<<"number is zero 0"<<endl;
    }else{
        cout<<"number is nagative"<<endl;
    }

    //practice qs
    //1.find character is lowercase or uppercase
    char ch;
    cout << "Enter Character:: ";
    cin>>ch;
    if(ch >= 'a' && ch <= 'z'){
        cout<<"Character is Lower case :)\n";
    }
    else if(ch >= 'A' && ch <= 'Z'){
        cout<<"Character is Upper case :)\n";
    }else{
        cout<<"I guess you entered some special character :'( \n";
    }
    //from ASCII value
    int chint=ch; //inplicit type conversion
    if(chint >= 65 && chint <= 90){
        cout<<"Character is Upper case :)\n";
    }
    else if(chint >= 97 && chint <= 122){
        cout<<"Character is Lower case :)\n";
    }else{
        cout<<"I guess you entered some special character :'( \n";
    }

    //ternary statement
    //condition ? stt1 : stt2;
    cout<<(a>b?"a is grater than b\n":"b is grater than a\n")<<endl;
}