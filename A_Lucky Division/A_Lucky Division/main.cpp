#include <iostream>
#include<string>
using namespace std;
bool isLucky(int num)
{
    string str = to_string(num);

    for(char c:str )
    {
        if(c!='4'&& c!='7')
        {
            return false;
        }

    }
    return true;
}
bool almostLucky(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(isLucky(i)&&n%i==0){
            return true;
        }
    }
    return false;

}

int main()
{
    int n;
    cin>>n;
    if(almostLucky(n))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
