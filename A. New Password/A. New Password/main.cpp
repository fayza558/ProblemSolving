#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cout<<(char)('a'+(i%k));
    }
    return 0;
}

//another solution

#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    char c='a';
    string password;
    for(int i=0;i<n;i++)
    {
        password+=c;
        c++;
        if(c-'a'==k)
        {
            c='a';
        }
    }
    cout<<password<<endl;
    return 0;
}
