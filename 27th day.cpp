							//count zeros
class Solution{
public:
	int countZeros(vector<vector<int>>arr)
	{
	    int n = arr.size() ;
		int i = 0 , j = n - 1;
		int ans = 0;
		while(i < n && j>= 0)
		{
		    if(arr[i][j] == 0){
		        // we get our ans in dowm
		        ans += (j + 1);
		        i++;
		    }
		    else if(arr[i][j] == 1){
		        // we have to check in left 
		        j -- ;
		    }
		}
		return ans ;
	}
};
							//Row With max Ones

class Solution{
public:
    
    int solve(vector<int> arr , int start , int end){
        // first transistion point idx 
        int ans = -1;
        while(start <= end){
            int mid = (start + end) / 2;
            if(arr[mid] == 1){
                ans = mid ;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans  ;
        
    }
    
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int res = -1 ;
	    int currone = 0 ;
	    for(int i = 0 ; i < n ; i ++){
	       int ftranidx = solve(arr[i] , 0, m - 1);
	       if(ftranidx != -1){
	           int one = m - ftranidx ;
	           if(one > currone){
	               currone = one ;
	               res = i ;
	           }
	       }
	       else{
	           continue;
	       }
	    }
	    return res ;
	}

};
					//Tuple with Same Product


class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        //first we have to find the all pairs of multiples 
        int n = nums.size() ;
        unordered_map<int,int > mp;
        for(int i = 0 ; i < n ; i ++){
            for(int j = i  +1 ; j < n ; j ++){
                int prod = nums[i] * nums[j] ;
                mp[prod] ++ ;
            }
        }
        int ans = 0 ;
        for(auto x :  mp){
            if(x.second > 1){
                // 4n(n-1)
                int pairs = x.second ;
                ans += 4 * (pairs) *(pairs - 1);
            }
        }
        return ans ;
    }
};

					


