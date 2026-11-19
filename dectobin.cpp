#include <bits/stdc++.h>
using namespace std;

string dtob(int n)
{

    if(n==0)
    return "0";
    if(n==1)
    return "1";

    return dtob(n/2) + char('0'+n%2);
}
int main()
{
    int n;
    cin>>n;
    cout<<dtob(n);
}