/*#include <iostream>
#include<algorithm>
#include <cmath>
using namespace std;

int main()
{
    string s;
    cin>>s;
    long long cntr=0;
    char a='a';
    int diff;
    for(int i=0;i<s.size();i++)
    {
       diff=abs(s[i]-a);
        if(diff<=13)
        {
            cntr+=diff;
        }
        else
        {
            cntr+=26-diff;
        }
        a=s[i];

    }
    cout<<cntr<<endl;
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int freqarr(int num,int sizeofarr,int array1[])
     {
         int freq[sizeofarr]={0};
         for(int i=0;i<sizeofarr;i++)
         {
              freq[array1[i]]++;
         }
         return freq[num];
     }
int main()
{
    int n;
    int q;
    cin>>n;
    cin>>q;
    int j=0;
    int arr[n];
    for(int i=0;i<q;i++)
    {
        int x;
        int y;
        cin>>x;
        cin>>y;
        if(x==1)
        {
            arr[j]=y;
            while(j!=n-1)
            {
                j++;
            }
        }
            else if(x==2)
            {
               cout<<freqarr(y,n,arr)<<endl;
            }
    }

    return 0;
}
