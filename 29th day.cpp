						//Koko Eating Banana
class Solution {
public:
    int ceil(int x , int y){
        if(x % y == 0){
            return (x / y);
        }
        else{
            return (x / y) + 1;
        }
    }
    
    bool isItPossibleToEat( vector<int> piles , int h , int k )
    {
        long long timeTakenToEat = 0 ;
        for(int i = 0 ; i < piles.size() ; i ++){
            timeTakenToEat += ceil(piles[i] , k) ;
        }
        
        if(timeTakenToEat > h) return false;
        else{
            return true ;
        }
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size() ;
        int start = 1 ;
        int end = *max_element(piles.begin() , piles.end())  ;
        int ans  = h ; // 
        while(start <= end){
            int mid = start + (end - start) / 2;
            // transistion point code ;
            if(isItPossibleToEat(piles , h , mid ) == true) // if it is a tran point
            {
                ans = mid ;
                end = mid - 1;
            }
            else{
                start =  mid + 1;
            }
        }
        return ans ;
    }
};

``````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
					// Minimized Maximum of Products Distributed to Any Store

class Solution {
public:
    int ceil(int x , int y){
        if(x % y == 0){
            return (x / y);
        }
        else{
            return (x / y) + 1;
        }
    }
    bool isPossibleToDistribute(vector<int> arr , int shops , int mid){
        int filled = 0;
        for(int i = 0 ; i < arr.size() ; i ++){
            filled += ceil(arr[i] , mid) ;
        }
        if(filled > shops) return false;
        else return true ;
    }
    
    int minimizedMaximum(int shops, vector<int>& arr) {
        int start = 1 ;
        int end = 100000 ;
        int ans = shops ;
        while(start <= end){
            int mid = start + (end - start) /2;
            if(isPossibleToDistribute(arr , shops , mid) == true){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans ;
    }
};

``````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````

						//Minimum Time to Complete Trips

class Solution {
public:
    
    #define ll long long
 
    bool ifIsPossibleToMakeTrip(vector<int> time ,  int totalTrips , ll mid)
    {
        ll ourTrips = 0;
        for(ll i = 0 ;i < time.size() ; i ++){
            ourTrips += (mid / time[i]);
        }
        if(ourTrips >= totalTrips) return true;  // we have to do atleast this trip  so we can do greator then trip 
        else return false ; 
    }
    
    long long minimumTime(vector<int>& time, int totalTrips) {
        ll start = 1 ;
        ll end = 1e14 ; //max value 
        ll ans = totalTrips;  // if we take 1e14 it will also work 
        
        while(start <=  end){
            ll mid = start + (end - start ) / 2;
            if(ifIsPossibleToMakeTrip(time , totalTrips , mid) == false){
                  start = mid + 1;
            }
            else{
                ans = mid ;
                end = mid -1 ;
            }
        }
        return ans ;
    }
};
