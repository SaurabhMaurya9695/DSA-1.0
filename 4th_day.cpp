						//Alternative Square Pattern
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n ;
	cin >> n ;
	ll arr[n][5];
	int cnt = 1 ;
	for(int i= 0 ; i < n ; i++)
	{
	    if(i % 2 == 0 )
	    {
	        for(int j = 0 ; j < 5 ; j++){
	            arr[i][j] = cnt;
	            cnt++;
	        }
	    }
	    else{
	        for(int j = 4 ; j>=0  ; j--){
	            arr[i][j] = cnt;
	            cnt++;
	        }
	    }
	}
	
	for(int i = 0 ; i < n ; i++)
	{
	    for(int j = 0 ; j < 5 ;j ++)
	    {
	        cout<< arr[i][j] << " ";
	    }
	    cout<< endl;
	}
	return 0;
}




						//Chibaka and the Number
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n ;
	cin >> n ;
	string s = to_string(n); // 
	string res ;
	for(int i = 0 ;i < s.size() ; i ++)
	{
		int a = s[i] - '0'; // char to number in via ASCII code ;
		if(i == 0 && a == 9)
		{
			cout<< a ;
		}
		else{
			cout<<min(9-a , a); // min(s[i] , 9 - s[i]) ;
		}
	}
	cout<< endl;
	return  0;
}

						//Attack on Kingdom
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    ll n;
    cin >>n ;
    vector<ll > arr(n);
    for(auto &x :arr) cin>> x;
    sort(arr.begin() , arr.end());
    cout<< arr[1] << endl;
    return ;
}

int main() {
	ll t;
	cin >> t;
	while(t--)
	{
	    solve();
	}
	return 0;
}




