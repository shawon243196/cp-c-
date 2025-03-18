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
    int t;
    cin>>t;
    while(t--){
int n;
cin>>n;
vector<int>v(n);
int count=0;
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
for (int i = 0; i < n; i++) 
   {
    for (int j = i; j < n; j++)
        {
    bool isNonDecreasing = true;//
    for (int k = i; k <j; k++) 
            {
    if (v[k] > v[k + 1]) 
                       {
                        isNonDecreasing = false;
                        break;
                        }
            }
            if (isNonDecreasing) 
            {
                count++;
            }
        }
}
cout<<count<<endl;
}        

return 0;
}
 