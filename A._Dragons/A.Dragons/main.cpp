#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool compareFirst(const pair<int, int>& a, const pair<int, int>& b) {
    return a.first < b.first;
}
int main()
{

    int kirito_strength,n;
    cin>>kirito_strength>>n;
    vector<pair<int, int> > values;

    for(int i=0;i<n;i++)
    {
        int strength,bonus;
        cin>>strength>>bonus;
        values.push_back(make_pair(strength,bonus));
    }

    sort(values.begin(), values.end(), compareFirst);
    int cntr=kirito_strength;
    for(int i=0;i<n;i++)
    {
        if(cntr>values[i].first)
        {
            cntr+=values[i].second;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    return 0;
}
