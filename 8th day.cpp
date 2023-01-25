// HashMap , Hashset , PriorityQueue , Deque , Stack , LinkedList , Array , String 
// recursion , dp, tree , graph 



// HashMap                  |         , HashSet -> 
// map , unordered_map 	    |	  set , unordered_set ;		
// it contains duplicate    |  it contains no  duplicate
// it has key value pair    |   no key value pair 
// insert , remove , size ,    -> same function in this ;
// find , count , 


#include<bits/stdc++.h> 
using namespace std ;
int main()
{
	// vector<int> arr = {1, 3,2, 1, 2, 3} ;
	//mp[arr[i]] ++ ; 
	
	//this is unorderd_map -> we get random values -> o(n);
	// 1 ->  2
	// 3 ->  2 
	// 2 ->  2


	// in map we get sorted key value ; -> o(nlogn);
	// key -> val 
	// 1 -> 2
	// 2 -> 2
	// 3 -> 2

	//initialize the HashMap 
	// map<T , T> nameofmap ;

	//HashMap<Integer , Integer > hmap = new HashMap() ;  -> java syntax ;
	vector<int> arr = {1, 3,2, 1, 2, 3} ;
	unordered_map<int  , int > mp;
	for(int i = 0 ; i< arr.size() ; i++)
	{
		mp[arr[i]] ++ ; 
	}

	//printing tha data of map 

	// for(auto x : mp)
	// {
	// 	cout << x.first << " " << x.second <<"\n";
	// }

	// find if 4 is present in array or not ?   
	// if(mp.find(3) != mp.end()) // value  mili  -> mp.contains(4) 
	// {
	// 	cout << "present in array" << endl;
	// }
	// else{
	// 	cout <<"NOT present" ;
	// }

	//find how many times 3 coming  --> mp.key(3) this gives you value 
	// for(auto x : mp)
	// {
	// 	int key  = x.first ;
	// 	int val = x.second ;
	// 	if(key == 3)
	// 	{
	// 		cout<< val << endl;
	// 		break;
	// 	}
	// }











	// set<T> nameofset ; ->syntax 
	//HashSet<T> NameofSet = new HashSet();

	// set<int> st ; 
	// for(int i = 0 ; i< arr.size() ; i ++)
	// {
	// 	st.insert(arr[i]) ;
	// }
	// for(auto x : st)
	// {
	// 	cout << x<<"\n";
	// }
	
	// cout<< endl;

}

					//Alice and bob
#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve()
{
	ll n , x ;
	cin >> n >>  x;
	vector<ll > arr(n) ;
	for(auto &x : arr) cin>> x;
	ll sum = accumulate(arr.begin() , arr.end() , 0ll) ;
	// cout<< sum << "<---\n";
	if(sum < x){
		cout<<"-1\n";
		return ;
	}
	else{
		sort(arr.begin() , arr.end());
		reverse(arr.begin() , arr.end());
		ll i = 0 , cnt = 0 ;
		while(x > 0 && i  < n)
		{
			cnt++;
			x -= arr[i];
			i++;
		}
		cout<< cnt << endl;
		return ;
	}
	
}
int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0 ;
}








