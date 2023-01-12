					// Java Switch Case statement

// User function Template for Java

class Solution{
    static double switchCase(int choice, List<Double> arr){
        double ans = 0 ;
        switch(choice){
            case 1:{
                double r = arr.get(0);
                ans = Math.PI * r * r;
                break;
            }
            case 2 :{
                double l = arr.get(0);
                double b = arr.get(1);
                ans = l * b ;
                break;
            }
        }
        //raunak = > s
        // s.chatAt(i);
        
        return ans;
    }
}


						//Pattern 1
class Solution {

    void printSquare(int n) {
        for(int i = 0 ; i < n ; i++){
            for(int j =0 ; j < n ; j ++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}

						//Pattern 2


for(int i = 0 ; i < n ; i++){
    for(int j =0 ; j < n ; j ++){
        if(j>=i){
            System.out.print("* ");
        }
    }
    System.out.println();
}

						// ++Bits
//Java
import java.util.Scanner;

public class Bits {

	public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 int n = scanner.nextInt();
 int ans =0;
 while(n-->0) {
	 String x = scanner.next();
	 
	 if(x.charAt(1) == '+'){
	 	ans++
	 }
	 else{
	 	ans--;
	 }
		 
 System.out.println(ans);
	}
}

//c++
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n ;
	cin >> n ; // scanner sc = sc.nextInt() ; -> input
	int x = 0;
	while(n --)
	{
		string s;
		cin >> s; //input ;
		// ++x , --x , x++ , x--
		if(s ==  "++X" || s == "X++"){  //s[1] == '+' 
			x ++ ;
		}
		else{
			x--;
		}
	}
	cout<< x << endl;
	return 0;
}

						//Beautiful Matrix
#include<bits/stdc++.h>
using namespace std;
int main(){
	// int arr[5][5] ;
	vector<vector<int>> arr (5 , vector<int>(5 ));
	for(int i = 0 ;i < 5; i ++)
	{
		for(int j =0 ;j < 5; j ++)
		{
			cin>> arr[i][j];
		}
	}

	//find the place where 1 is located ;
	int row = 0 , col =0 ;
	for(int i = 0 ;i < 5; i ++)
	{
		for(int j =0 ;j < 5; j ++)
		{
			if(arr[i][j] == 1){
				row = i;
				col = j;
				break;
			}
		}
	}

	cout<< abs(2 - row) + abs(2 - col ) <<endl;
	return 0;
	

}

//java Code
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	    Scanner scanner = new Scanner(System.in);
	    int[][] arr = new int[5][5];
		for(int i = 0 ;i < 5; i ++)
    	{
    		for(int j =0 ;j < 5; j ++)
    		{
    			arr[i][j] = scanner.nextInt();
    		}
    	}

	//find the place where 1 is located ;
	int row = 0 , col =0 ;
	for(int i = 0 ;i < 5; i ++)
	{
		for(int j =0 ;j < 5; j ++)
		{
			if(arr[i][j] == 1){
				row = i;
				col = j;
				break;
			}
		}
	}

    System.out.println(Math.abs(2 - row) + Math.abs(2 - col ) );
	}
}

					//B Matrix Differece
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	// 3 -> 1 to n2 => 1, 2, 3, 4, 5, 6, 7, 8, 9 => 8 => max pair we can make;
	// 1- 9 => 8 ;
	// 1 - 8=> 7

	// 1 9 2   => sprial matrix
	// 7 3 8
	// 4 6 5
}





















