#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a,b;
    cin>>n;
    int count=0;
    for(int i=0; i<n; i++)
    {
        cin.ignore(100, ' '); 
        cin>>a>>b;
        if(a>=2400 && b>a)
            count++;
    }
    return cout<<(count?"YES":"NO")<<endl,0;
}