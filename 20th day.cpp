                                            //sliding window maximum
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size() ;
        int i = 0 , j = 0;
        
        //define ds 
        deque<int> dq ;
        vector<int> ans;
        while(j < n)
        {
            //cal 
            if(dq.size() == 0){
                dq.push_back(nums[j]);
            }
            else{
                while(dq.size() > 0 &&  dq.back() < nums[j])
                {
                    dq.pop_back() ;
                }
                dq.push_back(nums[j]) ;
            }
            if(j - i  + 1 != k){
                j ++ ;
            }
            else if(j - i + 1 == k){
                ans.push_back(dq.front()) ;
                if(nums[i] == dq.front()){
                    dq.pop_front() ;
                }
                i ++ ;
                j ++ ;
            }
        }
        return ans ;
    }
};

                                              //Minimum Size Subarray Sum

class Solution {
public:
    int minSubArrayLen(int k, vector<int>& arr) {
        int n = arr.size() ;
        int i = 0 , j = 0 ;
        int ans = INT_MAX;
        int sum = 0 ;
        while(j < n){
            sum += arr[j] ;
            if(sum < k){
                j ++ ;
            }
            else if (sum >= k){
                while(sum >= k){
                    ans = min(ans , j - i + 1);
                    sum -= arr[i];
                    i ++ ;
                }
                j++;
            }
        }
        return (ans == INT_MAX) ? 0 : ans ;
    }
};
                                          //maxsize subarray <= k
class Solution{
	public:
	#define ll long long
	int findMaxSubarraySum(ll arr[], ll n, ll k)
	{
        ll i = 0 , j = 0 ;
        ll ans = INT_MIN;
        ll sum = 0 ;
        while(j < n){
            sum += arr[j] ;
            if(sum > k){
                while(sum > k)
                {
                    sum -= arr[i];
                    i++;
                }
                if(sum <=k){
                    ans = max(ans , sum );
                }
                j ++ ;
            }
            else if (sum <= k){
                ans =max(ans , sum);
                j++;
            }
        }
        return (ans == INT_MIN) ? 0 : ans ;
	}  

		 

};

                                            //count subarray
//explanation -> subtract only those subarray whose value is <=k from totalsubarray

class Solution{
public:
	#define ll long long

	ll countSubarray(int arr[], int n, int k) {
	    // code here
	    ll ans=0;
	    ll cnt=0;
	    for(int i=0; i<n; i++){
	        if(arr[i] <= k)
	            cnt++;
	        else{
	            ans += cnt*(cnt+1)/2;
	            cnt = 0;
	        }
	    }
	    ans += cnt*(cnt+1)/2;
	    ans = (ll)n*(n+1)/2 - ans;
	    return ans;
	}
};
