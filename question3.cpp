#include<iostream>
using namespace std;
int main()
{
    int n,index;
    cin>>n;
    if(n<3)
    {
        cout<<"array length less than 3"<<endl;
        return 0;
    }
    int arr[n],max=0;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        if(arr[i]==max)
        index=i;
    }
    cout<<index<<endl;

}