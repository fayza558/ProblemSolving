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

  //anothor solution with bitmask

  #include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int cntr=0;
   while(n>0)
   {
       if(n&1)
       {
           cntr++;
       }
       n>>=1;
   }
   cout<<cntr<<endl;
    return 0;
}

 //anothor solution with bitmask function that count the number of bits that is on
  #include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<__builtin_popcount(n)<<endl;
    return 0;
}
