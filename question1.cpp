#include<iostream>
using namespace std;
void isPalindrome(int n)
{
    int temp=0, num=n;
    if(n<0)
    cout<<"False"<<endl;
    else
    {
        while(n>0)
        {
            int r=n%10;
            temp=temp*10+r;
            n=n/10;
        }
        if(temp==num)
        cout<<"True"<<endl;
        else
        cout<<"False"<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    isPalindrome(n);
    return 0;
}