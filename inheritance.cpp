#include <iostream>
#include<bits/stdc++.h>
#include <string>
//#include <cctype>
#include <vector>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);

class Person
{
public:
    string name;
    int age;
    void display1()
    {
        cout<<" Name : "<<name<<endl;
        cout<<" Age : "<<age<<endl;
    }
};
class student :public Person
{
public:
    int id;
    void display2()
    {
        cout<<" Id : "<<id<<endl;
        display1();
    
    }
};
int main()
{   
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.o","w+",stdout);
   #endif
//think before speaking   cin.ignore(); 
student s1;
s1.id=101;
s1.name="shawon";
s1.age=20;
s1.display2();
return 0;
}

