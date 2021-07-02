#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    bool accepted = false;

    map<pair<char, char> , string> m;
    m[{'A', 'a'}] = "aBa";
    m[{'B', 'a'}] = "e";
    m[{'B', 'b'}] = "bB";

    stack<char> s;
    s.push('$');
    s.push('A');

    string input; cin>>input;

    cout<<"STACK: A$\t\t\t INPUT: "<<input<<endl;

    for(int i=0; i<input.size(); )
    {
        char pointer_value = input[i], top = s.top();

        if(top == '$')
        {
            if(pointer_value == '$')
            {
                accepted = true;
                break;
            }
            else
            {
                accepted = false;
                break;
            }
        }
        else if(top == pointer_value)
        {
            s.pop();
            i++;
        }
        else //mismatched
        {
            string production_rule = m[{top, pointer_value}];

            s.pop();

            if(production_rule != "e")
            {
                for(int j=production_rule.size()-1; j>=0; j--)
                {
                    s.push(production_rule[j]);
                }
            }
        }

        cout<<"STACK: ";

        stack<char> copy_s = s;
        vector<char> v;
        while(!copy_s.empty())
        {
            v.push_back(copy_s.top());
            copy_s.pop();
        }
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i];
        }
        cout<<"\t\t\t INPUT: ";
        for(int j=i; j<input.size(); j++)
        {
            cout<<input[j];
        }
        cout<<endl;
    }
    if(accepted) cout<<"String is accepted"<<endl;
    else cout<<"Not accepted"<<endl;

}
