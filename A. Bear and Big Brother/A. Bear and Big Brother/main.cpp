#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int cntr=0;
    while(a<=b)
    {
        a*=3;
        b*=2;
        cntr++;
    }
    cout<<cntr<<endl;
    return 0;
}
