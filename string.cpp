#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	unordered_map<char,int>mp;
	for(int i=0;i<s.size;i++)
	{
	    mp[s]++;
	}
	char ch=' ';
	for(auto x:mp)
	{
	    if(x.second==1)
	    ch=x.first;
	}
	for(int i=0;i<s.size();i++)
	{
	    if(s[i]==ch)
	    {
	        cout<<i;
	        break;
	    }
	}

}
