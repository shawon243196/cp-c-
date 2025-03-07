#include <iostream>
#include<iomanip>
#include<string.h>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);


int main()
{
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.o","w+",stdout);
    #endif
int x,y;
cin>>x>>y;
int a,b;
a=y/2;
b=x-a;cout<<b;
return 0;
}