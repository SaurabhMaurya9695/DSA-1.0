                        //Count Number of Pairs With Absolute Difference K

//brute force will passed 
class Solution {
public:
    int countKDifference(vector<int>& arr, int k) {
        int cnt = 0;
        for(int i = 0 ;i < arr.size() ; i ++)
        {
            for(int j = 0 ; j< arr.size()  ; j++)
            {
                if(i < j && abs(arr[i] - arr[j]) == k)
                {
                    cnt++;
                }
            }
        }
        return cnt ;
    }
};


//java solution 
class Solution {
    public int countKDifference(int[] arr, int k) {
        int cnt = 0 ;
        HashMap<Integer , Integer > mp = new HashMap<>();
        for(int i = 0 ; i < arr.length ; i ++)
        {
            if(mp.containsKey(arr[i] + k))
            {
                cnt += mp.get(arr[i] + k) ;
            }
            if(mp.containsKey(arr[i] - k))
            {
                cnt += mp.get(arr[i] - k) ;
            }
            mp.put(arr[i] , mp.getOrDefault(arr[i] , 0) + 1) ;
        }
        return cnt ;
    }
}


                            //Inverse of a Number

// 2 8 3 4 6  7 5 1 reverse of this number 
// 8 7 6 5 4  3 2 1
// 1 -1 
// 5 - 2
// 7 - 3
// 6 - 4
// 4 - 5
// 3 - 6
// 8 - 7
// 2 - 8

// 1 8 6 5 2 4 3 7 


// 1 5 7 6 4 3 8 2 
// 1 2 3 4 5 6 7 8

// [ (1, 1) , (5, 2) , (7,3) , (6,4) , (4,5) , (3,6) , (8,7) ,(2,8)];



if(arr[i].first == arr[i].second) continue;  || if(arr[i] == i ) continue;
 int first = arr[i].first ; // 5              first = arr[i] ,
 int second = arr[i].second; // 2             second = i;
 arr[first] = second ; // arr[5] = 2 ;       swap(arr[second] , first) ;
 swap(arr[first] , second) ;

             

                                        // Count Equal and Divisible Pairs in an Array

 // Java solution 
class Solution {
    public int countPairs(int[] nums, int k) {
    int count = 0;
    HashMap<Integer,List<Integer>> x = new HashMap<>();
    for(int i=0;i<nums.length;i++){
    
        if(!x.containsKey(nums[i])) //if - key doesn't exists in map
            x.put(nums[i], new ArrayList<>());  // key: nums[i], value: []
        else
            for(int o : x.get(nums[i]))  // else - traverse the list
                if((o*i)%k==0)// count++ if it meets condition
                    count++; 
        x.get(nums[i]).add(i);  // add index to it's list
        
    }
        return count;
    }
}      


//C++ solution
class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        // 2 loops till n => o(n2) ;
        // lookup -> finding in map -> o(1) ;
        
        // 3 - 0 , 6
        // 1 - 1 , 5
        // 2 - 2 , 3 , 4
        unordered_map<int , vector<int> > mp ;
        int cnt = 0;
        for(int i = 0 ; i < nums.size() ; i ++)
        {
            if(mp.find(nums[i]) != mp.end()){
                vector<int> temp = mp[nums[i]];
                for(auto x : temp)
                {
                    if((i * x ) % k == 0)
                    {
                        cnt ++;
                    }
                }
            }
            mp[nums[i]].push_back(i) ;
        }
        
        
        return cnt ;

    }
};
