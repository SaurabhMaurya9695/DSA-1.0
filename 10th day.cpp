class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // 1 2 0 => 1 2 -> ans -> 3  
        // 3 4 1 => 1 3 4 => arr[i] - arr[i + 1] > 1 => i + 2 
        // 7 8 9 11 12 
        // -1 -9 -8 -8 => ans -> 1
        // we have to remove <= 0
        // if(arr[0] != 1) return 1;
        
        // if(arr[i] != i + 1) ans -> i + 2;
        // 0 1 2 3 4 5
        // 1 3 4 5 6 7 
        if(!mp.containsKey(i + 1)   )
        {
            return i + 2 ;
        }
        
        
        
    }
};


                        // array divisble by k

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        // ( x + y ) % k => 0
        1 , 9 % 5
        1 % 5 = > 1. ,  9 % 5 = 4
        2 % 5 => 2.   , 8 % 5 = 3
                    (X + Y) % k
        (x % k  + ( y % k) )  % k = > 0  
         
        // n % k =>   r , k - r =    
        // 1 % 5 => 1 , 4   
        // 2 % 5 => 2 , 3
        // 3 % 5 => 3 , 2
        // 4 % 5 => 4 , 1
        // 5 % 5 => 0 , 0  -> zero freq must be even ( 5 , 10)
        // 6 % 5 => 1 , 
        // 7 % 5 => 2
        // 8 % 5 => 3
        // 9 % 5 => 4
        // 10 % 5 => 0 
    }
};
