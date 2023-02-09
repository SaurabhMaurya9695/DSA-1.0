						//Valid Anagram
						
class Solution {
public:
    bool isAnagram(string s, string t) {
                
                // o(nlogn) ->complexity
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s == t ;
        
        			//o(n) , o(n) ;
        int n = s.size() , m = t.size() ;
        if(n != m) return false;
        
        unordered_map<char ,int> mp;
        for(auto x : s) mp[x]++;
        for(auto y : t) mp[y]--;
        
        for(auto x : mp)
        {
            if(x.second >= 1) return false;
        }
        return true ;
        
    }
};

							// Max consicutive ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, maxi = 0;
        for(auto it: nums){
            if(it==0) count = 0;
            else{
                count++;
                maxi = max(maxi, count);
            }
        }
        return maxi;
    }
};

							//Minimum Window Substr

class Solution {
public:
    string minWindow(string s, string t) {
        long long n = s.size() , m = t.size() ;
        unordered_map<char , long long > mp ;
        for(auto x : t) mp[x] ++ ;
        long long size = mp.size() ;
        long long ans = INT_MAX ;
        long long i = 0  , j = 0 ;
        int lsti = 0 ;
        string res;
        while(j < n)
        {
            mp[s[j]]--;
            if(mp[s[j]] == 0) {
                size -- ;
            }
            if(size == 0)
            {
                while(size == 0)
                {
                    if(ans > j - i + 1)
                    {
                        ans = min(ans , j - i  + 1);
                        lsti = i;
                    }
                    mp[s[i]]++;
                    if(mp[s[i]] == 1) size ++;
                    i++;
                }
            }
            j ++ ;
            
        }
        return (ans == INT_MAX) ? "" : s.substr(lsti , ans);
        
    }
};

						//Smallest  string window
class Solution{
    public:
    int minWindow(string s, string t) {
        long long n = s.size() , m = t.size() ;
        unordered_map<char , long long > mp ;
        for(auto x : t) mp[x] ++ ;
        long long size = mp.size() ;
        long long ans = INT_MAX ;
        long long i = 0  , j = 0 ;
        int lsti = 0 ;
        string res;
        while(j < n)
        {
            mp[s[j]]--;
            if(mp[s[j]] == 0) {
                size -- ;
            }
            if(size == 0)
            {
                while(size == 0)
                {
                    if(ans > j - i + 1)
                    {
                        ans = min(ans , j - i  + 1);
                        lsti = i;
                    }
                    mp[s[i]]++;
                    if(mp[s[i]] == 1) size ++;
                    i++;
                }
            }
            j ++ ;
            
        }
        return (ans);
        
    }
    int findSubString(string str)
    {
        unordered_set<char > st ; //o(n)
        for(auto x : str) st.insert(x) ;
        string ans ;
        for(auto x : st) ans += x;
        
        string s = str , t = ans ;
        return minWindow(s, t) ;
    }
};

							//Find Resultant Array After Removing Anagrams
class Solution {
public:
    
    bool check(string s,  string t)
    {
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        return s == t ;
    }
    
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans ;
        ans.push_back(words[0]) ;
        string ok = words[0];
        for(int i = 1; i < words.size() ; i ++)
        {
            if(check(ok , words[i]) == true)
            {
                continue;
            }
            else{
                ok = words[i];
                ans.push_back(words[i]) ;
            }
        }
        return ans ;
    }
};

