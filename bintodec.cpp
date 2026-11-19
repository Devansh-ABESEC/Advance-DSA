#include <bits/stdc++.h>
using namespace std;

int btod(int n)
{

    if(n==0)
    return 0;
    if(n==1)
    return 1;

    return btod(n/10)*2+(n%10);
}
int main()
{
    int n;
    cin>>n;
    cout<<btod(n);
}