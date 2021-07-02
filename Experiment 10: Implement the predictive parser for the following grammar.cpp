#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string table[100][100];

    table[0][0] =  " "; table[0][1] =  "a";     table[0][2] =  "b";     table[0][3] =  "c";     table[0][4] =  "d";    table[0][5] =  "$";
    table[1][0] =  "S"; table[1][1] =  "S->A";  table[1][2] =  "S->A";  table[1][3] =  "S->A";  table[1][4] =  "S->A"; table[1][5] =  " ";
    table[2][0] =  "A"; table[2][1] =  "A->Bb"; table[2][2] =  "A->Bb"; table[2][3] =  "A->Cd"; table[2][4] =  "A->Cd";
    table[3][0] =  "B"; table[3][1] =  "B->aB"; table[3][2] =  "B->e";  table[3][3] =  "B->e";
    table[4][0] =  "C";

    for(int i=0; i<=4; i++)
    {
        for(int j=0; j<=5; j++)
        {
            cout<<table[i][j]<<"\t";
        }
        cout<<endl;
    }

}
