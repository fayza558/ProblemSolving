#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string arr[1000];
    string ans="";
    int index=0;
    int n=s.size();
    int l=0,r=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            l++;
        }
        else r++;
        ans.push_back(s[i]);
        if(l==r)
        {
            arr[index]=ans;
            ans="";
            index++;
            l=0;r=0;
        }
    }
    cout<<index<<endl;
    for(int i=0;i<index;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
