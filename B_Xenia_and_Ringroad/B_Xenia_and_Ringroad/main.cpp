#include <iostream>

using namespace std;

int main()
{
    int nomOfHouses,tasks;

    cin>>nomOfHouses>>tasks;
    int pointer =1;
    long long  cntr=0;
    for(int i=0;i<tasks;i++)
    {
        long long houses;
        cin>>houses;
        if(pointer<=houses)
        {
            cntr+=(houses-pointer);
        }
        else
        {
            cntr+=(nomOfHouses-pointer)+houses;

        }
        pointer =houses;
    }
    cout<<cntr<<endl;

    return 0;
}


