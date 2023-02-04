                                // 3Sum closet

// solution 1 ;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    
        // Initialize some neccessary variables
          int n=nums.size();
          int result;
          int diff=INT_MAX;
        
        // Sort the array in ascending order: O(nlogn)
          sort(nums.begin(),nums.end());
        
        // Use Two Pointer For Optimization: O(n^2)
          for(int i=0;i<n-2;i++)
          {
              int start=i+1;
              int end=n-1;
              
              // Iterate Two Pointer
              while(start<end)
              {
                  int val=nums[start]+nums[end]+nums[i];
                  // Store value every time in result if you find a value more closer to it's target
                  if(diff>abs(val-target))
                  {  
                      diff=abs(val-target);
                      result=val;
                  }
            // If three values summation is equal to target then just return
                  if(val==target)
                      return target;
                  else
                  {
                    // If val<target then just point 'start' to it's next value
                      if(val<target)
                          start++;
                  else
                      // If val>target then just point 'end' to it's last value
                      end--;
                  }
                 
              }
          }
        
       // Return Result
        return result;
    } 
};



// solution number 2
class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        sort(arr.begin() , arr.end());
        int diff = INT_MAX;
        int sum ;
        int n = arr.size() ;
        for(int i = 0 ; i< n ;i ++)
        {
            int start = i + 1;
            int end = n - 1;
            while(start < end)
            {
               if(abs(arr[i] + arr[start] + arr[end] - target) < diff)
               {
                   diff = abs(arr[i] + arr[start] + arr[end] - target);
                   sum = arr[i] + arr[start] + arr[end] ;
               }
                if(arr[i] + arr[start] + arr[end] == target) 
                {
                    return target;
                }
                else if(arr[i] + arr[start] + arr[end] < target) {
                    start ++;
                }
                else {
                    end -- ;
                }
            }
        }
        return sum ;
    }
};

                        //Valid Traingle

// for a traingle if third side should be greator than two side 
// sort the array and we know that last element is  > previous two element 
class Solution {
public:
    int triangleNumber(vector<int>& arr) {
        sort(arr.begin() , arr.end()) ;
        reverse(arr.begin() , arr.end()) ; // for getting easier index
        // x ,y , z 
        //for traingle => x > y + z; // 4 3 2 2
        int cnt = 0 ;
        for(int i = 0 ; i < arr.size() ; i ++)
        {
            int start =  i + 1;
            int end = arr.size() - 1;
            while(start < end)
            {
                int x = arr[i] , y = arr[start] ,  z = arr[end];
                if(y + z > x)
                {
                    cnt += (end - start);
                    start ++  ;
                }
                else{
                    end -- ;
                }
            }
        }
        return cnt;
    }
};
