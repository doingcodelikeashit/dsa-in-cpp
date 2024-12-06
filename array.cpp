#include<bits/stdc++.h>
using namespace std;
int minAndMax(int a[],int n){
    int min=INT_MAX,max=INT_MIN,smallIndex=0,largeIndex=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]<min){
            min=a[i];
            smallIndex=i;
        }
        if(a[i]>max){
            max=a[i];
            largeIndex=i;
        }
    }
    cout<<min<<" "<<max<<endl;
    cout<<smallIndex<<" "<<largeIndex<<endl;
}
int main(){
    int marks[5]={1,2,3,4,5};
    int minandmax=minAndMax(marks,5);
}