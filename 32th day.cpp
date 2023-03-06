					//GetSubsequence
vector<string> gss(string s) // exp 
{
    //basecase ;
    if(s.size() == 0){
        return {""};
    }
    //faith
    char ch = s[0] ;
    string left = s.substr(1 ); //bc
    vector<string> ans = gss(left); // this function return us all the subsequence of left part
    vector<string> res ;
    for(auto x : ans){
        res.push_back("" + x);
    }
    for(auto x : ans){
        res.push_back(ch + x);
    }
    return res ;
}


`````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
					//KeyPad Combination
vector<string> keypad = {".;" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tu" , "vwx" , "yz"} ;
vector<string> solve(string s){ // exp
    //basecase ;
    if(s.size() == 0){
        return {""};
    }
    
    // faith
    char ch = s[0] ;
    string leftpart = s.substr(1) ; //till end ;
    vector<string> ans = solve(leftpart) ; // this call gives us all the kPC for string left
    int cval = ch - '0';
    string kval = keypad[cval]; // tu

    vector<string> res ;
    for(auto x : kval){
        for(auto y : ans){
            res.push_back(x + y) ;
        }
    }
    return res ;

}
