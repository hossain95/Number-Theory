#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll totient_phi(ll n)
{
    ll result = n;
    for(ll i = 2; i * i <= n; i++)
    {
        if(n%i==0)
        {
            result -= result/i;
            while(n%i == 0)
            {
                n /= i;
            }
        }
    }
    if(n > 1)
    {
        result -= result/n;
    }
    return result;
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        ll a, m;
        scanf("%I64d %I64d", &a, &m);
        ll gcd;
       ll g = __gcd(a, m);
        m /= g;
        printf("%I64d\n", totient_phi(m));
    }
    return 0;
}
