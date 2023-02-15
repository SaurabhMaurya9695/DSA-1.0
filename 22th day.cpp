	//Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        
                //NLogN
        // sort(s.begin(), s.end());
        // sort(t.begin() , t.end());
        // return s == t;
        
        int n  =  s.size() , m =  t.size();
        if(n != m) return false;
        unordered_map<char , int > mp ;
        for(auto x : s){
            mp[x]++;
        }
        for(auto x : t){
            mp[x]--;
        }
        for(auto x : mp){
            if(x.second > 0) return false;
        }
        return true;
        
    }
};

						//Arrange coins
class Solution {
public:
    int arrangeCoins(int n) {
                        // o(N) ;
        // int coin = 1 ;
        // while(n > 0){ // 2
        //     n -= coin; // 2 - 3 => -1
        //     coin ++ ; // 4    
        // }
        // return coin - 2;
                        
                        //o(logn);
        
//         int start = 1 , end = n ;
//         int ans = 0 ;
//         while(start <= end)
//         {
//             long long mid = start + (end - start) / 2;
//             long long tcoins = (mid * (mid +  1)) / 2;
//             if(tcoins <= n){
//                 ans = mid ;
//                 start =  mid + 1;
//             }
//             else{
//                 end = mid -1;
//             }
            
//         }
//         return ans ;
        
                        //Maths o(sqrt(n))
        
        // return (int)((-1 + sqrt(1 + 8 *1ll * n)) / 2) ; 
    }
};

				//Insert position
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        // lower bound;
        int start = 0 ;
        int end = nums.size() - 1;
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            if(nums[mid] == target)
            {
                return mid ;
            }
            else if(nums[mid] > target)
            {
                end = mid - 1;
            }
            else{
                start = mid + 1 ;
            }
        }
        return start ;
    }
};

				// Floor value of an array
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    #define ll long long
    int findFloor(vector<long long> nums, long long n, long long target){
        
        if(nums[0] > target) return -1;
        if(nums[n -1] < target) return n - 1;
        ll start = 0 ;
        ll end = n - 1;
        while(start <= end)
        {
            ll mid = start + (end - start) / 2;
            if(nums[mid] == target)
            {
                return mid ;
            }
            else if(nums[mid] > target)
            {
                end = mid - 1;
            }
            else{
                start = mid + 1 ;
            }
        }
        return start - 1 ;
        
    }
};

				//Find First and Last Position of Element in Sorted Array
class Solution {
public:
    int lower_bound(vector<int> arr , int target)
    {
        int n = arr.size() ;
        int low = 0 , high =  n - 1;
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low ) / 2;
            if(arr[mid]  == target){
                ans = mid ; // we have to check in left
                high = mid -1 ;
            }
            else if(arr[mid] < target)
            {
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
                
        }
        return ans ;
    }
    int upper_bound(vector<int> arr , int target)
    {
        int n = arr.size() ;
        int low = 0 , high =  n - 1;
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low ) / 2;
            if(arr[mid]  == target){
                ans = mid ; // we have to check in right
                low = mid + 1;
            }
            else if(arr[mid] < target)
            {
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans ;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        // int focc = lower_bound(nums , target) ;
        // int locc = upper_bound(nums , target ) ;
        // return {focc , locc} ;
        
        vector<int> ans ;
        if(binary_search(nums.begin() , nums.end() , target) )
        {
            int fcc = std::lower_bound(nums.begin(), nums.end() , target) - nums.begin() ;
            int lcc = std::upper_bound(nums.begin(), nums.end() , target) - nums.begin() - 1;
            return {fcc , lcc} ;
        }
        else{
            return {-1,-1};
        }
    }
};















