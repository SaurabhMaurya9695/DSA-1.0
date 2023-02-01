					//Longest Cons sequence
class Solution {
    public int longestConsecutive(int[] arr) {
        int n =  arr.length ;
        if(n == 0 || n == 1) return n ;
        int ans = Integer.MIN_VALUE ;
        int cnt = 1 ;
        Arrays.sort(arr);
        for(int i = 0 ;i < n - 1 ; i ++)
        {
            if(arr[i + 1] - arr[i] == 1 )
            {
                cnt++;
                ans = Math.max(ans , cnt) ;
            }
            else if(arr[i+ 1] - arr[i] == 0){
                continue;
            }
            else{
                // >
                cnt = 1;
            }
        }
        return Math.max(ans , cnt) ;
    }
}	

			// Max Number of k sum pairs
class Solution {
    public int maxOperations(int[] nums, int k) {
        Arrays.sort(nums);
        // 1 3 3 3 4  ans = 6
        int start = 0;
        int end = nums.length - 1 ;
        int cnt = 0;
        while(start < end)
        {
            int sum = nums[start] +  nums[end];
            if(sum == k)
            {
                cnt++;
                start ++ ;
                end --;
            }
            else if(sum < k)
            {
                start ++;
            }
            else{
                 end--;
            }
        }
        return cnt ;
    }
}

					// count no of pairs
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // 1 1 5 7 
        // 1 1 1 1
        unordered_map<int,int> mp;
        int ans = 0 ;
        for(int i = 0 ; i< n ;i ++)
        {
            int left = k - arr[i] ;
            if(mp.find(left) != mp.end())
            {
                ans += mp[left] ;
            }
            mp[arr[i]] ++ ;
        }
        return ans ;
        
        
    }
};
