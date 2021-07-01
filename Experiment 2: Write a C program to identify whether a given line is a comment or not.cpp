#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string s;
    bool flag = false;
    getline(cin, s);

    if(s[0]=='/')
    {
        if(s[1]=='/')
        {
            cout<<"It's a comment"<<endl;
            flag = true;
        }
        else if(s[1]=='*')
        {
            for(int i=2; i<s.size()-1; i++)
            {
                if(s[i]=='*' && s[i+1]=='/')
                {
                    cout<<"It's a comment"<<endl;
                    flag = true;
                    break;
                }
            }
        }
    }
    if(!flag)
    {
        cout<<"Not a comment"<<endl;
    }

}
