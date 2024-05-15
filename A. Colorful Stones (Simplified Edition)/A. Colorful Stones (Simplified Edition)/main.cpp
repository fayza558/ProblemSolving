#include <iostream>

using namespace std;

int main()
{
    string s;
    string t;
    cin>>s>>t;
     int n=t.size();

     long long cntr=0;
 for(int i=0;i<n;i++)
 {
     if(s[cntr]==t[i])
     {
         cntr++;
     }
 }
     cout<<cntr+1<<endl;

    return 0;
}
