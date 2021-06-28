#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string s;
    cin>>s;

    switch(s[0])
    {
        case '>':
            if(s[1]=='=') cout<<"greater than or equal"<<endl;
            else cout<<"greater than"<<endl;
            break;
        case '<':
            if(s[1]=='=') cout<<"less than or equal"<<endl;
            else cout<<"less than"<<endl;
            break;
        case '=':
            if(s[1]=='=') cout<<"equal to"<<endl;
            else cout<<"assignment"<<endl;
            break;
        case '!':
            if(s[1]=='=') cout<<"not equal"<<endl;
            else cout<<"bitwise not"<<endl;
            break;
        case '&':
            if(s[1]=='&') cout<<"logical AND"<<endl;
            else cout<<"bitwise AND"<<endl;
            break;
        case '|':
            if(s[1]=='|') cout<<"logical OR"<<endl;
            else cout<<"bitwise OR"<<endl;
            break;
        case '+':
            cout<<"addition"<<endl;
            break;
        case '-':
            cout<<"subtraction"<<endl;
            break;
        case '*':
            cout<<"multiplication"<<endl;
            break;
        case '/':
            cout<<"division"<<endl;
            break;
        case '%':
            cout<<"modulus"<<endl;
            break;
        default:
            cout<<"Not an operator"<<endl;
    }
}
