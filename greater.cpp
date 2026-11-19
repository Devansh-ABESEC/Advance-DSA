///wap c++ program to find the next greater element for every element in an array using an
// stack the next greater element is the first greater element present on its right side 
//if no greater elemnt exist print -1 for that element.
#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main()
{
    stack<int>st;
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        st.push(arr[i]);
    }
    int max= st.top();
    st.pop();
    int i=n-2;
    vector<int>ans(n-1);
   while(!st.empty())
{
        if(st.top()<max)
        {
            ans[i]=max;
            i--;
        }
        else
        {
            max=st.top();
            i--;
        }
        st.pop();
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
    }
}