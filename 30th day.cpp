				//Print Decresing
#include <iostream>
using namespace std;

void printDecreasing(int n){
    //basecase
    if(n == 0) return ;
    //exp
    cout<< n << endl;
    //faith
    printDecreasing(n-1);
}

int main(){
    int n;
    cin >> n;
    printDecreasing(n);
}

```````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
				//Print Inc
#include<iostream>
using namespace std;

void printIncreasing(int n){
    // write your code here
    // base case
    if(n == 0) return ;
    printIncreasing(n-1) ;
    
    //post order 
    cout<< n << endl;
    
    
}


int main(){
    int n; cin>>n;
    printIncreasing(n);
}
````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
					//Print IncDec

#include<iostream>
using namespace std;

void printIncDec(int n){
    // write your code here
    
    // base case
    if(n == 0) return ; // now go in post order ;
    //pre 
    cout<< n << endl;
    printIncDec(n-1) ;
    
    //post
    cout<< n << endl;
    
    
}


int main(){
    int n; cin>>n;
    printIncDec(n);
}

``````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
					
//					Maximum Mantic 



class Solution {
public:
    
    bool isPossibleToPlace(vector<int>& arr , int mid , int Balls)
    {
        int placed = 1 , placedAt = arr[0] ;
        for(int i = 1 ; i< arr.size() ; i ++)
        {
            if(placedAt + mid <= arr[i])
            {
                placed ++ ;
                placedAt = arr[i];
            }
        }
        if(placed < Balls) return false;
        else{
            return true ;
        }
    }
    
    int maxDistance(vector<int>& arr, int m) {
        
        sort(arr.begin() , arr.end()) ;
        int n = arr.size() ;
        int start = 1;
        int end = arr[n-1] - arr[0] ; // max force we can get 
        int ans = -1;
        while(start <= end)
        {
            int mid = start + (end - start) /2;
            if(isPossibleToPlace(arr , mid , m) == true)
            {
                ans = mid;
                start = mid  + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return ans ;
        
    }
};
