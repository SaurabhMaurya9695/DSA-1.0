				// 3Sum
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
       sort(arr.begin() , arr.end()) ;
        int n = arr.size() ;
        vector<vector<int>> res ;
        for(int i = 0 ; i < n - 2 ; i++)
        {
            if(i == 0 || i > 0 && arr[i] != arr[i -1])
            {
                int sum = 0 - arr[i] ;
                int start= i + 1;
                int end =  n - 1;
                while(start < end)
                {
                    if(arr[start] + arr[end] == sum)
                    {
                        res.push_back({arr[i] , arr[start] , arr[end]}) ;
                        
                        // duplicate element remove ;
                        while(start < end && arr[start] == arr [start + 1]) start ++ ;
                        while(start < end && arr[end] == arr [end - 1]) end-- ;
                        start ++ ;
                        end--;
                    }
                    else if(arr[start] + arr[end] < sum)
                    {
                        start ++ ;
                    }
                    else{
                        end -- ;
                    }
                }
            }
        }
        return res ;
    }
};
``````````````````````````````````````````````````````````````````````````````````````````````````````````````
					//3Sum Closet
class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        //1st step 
        sort(arr.begin() , arr.end()) ;
        int diff = INT_MAX;
        int n = arr.size() ;
        int sum = INT_MIN;
        for(int i = 0; i < n - 2 ; i ++)
        {
            int start = i + 1;
            int end = n - 1;
            while(start < end)
            {
                int val = arr[i] + arr[start] + arr[end] ;
                if(diff > abs(target - val))
                {
                    diff = abs(target - val);
                    sum = val ;
                }
                if(val == target) // diff = 0 
                {
                    return val;
                }
                else if(val > target)
                {
                    end -- ;
                }
                else{
                    start ++;
                }
                
            }
        }
        return sum ;
    }
    
};

`````````````````````````````````````````````````````````````````````````````````````````````````````````````````

				//seperate the digits 
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        string s;
        for(auto x : nums)
        {
            s += to_string(x);
        }
        vector<int> ans ;
        for(auto x : s)
        {
            ans.push_back(x - '0') ;
        }
        return ans ;
    }
};

````````````````````````````````````````````````````````````````````````````````````````````````````````````
				//3Sum Smaller

class Solution {
public:
    int threeSumSmaller(vector<int> &arr, int target) {
       int n = arr.size() ;
       sort(arr.begin() , arr.end()) ;
       int cnt = 0 ;
       for(int i = 0 ; i < n -2 ;i++)
       {
           int start = i  + 1;
           int end = n - 1;
           while(start < end)
           {
               if(arr[i] + arr[start] + arr[end] < target)
               {
                   cnt += end - start ; // we have sorted array then all the element between in this range have the sml ans
                   start++;
               }
               else 
               {
                   end -- ;
               }
               
           }
       }
       return cnt ;
    }
};
