#include <iostream>

using namespace std;

int main()
{
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    //the number of times we use the oven
    int g=(n+k-1)/k;
    //the time the oven1 takes to prepare
    int oven1=0;
    //the time the oven2 takes to prepare
    int oven2 =d;
    for(int i=0;i<g;i++)
    {
        if(oven1<=oven2)
        {
            oven1+=t;
        }
        else
            oven2+=t;
    }

    if(max(oven1,oven2)<=g*t)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
