					// Two Sum Problem

//java code -> 
class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer ,  Integer > mp = new HashMap<>() ;
        for(int i = 0 ; i < nums.length ; i ++)
        {
            mp.put(nums[i] , i);
        }
        
        int [] arr = new int[2];
        for(int i = 0; i < nums.length ; i ++)
        {
            if(mp.containsKey(target - nums[i]))
            {
                if(i != mp.get(target - nums[i])){
                    arr[0] = i;
                    arr[1] = mp.get(target - nums[i]) ;
                    break;
                }
            }
        }
        return arr;
    }
}

// c++ code
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int t) {
        unordered_map<int,int> mp ;
        for(int i = 0 ; i < arr.size() ;i  ++)
        {
            mp[arr[i]] = i ;
        }
        vector<int> ans ;
        for(int i = 0  ;i < arr.size() ; i ++)
        {
            if(mp.find(t - arr[i]) != mp.end())
            {
                if(i == mp[t - arr[i]]) continue;
                else{
                ans.push_back(i) ;
                ans.push_back(mp[t - arr[i]]);
                break;
                }
            }
        }
        return ans ; 
        
    }
};

// using Two pointer Method
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n = nums.size() ;
        vector<pair<int,int>> vp; 
        for(int i = 0 ; i< n ; i++)
        {
            vp.push_back({nums[i] ,  i}) ;
        }
        sort(vp.begin() , vp.end()) ;
        vector<int> ans ;
        int start = 0 , end = n - 1 ;
        while(start < end)
        {
            if(vp[start].first + vp[end].first == target)
            {
                return {vp[start].second , vp[end].second} ;
                start ++;
                end -- ;
            }
            else if(vp[start].first + vp[end].first > target)
            {
                end --;
            }
            else{
                start ++;
            }
        }
        return {};
    }
};

				//Key Pair

class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool solve(vector<int>& arr, int n , int t) {
        unordered_map<int,int> mp ;
        for(int i = 0 ; i < arr.size() ;i  ++)
        {
            mp[arr[i]] = i ;
        }
        vector<int> ans ;
        bool ok = false;
        for(int i = 0  ;i < arr.size() ; i ++)
        {
            if(mp.find(t - arr[i]) != mp.end())
            {
                if(i == mp[t - arr[i]]) continue;
                // else{
                // ans.push_back(i) ;
                // ans.push_back(mp[t - arr[i]]);
                // break;
                // }
                ok = true;
                break;
            }
        }
        return ok ; 
        
    }
	bool hasArrayTwoCandidates(int nums[], int n, int x) {
	    vector<int> arr(n) ;
	    for(int i = 0 ; i < n ;i ++)
	    {
	        arr[i] = nums[i] ;
	    }
	    
	    return solve(arr , n , x) ;
	}
};


			//Two Sum II - Input Array Is Sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int start =0;
        int end = arr.size() - 1;
        vector<int> ans;
        while(start <= end)
        {
            if(arr[start] + arr[end] == target)
            {
                ans.push_back(start + 1);
                ans.push_back(end + 1);
                return  ans;
            }
            
            else if(arr[start] + arr[end] > target)
            {
                end--;
            }
            else{
                start ++;
            }
        }
        return {};
        
    }
};


			//Max Number of K-Sum Pairs


// c++->
class Solution {
public:
    int maxOperations(vector<int>& arr, int k) 
    {
            1 3 3 3 4 
        sort(arr.begin(), arr.end()) ;
        int start = 0, end = arr.size() - 1;
        int cnt = 0;
        while(start < end)
        {
            if(arr[start] + arr[end] == k)
            {
                cnt++;
                start++;
                end--;
            }
            else if(arr[start] + arr[end] > k)
            {
                end-- ;
            }
            else{
                start ++ ;
            }
        }
        return (cnt ) ;
    }
}		
			
// JavA code
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        int n = nums.size();
        unordered_map<int, int> Map;
        int ans = 0;
        
        for(int i = 0 ; i < n ; i++){
            
            if(Map[k - nums[i]] > 0){
                ans++;
                Map[k-nums[i]]--;
            }else{
                Map[nums[i]]++;
            }
            
        }
        
        return ans;
        
        
    }
};


				// Pair Class

import java.util.*;
class Pair{
    int first , second ;
    Pair(){
        
    }
    Pair(int x , int y)
    {
        this.first = x;
        this.second = y;
    }
    
    public void setFirst(int x)
    {
        this.first =x;
    }
    public void setSecond(int y)
    {
        this.second = y;
    }
    
    public int getFirst()
    {
        return this.first;
    }
    public int getSecond()
    {
        return this.second;
    }
    
    public void printpair(){
        System.out.println("my first is" + this.first + " and our second is " + this.second);
    }
}

public class Main
{
	public static void main(String[] args) {
		
		Scanner scn = new Scanner(System.in);
		int a =scn.nextInt() ;
		int b = scn.nextInt() ;
		Pair p = new Pair(a, b) ;
		p.printpair();
	}
}


			// Codeforces Question
void solve()
{
	ll n ;
	cin >> n ;
	vector<ll > arr = readvector(n) ;
	ll start = 0 ;
	ll end = n - 1 ;
	while(start < end)
	{
		cout<< arr[start] << " " ;
		cout<< arr[end] << " ";
		start++;
		end--;
	}
	if(n % 2 == 1)
	{
		cout<< arr[start] << " ";
	}
	cout<< endl;
	return ;
}
