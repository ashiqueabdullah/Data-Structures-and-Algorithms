//sob theke chuto ta age jabe.....
#include<bits/stdc++.h>
using namespace std;
int selection_sort(int a[],int len)
{
    int i_min,temp;
    for(int i=0; i<len; i++)
    {
        i_min=i;
        for(int j=i+1; j<len; j++)
        {
            if(a[i]>a[j])
            {
                i_min=j;
            }
        }
        if(i_min !=i)
        {
            temp=a[i];
            a[i]=a[i_min];
            a[i_min]=temp;
        }
    }
}
int main()
{
    int a[]= {9,9,7,5,6,4,3,2,1},len,result;
    len=sizeof(a)/sizeof(a[0]);
    cout<<"Before sort"<<endl;
    for(int i=0; i<len; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    result=selection_sort(a,len);
    cout<<"After Sort"<<endl;
    for(int i=0; i<len; i++)
    {
        cout<<a[i]<<" ";
    }
}
