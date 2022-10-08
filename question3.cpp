#include<iostream>
using namespace std;
int peakIndex(int arr[],int n)
{
    int s=0,ans;
    int e=n-1;
    int mid= s + (e-s)/2;
    while(s<e)
    {
            if(arr[mid] < arr[mid+1])
            {
                s=mid+1;
            }
            else if(arr[mid]<arr[mid-1])
            {
                e=mid-1;
            }
            else
            e=mid;
            
            mid= s + (e-s)/2;
    }
    return s;
}
int main()
{
    int n,index;
    
    int arr[]={0,1,0};
    n=sizeof(arr)/sizeof(arr[0]);
    index=peakIndex(arr,n);
    cout<<index<<endl;

}
