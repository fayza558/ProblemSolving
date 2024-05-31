#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    bool isRated=false;
    bool isUnRated=false;
    int temp=0;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a!=b)
        {
            isRated=true;
            break;
        }
        if(temp<a&&i!=0)
        {
            isUnRated=true;
        }
      temp=a;
    }
    if(isRated)
    {
        cout<<"rated"<<endl;
    }
    else if(isUnRated)
    {
        cout<<"unrated"<<endl;
    }
    else
    {
        cout<<"maybe"<<endl;
    }
    return 0;
}
