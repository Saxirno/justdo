#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=0;i<3;i++)
    {
        sum+=n%10;
        n/=10;
    }
    cout<<sum;
    return 0;
}