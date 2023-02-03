					//Two sum
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // n -> 10^4 
        // sqrt , logn , k 
        vector<vector<int>> res ;
        int n = nums.size() ;
        
        for(int i = 0 ; i< n ; i++)
        {
            for(int j = 0 ; j < n ; j ++ )
            {
                for(int k = 0 ; k < n ; k ++)
                {
                    if(i != j &&  i != k && j != k )
                    {
                        if(nums[i] + nums[j] + nums[k] == 0)
                        {
                            vector<int> ans {} ;
                            ans.push_back(nums[i]);
                            ans.push_back(nums[j]);
                            ans.push_back(nums[k]);
                            res.push_back(ans);
                            
                        }
                    }
                }
            }
        }
        //[[-1,0,1],[-1,1,0],[-1,2,-1],[-1,-1,2],[0,-1,1],[0,1,-1],[0,1,-1],[0,-1,1],[1,-1,0],[1,0,-1],[1,0,-1],[1,-1,0],[2,-1,-1],[2,-1,-1],[-1,-1,2],[-1,0,1],[-1,1,0],[-1,2,-1]]
        set<vector<int>> st ;
        for(int i = 0; i < res.size()  ; i ++)
        {
            vector<int>temp = res[i] ;
            
            sort(temp.begin(),temp.end()) ;
            st.insert(temp) ;
        }
        vector<vector<int>> res2;
        for(auto x  : st)
        {
            vector<int>temp  = x;
            res2.push_back(temp);
            
        }
        return res2 ;
    }
};

			//Optimize version using Two Pointer 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        vector<vector<int>> res ;
        for(int i = 0 ; i< nums.size() ; i ++)
        {
            int target = -nums[i] ;  
            // -4 -1 -1 0 1 2 
            int start = i  + 1;
            int end = nums.size() - 1;
            while(start < end)
            {
                int sum = nums[start] + nums[end] ;
                if(sum < target)
                {
                    start ++ ;
                }
                else if(sum > target)
                {
                    end -- ;
                }
                else{
                    // we find three numbers ;
                    res.push_back({nums[i] , nums[start] , nums[end] }) ;
                    //  -1 -1 2 2 2 2 2 2 
                    start ++ ;
                    end -- ;
                    while(start < end && nums[start] == nums[start - 1])
                    {
                            start ++ ;
                    }
                }
            }
        }
        
        // removing duplicacy ;
        set<vector<int>> st ;
        for(int i = 0; i < res.size()  ; i ++)
        {
            vector<int>temp = res[i] ;
            st.insert(temp) ;
        }
        vector<vector<int>> res2;
        for(auto x  : st)
        {
            vector<int>temp  = x;
            res2.push_back(temp);
            
        }
        return res2 ;
    }
};

				//Number of Arithmetic Triplets

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n = nums.size() ;
        int cnt = 0;
        for(int i = 0 ; i< n ; i++)
        {
            for(int j = 0 ; j < n ; j ++ )
            {
                for(int k = 0 ; k < n ; k ++)
                {
                    if(i < j && i < k && j < k)
                    {
                        if((nums[j] - nums[i] == diff) && (nums[k] - nums[j] == diff))
                        {
                            cnt ++;
                        }
                    }
                }
            }
        }
        return cnt ;
    }
};

				// optimized code 
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int k) {
        // x , y , z , k 
        // y - x = k  => y = x + k 
        // z - y = k => y => z - k ;
        
        // [0 , 1 , 4 , 6 , 7 ,10] k= 3
        // (1,4,7) , (4,7,10)
         unordered_map<int,int> mp ;
        for(int i = 0 ; i < nums.size() ; i ++)
        {
            mp[nums[i]] ++ ;
        }
        int ans = 0;
        for(auto &x  : nums)
        {
            if(mp.find(x + k) != mp.end()  && mp.find(x - k) != mp.end())
            {
                ans ++ ;
            }
        }
        return ans; 
        
    }
};





