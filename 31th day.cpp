							//Factorial
#include<iostream>
using namespace std;

int factorial(int n){
    // write your code here
    if(n == 1) return 1 ;
    
    return n * factorial(n-1) ;
}


int main(){
    int n; cin>>n;
    cout<<factorial(n);
}

```````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
						//Power Liner 
import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in) ;
        int x = scn.nextInt() ;
        int n =scn.nextInt() ;
        System.out.println(power(x, n)) ;
    }

    public static int power(int x, int n){
        //base case ;
       if( n == 0) return 1;
       int val = x;
       int xNminusOne = power(x , n -1) ;
       return val * xNminusOne;
    }

}

``````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````

						//Power Logarthemic
int powerLogarithmic(int x,int n){
        
  if(n == 0) return 1;
  int xn2 = powerLogarithmic(x , n /2) ;
  int val = xn2 * xn2 ;
  if( n% 2 == 0){
      return val;
  }
  else{
      return val * x ;
  }
}

`````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````

							//pow(x, n)
class Solution {
public:
    double solve(double x, long n){
        if(n == 0) return 1;
        double temp = solve(x, n/2);
        double ans = temp * temp;
        if(n%2) ans *= x;
        return ans;
    }
    
    double myPow(double x, int n) {
        long nn = n;
        if(nn<0) nn *= -1;
        double ans = solve(x, nn);
        if(n < 0){
            return 1/ans;
        }
        return ans;
    }
};

````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
						//Power of two

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if( n < 0) return false;
        if(n == 1) return true ;
        if(n == 0) return false;
        if(n % 2 == 0)
        {
            return isPowerOfTwo(n / 2) ;
        }
        else{
            return false;
        }
        
    }
};

`````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
					//Display Array

void display(int arr[], int idx, int n){
    
    //basecase ;
    if( idx == n) return ;
    // write your code here
    //preorder
    cout << arr[idx] << endl;
    display(arr , idx + 1 , n) ;
}

