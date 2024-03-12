#include <iostream>
#include<vector>
using namespace std;
bool isEqulibrium(int n,vector<vector<int> >&forces)
{
    int sum_x=0,sum_y=0,sum_z=0;
    for(int i=0;i<n;i++)
    {
        sum_x+=forces[i][0];
        sum_y+=forces[i][1];
        sum_z+=forces[i][2];
    }
    return sum_x==0&&sum_y==0&&sum_z==0;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int> >forces(n,vector<int>(3));

    for(int i=0;i<n;i++)
    {
        cin>>forces[i][0]>>forces[i][1]>>forces[i][2];
    }
    if(isEqulibrium(n,forces))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
