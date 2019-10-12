#include<iostream>
#include<conio.h>
using namespace std;
void insertionsort(int *a,int n)
{
    int i,j,key;
    for(i=0;i<n;i++)
    {
        j=i-1;
        key=a[i];
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
int main()
{
    int ans,n,x;
    cout<<"Enter the size of the array";
    cin>>n;
    cout<<"Enter the values in the array";
    int t,a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The sorted array is "<<endl;
    insertionsort(a,n);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
