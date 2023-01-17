#include <bits/stdc++.h>
using namespace std;

string solve(string s, int k)
{
    if(k == 1)
    {
        string res , res2 ;
        char temp = s[0];
        for(int i = 1 ; i< s.size() ; i++)
        {
            if(s[i] < temp)
            {
                temp = s[i];
            }
        }
        string ans ;
        for(int i = 0 ; i < s.size() ; i ++)
        {
            if(s[i] != temp)
            {
                ans += s[i];
            }
        }
        return temp + ans;
    }
	else{
	    string ans = "";
    	while (s.length() > 0) {
    
    		char temp = s[0];
    		for (int  i = 1; i < k &&  i < s.length(); i++) {
    			if (s[i] < temp) {
    				temp = s[i];
    			}
    		}
            
            cout<< temp << endl;
    		ans +=  temp;
    		for (long long i = 0; i < k; i++) {
    			if (s[i] == temp) {
    				s.erase(s.begin() + i);
    				break;
    			}
    		}
    	}
    	return ans;
	}

	
}

int main()
{

	int k ;
	cin >> k ;
	string s;
	cin >> s;

	cout << solve(s, k);
}
