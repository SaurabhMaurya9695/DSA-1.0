			//find the duplicate Element !

//techniques to solve this question 

		// sort .. arr[i] == arr[i + 1] ;  -> (logn) + n 
        // hashMap .. o(n) ;
        // cycledetection -> slow += 1 , fast = fast * 2
        // XOR 
        // HashSet 
        // freqMap (26 , 256) 
        // binarySearch -> sorted (logn) + (logn)
        // by using two loops
        
        //  1  3  4  2  2  
        // -1 -1 -1 -1  0 -> we saw each and every element once 

class Solution {
public:
    int findDuplicate(vector<int>& arr) 
    {
        unordered_map<int,int> mp ;
        for(auto x : arr)
        {
            mp[x] ++;
        }
        int max = INT_MIN;
        int val =  0 ;
        for(auto it : mp)
        {
            if(it.second > max)
            {
                max = it.second;
                val = it.first;
            }
        }
        return val;
    }
};

				// Find the duplicate Number 2

class Solution {
    public List<Integer> findDuplicates(int[] nums) {
       // create a hashmap
        HashMap<Integer , Integer> mp = new HashMap() ;
        
        //we need some DS to store ans ;
        ArrayList<Integer > lst = new ArrayList() ;
        for(int i = 0 ; i< nums.length ; i ++)
        {
            if(mp.containsKey(nums[i]))
            {
                mp.put(nums[i] , mp.get(nums[i]) + 1) ;
                lst.add(nums[i]);
            }
            else{
                mp.put(nums[i] , 1) ;
            }
        }
        return lst;
        
    }
}

						//Design HashMap
class MyHashMap {
    
    int [] arr ;
    
    public MyHashMap() {
        arr = new int [1000000];
        Arrays.fill(arr , -1) ;
    }
    
    public void put(int key, int value) {
        arr[key] = value;
    }
    
    public int get(int key) {
        return arr[key];
    }
    
    public void remove(int key) {
        arr[key] = -1;
    }
}

					//Desgin HashSet

class MyHashSet {
    
    boolean [] arr ;
    public MyHashSet() {
        arr = new boolean [1000001] ;
        Arrays.fill(arr , false);
    }
    
    public void add(int key) {
        arr[key] = true;
    }
    
    public void remove(int key) {
        arr[key] = false;
    }
    
    public boolean contains(int key) {
        return arr[key] ;
    }
}

					//Intersection of two arrays

class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        
        //creat HashSet ;
        HashSet<Integer> st = new HashSet() ;
        List<Integer > lst = new ArrayList() ;
        for(int x : nums1)
        {
            st.add(x); // 1 2  
        }
        

        for(int x : nums2)
        {
            if(st.contains(x)) // 2 , 2
            {
                lst.add(x);
                st.remove(x);
            }
        }
        
        int [] arr = new int [lst.size() ] ;
        for(int ii = 0 ; ii < lst.size() ; ii++)
        {
            arr[ii] = lst.get(ii) ;
        }
        return arr;
        
    }
}


				//Intersection of two array

class Solution {
    public int[] intersect(int[] a, int[] b) {
        // 1 2 2 1 ... // 2 2 2 2 2 2 => {2, 2} ;
        // {3,3} {3} => {3} ;
        
        // create HashMap & for storing ans array 
        HashMap<Integer ,Integer > mp = new HashMap() ;
        List<Integer > lst = new ArrayList();
        for(int i = 0 ; i < a.length ; i ++)
        {
            // if(mp.containsKey(a[i]))
            // {
            //     mp.put(a[i] , mp.get(nums[i]) + 1) ;
            // }
            // else{
            //     mp.put(a[i] , 1) ;
            // }
            
            mp.put(a[i] , mp.getOrDefault(a[i] , 0) + 1) ; // one liner 
        }
        // [1,2,1]  [2, 2] => 2,
        //common char ;
        // 1 - 2
        // 2 - 2
        for(int j = 0; j < b.length ; j ++)
        {
            if(mp.containsKey(b[j]) && mp.get(b[j]) > 0)
            {
                lst.add(b[j]) ;
                mp.put(b[j] , mp.getOrDefault(b[j] , 0) - 1) ;
            }
        }
        
        int [] arr = new int [lst.size() ] ;
        for(int ii = 0 ; ii < lst.size() ; ii++)
        {
            arr[ii] = lst.get(ii) ;
        }
        return arr;
        
        
    }
}

