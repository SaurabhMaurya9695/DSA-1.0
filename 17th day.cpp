					// Max subarray of size k

class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n){
        int i = 0 , j = 0 ; // 
        long long ans = INT_MIN ;
        long long sum = 0 ;
        while(j < n)//
        {//
            sum += arr[j]; // you have to do cal here
            if(j - i + 1 != k)
            {
                j ++ ;   
            }
            else if(j - i + 1 == k)
            {
                // we have to cal ans here
                ans = max(ans , sum) ;
                // before inc i 
                sum -= arr[i];
                i ++ ;
                j ++ ;
            }
        }
        
        return ans ;
    }
};

						//First Negative Number in size  k

#define ll long long

vector<ll> printFirstNegativeInteger(ll int arr[], ll int N, ll int k) 
{
    int i = 0 , j = 0 ;
    ll n = N ;
    vector<ll > ans ;
    // we have to store our negative ele
    deque<ll > dq;
    while(j < n)
    {
        //cal 
        if(arr[j] < 0) dq.push_back(arr[j]) ;
        if(j - i  + 1 != k)
        {
            j ++ ;
        }
        else if(j - i + 1 == k ){
            if(dq.size() == 0) 
            {
                ans.push_back(0) ;
            }
            else
            {
                ans.push_back(dq.front()) ;
            }
            if(arr[i] < 0) {
                dq.pop_front() ;
            }
            i ++ ;
            j ++ ;
        }
    }
    
    return ans ;
}

						// Distict Number In Window

vector<int> Solution::dNums(vector<int> &arr, int k) {
    if(k ==  1)
    {
        vector<int> temp (arr.size() , 1) ;
        return temp ;
    }
    int n = arr.size() ;
    int i = 0 , j = 0 ;
    vector<int> ans ;
    unordered_map<int , int > mp ;
    while(j < n)
    {
        //cal 
        mp[arr[j]] ++ ;
        if(j - i  +1 != k){
            j++;   
        }
        else if( j - i + 1 == k)
        {
            ans.push_back(mp.size()) ;
            if(mp[arr[i]] == 1)
            {
                mp.erase(arr[i]) ;
            }
            else{
                mp[arr[i]] -- ;
            }
            i++ ;
            j ++ ;
        }
    }
    return ans ;
}
