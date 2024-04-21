#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int cntr=0;
   while(n>0)
   {
       if(n%2!=0)
       {
           cntr++;
       }
       n/=2;
   }
   cout<<cntr<<endl;
    return 0;
}
