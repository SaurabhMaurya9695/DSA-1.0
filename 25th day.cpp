						//Peak element 
						
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int start = 0 ;
        int end = arr.size() - 1;
        int n = arr.size() ;
        
        // base case ;
        if(n < 3 ) return -1;
        while(start <= end){
            int mid = start + (end - start) /  2;
            // m == 0 then mid - 1 does't exist same for m == n then m + 1 not exist 
            if(mid > 0 &&  mid + 1 < n){
                if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]){
                    return mid ;
                }
                else if(arr[mid] > arr[mid + 1]){  // 1 2 4 9 6
                    end = mid - 1 ;
                }
                else if(arr[mid] > arr[mid - 1]){
                    start = mid + 1;
                }
            }
            
            if(mid == 0){
                //first ele is peak element
                return (arr[0] > arr[1]) ? 0 : 1; 
            }
            else if(mid == n - 1){
                //last elem is peak  elem
                return (arr[n-1] > arr[n-2]) ? n - 1 : n - 2 ;
            }
             
        }
        return -1;
    }
};

``````````````````````````````````````````````````````````````````````````````````
						//Leetcode 162
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int start =0 ;
        int end = nums.size() - 1;
        int n = nums.size() ;
        if(n == 1) return 0;
        if(n == 2)
        {
            if(nums[0] > nums[1]) return 0;
            else  return 1;
        }
        
        int res = -1;
        while(start <= end)
        {
            int mid = (start + (end - start) / 2) ;
            if(mid > 0 &&  mid < n-1) // means mid can't be 0 or n - 1;
            {
                if(nums[mid] > nums[mid +1] && nums[mid] > nums[mid -1])
                    {
                        res = mid ;
                        break;
                    }
                    else if(nums[mid+1] > nums[mid]) // 7 8 9
                    {
                        start = mid + 1;
                    }
                    else{
                        end = mid - 1;
                    }
            }
            else if(mid == 0) //only two elemnt is there at starting;
            {
                res = (nums[0] > nums[1]) ? 0 : 1 ;
                break;
            }
            else if(mid == n - 1){
                res = (nums[n-1] > nums[n-2] ) ? n-1 : n-2;
                break;
                
            }
                
            
        }
        return res;
        
        
    }
};
`````````````````````````````````````````````````````````````````````````````
							//No of max Ones III
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int flip = 0 ;
        int i = 0 , j = 0 ;
        int n = nums.size() ; 
        int ans = 0;
        while(j < n){ // same as sliding 
            if(nums[j] == 0){
                flip ++ ;
                j++;
            }
            while(flip > k){  // flip > k // we have to eli from starting 
                if(nums[i] == 0){
                    flip --;
                }	
                i ++ ;
                j ++ ;
            }
            ans = max(ans , j - i + 1) ;
        }
        return ans ;
    }
};

````````````````````````````````````````````````````````````````````````````````
						// Cat and Mice
// Problem: C. Save More Mice
// Contest: Codeforces - Codeforces Round #748 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1593/C
// Memory Limit: 256 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
/*
 *    coder :: Saurabh Maurya
 *        >>> INDIA <<<
 */
 #define sz(x) (int)(x).size()
#define ll long long
#define ff first
#define ss second
#define minheap priority_queue<long long, vector<long long>, greater<long long>>
#define endl "\n"
#define all(x) (x).begin() , (x).end()
#define sortarr(arr, n) sort(arr, arr + n);
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back
#define PI 3.14159265358979323846
#define mod 1000000007
#define print(v)                       \
    for (int i = 0; i < v.size(); i++) \
    {                                  \
        cout << v[i] << " ";           \
    }
#define maxelement(nums) *max_element(nums.begin(), nums.end());
#define minelement(nums) *min_element(nums.begin(), nums.end());
#define py "Yes"
#define debug(x) cout << #x << " " << x << endl;
#define pn "No"
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
 
// movement in grid -> 2 d
const int x8[8] = {1, 0, -1, 0, 1, 1, -1, -1};
const int y8[8] = {0, 1, 0, -1, -1, 1, -1, 1};
const int x4[4] = {1, -1, 0, 0};
const int y4[4] = {0, 0, -1, 1};

template <class T>
vector<T> readvector(T n)
{
    vector<T> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    return arr;
}
template <class T>
void debugst(set<T> &st)
{
    for(auto x : st)
    {
    	cout<< x << " ";
    }
    cout<< endl;
}



void solve()
{
	ll n , k;
	cin >> n >> k;
	vector<ll > arr = readvector(k) ;
	ll sum = 0 , ans = 0;
	sort(all(arr)) ; // 4 4 5 7 8 9
	reverse(all(arr)) ;  // 9 8 7 5 4 4 
	for(auto x : arr){
		
		sum += (n - x);
		if(sum > n - 1){
			break;
		}
		else{
			ans ++ ;
		}
	}
	cout<< ans << endl;
	return ;
	
}
 
int main()
{
	fast;
	ll t;
	cin >> t;
	while(t--)
	{
		solve();
	}
}





							
