						// Binary Search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            if(nums[mid] == target)
                return mid ;
            else if(nums[mid] > target)
            {
                end = mid - 1 ;
            }
            else{
                start =  mid + 1 ;
            }
        }
        return -1;
    }
};

						//Find Transistion point

int transitionPoint(int arr[], int n) {
    int low = 0 , high =  n - 1;
    int ans = -1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == 0){
            low = mid + 1;
        }
        else if(arr[mid] == 1)  {
            ans = mid;
            //we have to check in left to find another tp ;
            high = mid -1;
        }
    }
    return ans ;
}

						//First Bad Version



class Solution {
public:
    #define ll long long 
    int firstBadVersion(int n) {
        ll low = 1 , high =  n ;
        ll ans = -1;
        while(low <= high){
            ll mid = (low + high) / 2;
            if(isBadVersion(mid) == false){
                low = mid + 1;
            }
            else   {
                ans = mid;
                //we have to check in left to find another tp ;
                high = mid - 1;
            }
        }
        return ans ;    
    }
};

						//Guess Number Higher or lower


class Solution {
public:
    int guessNumber(int n) {
        int low = 1 , high = n ;
        while(low <= high){
            int mid = low + (high-low) / 2;
            if(guess(mid) == 0){
                return mid ;
            }
            else if(guess(mid) ==1 ) {
                low =  mid + 1;
            }
            else if(guess(mid) == -1){
                high =mid - 1 ;
            }
        }
        return -1;
    }
    
};
