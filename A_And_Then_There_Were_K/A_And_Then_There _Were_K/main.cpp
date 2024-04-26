/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long  t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        for(int i=n;i>0;i--)
        {
           long long sum=i&(i-1);
            if(sum==0)
            {
                cout<<(i-1)<<endl;
                break;
            }
            else
            {
                sum&(i-2);

            }
        }
    }
    return 0;
}*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n,k=0;

       cin>>n;
       while(n!=0){
        k=n-1;
        n= n & k;
       }
       cout<<k<<endl;
    }

return 0;
}






