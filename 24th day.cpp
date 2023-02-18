		//Heater
class Solution {
    
    // arr[] , hasmap -> space (n) ;
    //pair 
    // Pair<int,int> p ;
    public static class Pair{
        // variables 
        int nr = -1;
        int nl = -1; 
        
        Pair(){
            
        }
        
        Pair(int nr , int nl){
            this.nr = nr;
            this.nl = nl ;
        }
    }
    
    public static Pair solve(int key , int [] arr){
        int start = 0 ;
        int end = arr.length - 1;
        Pair p = new Pair();
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(arr[mid] == key){
                return new Pair(arr[mid] , arr[mid]) ;
            }
            else if(arr[mid] > key){
                p.nr = arr[mid] ;
                end = mid - 1;
            }
            else if(arr[mid] < key){
                p.nl = arr[mid] ;
                start = mid + 1;
            }
        }
        return p ;
    }
    
    public int findRadius(int[] houses, int[] heaters) {
        Arrays.sort(heaters);
        int n = houses.length ;
        int ans = 0 ;
        for(int i = 0 ; i < n ; i ++){
            int currentho = houses[i] ;
            Pair p = solve(currentho , heaters) ; // this function gave me min diff of left and right heaters 
            int d1 = (p.nr == -1) ? Integer.MAX_VALUE : Math.abs(currentho - p.nr) ;
            int d2 = (p.nl == -1) ? Integer.MAX_VALUE : Math.abs(currentho - p.nl) ;
            int cdist = Math.min(d1, d2) ;
            if(cdist > ans){
                ans = cdist;
            }
            
        }
        return ans ;
    }
}

`````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
							//Sqrt(x)

class Solution {
public:
    
    int giveSqrt(int x){
        int start = 1 ;
        int end = x;
        while(start <= end){
            int  mid = start + (end - start) / 2;
            if(mid ==  x / mid){
                return  mid ;
            }
            else if(mid  > x / mid){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return end ;
        
    }
    
    int mySqrt(int x) {
        // return (int)sqrt(x) ;
        return giveSqrt(x);
    }
};

````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
						// Valid Perfect Square
class Solution {
public:
    bool isPerfectSquare(int num)
    {
        if (num == 1)
            return true;
        int start = 0;
        int end = num - 1;
        long long mid ;
        while (start <= end)
        {
            mid = start + (end - start) / 2;

            if (mid* mid == num)
                return true;

            else if (mid * mid > num)
            {
                end = mid - 1;
            }
            else if (mid * mid < num)
            {
                start = mid + 1;
            }

        }
        return false;
    }
};

``````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
					//Find Minimum in Rotated Sorted Array
class Solution {
public:
    int findMin(vector<int>& nums) {
                    //o(logn)
        if(nums[0] < nums[nums.size() - 1]){
            return nums[0] ;
        }
        int ans = nums[0] ;
        int start = 0 ;
        int end = nums.size() - 1;
        while(start <= end){
            int mid = (start + end) / 2;
            if(nums[mid] < ans){
                ans = nums[mid] ;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans ;
        
                    //  travesal - o(n);
    }
};

``````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````

						//Rotation
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	   // m  ems   
	   // 66 67 
	   //mini = 67; 
	    int mini = arr[0] ;
	    if(arr[0] <= arr[n - 1]){
	        return 0;
	    }
	    int ans = 0;
	    int start = 1 , end = n - 1;
	    while(start <= end){
	        int mid = start + (end - start) / 2;
	        if(arr[mid] <= mini){
	            mini = arr[mid]; // mini = 5 val = 19 , mini = 2 , val = 7
	            ans = mid ;
	            end = mid -1;
	        }
	        else{
	            start = mid + 1;
	        }
	    }
	    return ans;
	}

};
                                                      //search in rotated sorte array
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size() - 1;
        int start = 0 , end = n ;
        while(start <= end){
            int mid = (start + end) / 2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[start] <= nums[mid] ) { // left half
                if(target >= nums[start] && target <= nums[mid]){
                    //left 
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }
            else //right half
            {
                if(target >= nums[mid] && target <= nums[end]){
                    //left 
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }
        return  -1 ;
        
    }
};
