#include <iostream>

using namespace std;

int main()
{
    int n ,p,q;
    cin>>n>>p;
    int maxLevels=101;
    int freq[maxLevels]={0};
    for(int i=0;i<p;i++)
    {
        int level;
        cin>>level;
        freq[level]++;
    }
    cin>>q;
     for(int  i=0;i<q;i++)
    {
        int level;
        cin>>level;
        freq[level]++;
    }
     bool canPassAllLevels=true;
     for(int i=1;i<=n;i++)
     {
         if(freq[i]==0)
         {
            canPassAllLevels=false;
             break;
         }

     }
     if(canPassAllLevels==true)
     {
         cout<<"I become the guy."<<endl;
     }
     else
      {
          cout<<"Oh, my keyboard!"<<endl;
      }
    return 0;
}
