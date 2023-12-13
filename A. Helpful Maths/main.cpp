#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {

    string s;
    cin>>s;
    int n=(s.length()+1)/2;

    int number[n];
    for(int i=0;i<n;i++)
    {
        number[i]=s[i*2]-'0';

    }
    sort(number,number+n);
    for(int i=0;i<n;i++)
    {
        cout<<number[i];
        if(i<n-1)
        {
            cout<<'+';
        }
    }


    return 0;
}
