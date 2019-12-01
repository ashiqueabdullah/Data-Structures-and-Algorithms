#include<bits/stdc++.h>
using namespace std;
int mybinary_search(int a[],int len_array,int b)
{
    int left=0,right=len_array-1,mid=0;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(mid==b)
        {
            return b;
        }
        if(mid<b)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return -1;
}
int main()
{
    int a[]= {1,3,4,6,7,9,11,1,3,14,16,17,18,19},len_array,b,result;
    cout<<"Enter Number to search"<<endl;
    cin>>b;
    len_array=sizeof(a)/sizeof(a[0]);
    result=mybinary_search(a,len_array,b);
    if(result==-1)
    {
        cout<<"This number does not exist"<<endl;
    }
    else
    {
        cout<<result<<" this number exists in the array"<<endl;
    }
}
