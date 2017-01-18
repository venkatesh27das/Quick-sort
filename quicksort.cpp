#include<iostream>
using namespace std;
void quick_sort(int a[],int p,int r);
int part(int a[],int p,int r);
int main()
{
    int a[20],i,n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    quick_sort(a,0,n-1);
    cout<<"The elements of the array after sorting"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
    return 0;
}
void quick_sort(int a[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=part(a,p,r);
        quick_sort(a,p,q-1);
        quick_sort(a,q+1,r);
    }
}
int part(int a[],int p,int r)
{
    int x,i,j,temp;
    x=a[r];
    i=p-1;
    j=p;
    while(j<=(r-1))
    {
        if(a[j]<=x)
        {
            i=i+1;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        j++;
    }
    i=i+1;
    temp=a[i];
    a[i]=a[r];
    a[r]=temp;
    return i;
}
