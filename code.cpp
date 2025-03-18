#include <iostream>
#include<iomanip>
#include<string.h>
#include <climits>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);


int main()
{
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.o","w+",stdout);
    #endif

int n,h;
cin>>n>>h;
vector<int>v(n);
int cnt=0;
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
for(int i=0;i<n;i++)
{
    if(v[i]<h)
    {
        cnt++;
    }
}
cout<<cnt<<endl;

return 0;
}
 