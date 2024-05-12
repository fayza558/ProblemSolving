 /*#include <iostream>
#include<algorithm>
using namespace std;
 bool compare (int a,int b)
 {
    return a>b;
 }

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,compare);
    int s=0,b=0;
    for(int i=0;i<n;i++)
    {
      if(i%2==0)
      {
          s+=arr[i];
      }
      else{
        b+=arr[i];
      }
    }
    cout<<s<<" "<<b<<endl;
    return 0;
}*/



#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
int p1=0,p2=n-1;
int seraj=0,dema=0;
bool isSeraj=true;
while(p1<=p2)
{
    if(isSeraj)
    {
        isSeraj=false;


        if(v[p1]>v[p2])
        {
            seraj+=v[p1];
            p1++;
        }
        else
        {
            seraj+=v[p2];
            p2--;
        }
    }
    else
    {
        isSeraj=true;
        if(v[p1]>v[p2])
        {
            dema+=v[p1];
            p1++;

        }
        else
        {
            dema+=v[p2];
            p2--;
        }
    }
}
cout<<seraj<<" "<<dema;
    return 0;
}






