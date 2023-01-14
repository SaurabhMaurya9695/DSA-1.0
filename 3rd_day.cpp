					//Factors Finding
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
	ll n ;
	cin >> n ;
	vector<ll > arr ; //-> int [] arr = new arr[]; ->
	for(int i = 0; i < n ; i ++)
	{
	    if(n % (i +1) == 0)
	    {
	        arr.push_back(i + 1);
	    }
	}
	cout<< arr.size() << " ";
	for(auto x : arr)
	{
	    cout<< x << " ";
	}
	cout<<endl;
	return 0;
}
