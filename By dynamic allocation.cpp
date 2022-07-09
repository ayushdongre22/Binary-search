#include<iostream>
using namespace std;
int bi(int* arr,int n,int x){
    int lo=0;
    int hi=n-1;
    int mid;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(*(arr+mid)==x){return mid;}
        if(*(arr+mid)<x){lo=mid;}
        if(*(arr+mid)>x){hi=mid-1;}
    }
}
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    for(int i=0; i<n; i++){cin>>arr[i];}
    cout<<bi(arr,n,x);
    return 0;
}