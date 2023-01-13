#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n ;
	cin >> n ;
	//create a 2d matrix ;
	// vector<vector<int>> arr (n , vector<int >(n ));
	int arr[n][n] ;

	int maxi = n * n , mini = 1;

	for(int i = 0 ; i < n ; i++){
		if(i % 2 == 0) // left to right
		{
			for(int j = 0 ; j< n ; j++){
				if(j % 2 == 0){
					arr[i][j] = mini ;
					mini ++ ;
				}
				else{
					arr[i][j] = maxi ;
					maxi --;
				}
			}
		}
		else{
			//right to left ;
			for(int j = n - 1 ; j >= 0 ; j--){
				if(j % 2 == 0){
					arr[i][j] = maxi ;
					maxi -- ;
				}
				else{
					arr[i][j] = mini ;
					mini++;
				}
			}
		}
	}

	for(int i = 0 ; i< n ; i++){
		for(int j = 0 ; j < n ; j ++){
			cout<< arr[i][j] << " ";
		}
		cout<< endl;
	}
	return ;

}


int main(){
	
	// 3 -> 1 to n2 => 1, 2, 3, 4, 5, 6, 7, 8, 9 => 8 => max pair we can make;
	// 1- 9 => 8 ;
	// 1 - 8=> 7

	// 1 9 2   => sprial matrix
	// 7 3 8
	// 4 6 5

	int t ;
	cin >> t;
	while(t -- ){
		solve();
	}
}





								//count digits

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int n){
        int temp = n ;
        int ans = 0 ;
        while(temp != 0){
            int rem = temp % 10 ; //=> 2 ,1
            temp = temp / 10 ; // 1 , 0
            
            // 5 / 0 => exception -> infinity
            if(rem > 0 && n % rem == 0){
                ans ++ ;
            }
        }
        return ans ;
    }
};


								//Reverse Integer 
class Solution {
    public int reverse(int n) {
        long  res = 0;
        while(n != 0 ){
            int rem = n % 10 ;// 3 , 2 , 1
            n = n / 10 ; // 12 , 1 , 0 
            res = res * 10 + rem ; // 3 ,  32 , 321 ;
        }
        
        if(res > Integer.MAX_VALUE  || res < Integer.MIN_VALUE){
            return 0 ;
        }
        else{
            return (int)res ;
        }
    }
}

								//Max_Gcd

#include<bits/stdc++.h>
using namespace std;
int main(){
	
	//2
	//3 -> 1, 2, 3 => (1, 2) , (1, 3) , (2,3) => max_Gcd = 1;

	//4 -> 1, 2, 3, 4 => (1, 2) , (1, 3) , (1, 4)  , (2, 3) , (2, 4)  (3, 4) => max_gcd=>2
	
	//5 -> 1, 2, 3, 4, 5 => (1, 2) , (1, 3) , (1, 4) , (1, 5) , (2, 3) , (2, 4) , (2, 5) 
	//(3, 4) , (3, 5) , (4 , 5); =>  2 

	// 2 = 2 * 1 
	// 4 = 2 * 2 *  1
	int t ;
	cin >> t;
	while (t -- ){
		int n;
		cin >> n ;
		cout<<(n / 2) << endl;
	}
	return 0;

}


								// A. The New Year: Meeting Friends		
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	// 7 1 4 => 6 , 3 -> 1, 4, 7 => 6
	// 30 20 10 => 20 .. 10 20 30 => 20 ;
	// 1 4 100 => 3 +  96 = > 99 ;
	// a b c = > a - c

	vector<int> arr (3) ;
	for(int i = 0 ;i < 3; i ++){
		cin >> arr[i];
	}
	sort(arr.begin() , arr.end());
	cout<< arr[2] - arr[0] << endl;
	return 0 ;
}



