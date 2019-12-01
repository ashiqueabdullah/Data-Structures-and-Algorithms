//je number ta input dibo oi number ta array r protek ta element
//er sathe compare korbo....
#include<bits/stdc++.h>
using namespace std;
int linear_search(int a[],int len,int b){
    for(int i=0; i<len; i++){
        if(a[i]==b){
            return i;
        }
    }
    return -1;
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10},len_arry,b,result;
    len_arry=sizeof(a)/sizeof(a[0]);
    cout<<"Enter the number you want to find out"<<endl;
    cin>>b;
    result=linear_search(a,len_arry,b);
    if(result==-1){
        cout<<"This number is not available in this array"<<endl;
    }else{
        cout<<"This number index in "<<result<<endl;
    }
}
