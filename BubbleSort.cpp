//ekta theke arekta boro hole sathe sathe swap
//time complexity 0(n^2)
#include<bits/stdc++.h>
using namespace std;
int bobble_sort(int a[],int len){
    int temp;
    for(int i=0; i<len; i++){
        for(int j=0; j<len; j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(){
    int a[]={9,8,22,6,12,4,3,2,1},len,result;
    len=sizeof(a)/sizeof(a[0]);
    cout<<"Before sort"<<endl;
    for(int i=0; i<len; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    result=bobble_sort(a,len);
    cout<<"After sort"<<endl;
    for(int i=0; i<len; i++){
        cout<<a[i]<<" ";
    }
}
