#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string s; cin>>s;              //input sting s
    int i = 0, state = 1;          //i=pointer

    while(i < s.size())
    {
        switch (state) {
            case 1:
                if(s[i] == 'b')
                {
                    i++;          //pointer++
                    state = 2;
                }
                else
                {
                    state = 4;    //dead state
                }
                break;
            case 2:
                if(s[i] == 'a')
                {
                    i++;
                    state = 3;
                }
                else {
                    state = 4;
                }
                break;
            case 3:
                if(s[i] == 'a')
                {
                    i++;
                    state = 3;
                }
                else{
                    state = 4;
                }
                break;
            case 4:              //dead state
                cout<<"Not Accepted\n";
                exit(0);
        }
    }
    if(state == 3)
    {
        cout<<"Accepted"<<endl;
    }

}
