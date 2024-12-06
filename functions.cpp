#include<bits/stdc++.h>
using namespace std;
void hello(){
    cout<<"HELLO FROM FUNCTION\n";
}
int sum(int a,int b){//paramiters is copy of arguments :)
    return a+b;
}
int sumOfDigit(int n){
    int temp=n,sum=0,rem=0;
    while(temp>0){
        rem=temp%10;
        sum+=rem;
        temp=temp/10;
    }
    return sum;
}
int main(){
    hello();
    cout<<sum(4,6)<<endl;
    cout<<sumOfDigit(1456)<<endl;
}