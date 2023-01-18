#include<bits/stdc++.h>
using namespace std ;
#define ll long long
#define mod 1000000007
ll gcd(ll a, ll b, ll mod) // TC = O(log n)
{
    if (b == 0)
    {
        return a % mod;
    }
    else
    {
        return gcd(b, a % b , mod);
    }
}
long long lcm(ll a, ll b , ll  mod)
{
    return ( (a / gcd(a, b)) * b) % mod;
}
ll countThis(ll L , ll  R)
{
    ll cnt = 0 ;
    for(ll i = L ; i<= R ; i++)
    {
        
        for(ll j=  i ; j <= R ; j++)
        {
            // cout << i << " " << j << endl;
            if(lcm(i , j , mod) <= R )
            {
                cnt++;
            }
        }
    }
    return cnt % mod ;
}

void solve()
{
    ll n;
    cin >> n ;
    ll qs;
    cin >> qs;
    ll sum =  0;
    while(qs != 0)
    {
        ll x;
        cin >> x;
        sum += ( countThis(x , n) % mod) ;
        qs -- ;
    }
    cout<< sum % mod << endl;
    return ;
}
int main()
{
    solve();
}
