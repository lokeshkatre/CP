#include <iostream>
#include<math.h>
//without using divisible operator
using namespace std;
int divide(int divid,int divis)
{
    if(divid==0)
    return 0;
    if(divis==0)
    {
        cout<<"Division  by 0 error\n";
        return 0;
    }
    int sign=(divid<0)^(divis<0);
    divid=abs(divid);
    divis=abs(divis);
    if(divis==1)
        return ((sign==0) ? divid : -divid);
    int ans=exp(log(divid)-log(divis))+ 0.00000000001;
    return ((sign==0)?ans:-ans);
}
int main()
{
   int n,multi=1,count=0;
   cin>>n;
   int arr[n],ans[n];
   for(int i=0;i<n;i++)
   cin>>arr[i];
   
   for(int i=0;i<n;i++)
   {
    if(arr[i]==0)
    count++;
    else
    multi=multi*arr[i];
   }

   for(int i=0;i<n;i++)
   {
       if(count>1)
       ans[i]=0;
       else if(count==1)
       {
          if(arr[i]!=0)
          ans[i]=0;
          else
          ans[i]=multi;
       }
       else
       {
       ans[i]=divide(multi,arr[i]);
       }
   }
    cout<<endl;
   for(int i=0;i<n;i++)
   cout<<ans[i]<<" "<<endl;

   return 0;
}