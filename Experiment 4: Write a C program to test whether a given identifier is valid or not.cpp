#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string s;
    bool flag;

    cin>>s;
    if(isalpha(s[0]) || s[0] == '_')
        flag = true;
    else
        flag = false;
    for(int i=1; i<s.size(); i++)
    {
        if(!isdigit(s[i]) && !isalpha(s[i]) && s[i]!='_')
        {
            flag = false;
            break;
        }
    }

    if(flag) cout<<"Valid identifier"<<endl;
    else cout<<"Invalid"<<endl;
}
