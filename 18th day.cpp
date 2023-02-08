						// Permutation in String 
				
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size() ;
        int m = s2.size() ;
        if(n > m) return false;
        
        //we have to create map for s1 ;
        unordered_map<char , int>mp; 
        for(auto x : s1) mp[x]++;
        
        int size = mp.size() ;  
        int k = n ;  // window size
        int i = 0 , j = 0; 
        while(j < m)
        {
            //ca
            if(mp.find(s2[j]) != mp.end()) // means we found jth char in map then we have to decrese the frew
            {
                mp[s2[j]] -- ;
                if(mp[s2[j]] == 0)  // if freq is zero 
                {
                    size -- ;  // mp size dec by 1 
                }
            }
            if(j - i  + 1 != k )
            {
                j ++ ;
            }
            else if(j - i + 1 == k)
            {
                if(size == 0) return true;  // all the elements we found in map 
                
                if(mp.find(s2[i]) != mp.end()) 
                {
                    mp[s2[i]] ++ ;
                    if(mp[s2[i]] == 1) size ++;  //if freq is zero 
                }
                i++;
                j++;
            }
        }
        return false;
    }
};

							//Count Occurences of Anagrams

class Solution{
public:
    int checkInclusion(string s1, string s2) {
        int n = s1.size() ;
        int m = s2.size() ;
        if(n > m) return false;
        
        //we have to create map for s1 ;
        unordered_map<char , int>mp; 
        for(auto x : s1) mp[x]++;
        
        int ans = 0 ;
        int size = mp.size() ;  
        int k = n ;  // window size
        int i = 0 , j = 0; 
        while(j < m)
        {
            //ca
            if(mp.find(s2[j]) != mp.end()) // means we found jth char in map then we have to decrese the frew
            {
                mp[s2[j]] -- ;
                if(mp[s2[j]] == 0)  // if freq is zero 
                {
                    size -- ;  // mp size dec by 1 
                }
            }
            if(j - i  + 1 != k )
            {
                j ++ ;
            }
            else if(j - i + 1 == k)
            {
                if(size == 0) ans ++ ;  // all the elements we found in map 
                
                if(mp.find(s2[i]) != mp.end()) 
                {
                    mp[s2[i]] ++ ;
                    if(mp[s2[i]] == 1) size ++;  //if freq is zero 
                }
                i++;
                j++;
            }
        }
        return ans;
    }
	int search(string s1 , string s2) {
	    // code here
	   return checkInclusion(s1 , s2) ;
	}

};


						// Find All Anagram in string

class Solution {
    public List<Integer> findAnagrams(String s2, String s1) {
        int n = s1.length() ;
        int m = s2.length() ;
        List<Integer> ans = new ArrayList<>() ;
        if(n > m) {
            return ans ;
        }
        
        //we have to create map for s1 ;
       HashMap<Character , Integer > mp = new HashMap<>() ; 
        for(int i = 0 ; i < n ; i ++)
        {
            char ch = s1.charAt(i);
            mp.put(ch , mp.getOrDefault(ch , 0)  + 1 );
        }
        
        int size = mp.size() ;  
        int k = n ;  // window size
        int i = 0 , j = 0; 
        while(j < m)
        {
            //ca
            char ch = s2.charAt(j);
            if(mp.containsKey(ch)) // means we found jth char in map then we have to decrese the frew
            {
                mp.put(ch , mp.get(ch ) - 1) ;
                if(mp.get(ch ) == 0)  // if freq is zero 
                {
                    size -- ;  // mp size dec by 1 
                }
            }
            if(j - i  + 1 != k )
            {
                j ++ ;
            }
            else if(j - i + 1 == k)
            {
                if(size == 0) { // all the elements we found in map 
                    ans.add(i);
                } 
                
                char ch2 = s2.charAt(i);
                if(mp.containsKey(ch2)) // means we found jth char in map then we have to decrese the frew
                {
                    mp.put(ch2 , mp.get(ch2 ) + 1) ;
                    if(mp.get(ch2 ) == 1)  // if freq is zero 
                    {
                        size ++ ;  // mp size dec by 1 
                    }
                }
                i++;
                j++;
            }
        }
        return ans;
    }
}

						











