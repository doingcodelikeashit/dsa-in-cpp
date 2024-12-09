#include<bits/stdc++.h>
using namespace std;
int* getArr(int n){
    static int a[500];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter "<<i<<"'th element::";
        cin>>a[i];
    }
    return a;
    
}
void printArr(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
}
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
//linear search
void linearSearch(int a[],int n,int num){
    for (int i = 0; i < n; i++)
    {
        if(a[i]==num){
            cout<<"Element found in array";
        }
    }
    
}
int main(){
    int n;
    cout<<"Enter size of array::";
    cin>>n;
    int* ptr =getArr(n);
    printArr(ptr,n);
    //printArr(arr);
    minAndMax(ptr,n);
    linearSearch(ptr,n,8);
}