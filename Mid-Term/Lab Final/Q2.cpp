#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin>>y;

    if(y==1) cout<<y;
    else cout<<pow(2, y-2)* pow(2, y-1);

    return 0;
}