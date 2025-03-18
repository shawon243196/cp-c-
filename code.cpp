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

int n;
cin>>n;
int f=0;
vector<int>v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
for(int i=0;i<n;i++)
{
    if(v[i]==1)
    {
       f=1;

    }

}
if(f==1){
cout<<"HARD"<<endl;
}
else{
    cout<<"EASY"<<endl;
}
return 0;
}
 