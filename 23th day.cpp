		//Number of occurence

class Solution{
public:
            //o(logn)
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
	int count(int arr[], int n, int x) {
	    vector<int> temp (n) ;
	    for(int i = 0  ; i < n ;i ++){
	        temp[i] = arr[i];
	    }
	    
	    
	    int fidx = lower_bound(temp , x ) ;
	    int lidx = upper_bound(temp , x);
	    int ans = lidx - fidx  + 1 ;
	    return  (fidx >= 0 && lidx >= 0 ) ? ans : 0 ;
	}
};

        // HashMap -> o(n) space  + o(n) travese(time)
        // brute force -> o(n * n) ;
        // two pointer -> 
        // best case -> o(1) ;
        // worst case -> o(n) ;
        // traversal -> o(n) ;


-------------------------------------------------------------------------------------------------------------------------------------------------------
						//K-closet distance
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int start = 0 , end = arr.size() - 1;
        int mid ;
        while(start <= end){ // o(logn)
            mid = (start + end) / 2;
            if(arr[mid] == x){
                break;
            }
            else if(arr[mid] > x) 
            {
                end = mid - 1;
            }
            else if(arr[mid] < x){ // we have to go in right direction 
                start = mid  + 1;
            }
        }
        cout<< arr[mid ] << endl;
        int left , right ;
        if(mid - 1 < 0){
        // we get our mid now ;
             left = mid  , right = mid + 1;
        }
        else{
            left = mid - 1 , right = mid;
        }
        vector<int> ans ;
        while( k > 0 && left >= 0 && right < arr.size() ) //o(n)
        {
            if(abs(arr[left] - x) <= abs(arr[right] - x)){
                ans.push_back(arr[left]) ;
                left -- ;
            }
            else {
                ans.push_back(arr[right]) ;
                right ++ ;
            }
            k -- ;
        }
        
        //left < 0 but we have some k left
        while(right < arr.size() && k > 0){
            ans.push_back(arr[right]);
            right ++ ;
            k--;
        }
        while(left >= 0 && k > 0){
            ans.push_back(arr[left]);
            left --  ;
            k--;
        }
        
        sort(ans.begin() , ans.end()) ;  // o(klogk)
        return ans ;
    }
};

````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````


