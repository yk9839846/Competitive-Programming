#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void bubblesort(int *a,int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
        }
    }
}
int main()
{
    int ans,n,x;
    cout<<"Enter the size of the array";
    cin>>n;
    cout<<"Enter the values in the array";
    int i,t,a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The sorted array is";
    bubblesort(a,n);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
