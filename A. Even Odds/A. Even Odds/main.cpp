#include <iostream>

using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    //odd
   if(k<=(n+1)/2)
   {
       cout<<k*2-1;
   }
   else
   {
       k=k-((n+1)/2);
       cout<<k*2;
   }



    return 0;
}


