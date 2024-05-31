#include <iostream>

using namespace std;

int main()
{
    char c;
    cin>>c;
    string s;
    cin>>s;
    string keyboard="qwertyuiopasdfghjkl;zxcvbnm,./";
    for(int i=0; i<s.size(); i++)
    {
        for(int j=0; j<keyboard.size(); j++)
        {
            if(s[i]==keyboard[j])
            {
                if(c=='R')
                {
                   s[i]=keyboard[j-1];
                }
                 if(c=='L')
                {
                  s[i]=keyboard[j+1];
                }
                break;
            }

        }


    }
    cout<<s<<endl;


    return 0;
}


/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
    char c;
    cin >> c;
    string s;
    cin >> s;
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    for(int i = 0; i < s.size(); i++)
    {
        for(int j = 0; j < keyboard.size(); j++)
        {
            if(s[i] == keyboard[j])
            {
                if(c == 'R')
                {
                    // Ensure we do not go out of bounds on the left side
                    s[i] = keyboard[j - 1];
                }
                else if(c == 'L')
                {
                    // Ensure we do not go out of bounds on the right side
                    s[i] = keyboard[j + 1];
                }
                // Break out of the loop once we find the character
                break;
            }
        }
    }
    cout << s << endl;
    return 0;
}
*/
