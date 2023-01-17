				//leetcode  - Difference Between Element Sum and Digit Sum of an Array

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum =0 ; 
        sum = accumulate(nums.begin() , nums.end() ,0ll);
        string s;
        for(auto x : nums)
        {
            s += to_string(x);
        }
        int newsum = 0;
        
        for(int i = 0 ; i < s.size() ; i++)
        {
            newsum += (s[i] - '0');
        }
        return abs(sum - newsum) ;
    }
};

````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````


						//Bubble sort ;

#include<bits/stdc++.h>
class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    
    void bubbleSort(int arr[], int n)
    {
        
        for(int i = 0 ; i < n ; i ++)
        {
            for(int j = 0 ; j < n - 1 ; j ++)
            {
                if(arr[j] > arr[j + 1])
                {
                    swap(&arr[j] , &arr[j + 1]);
                }
            }
        }
    }
};


````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````

						//Selection sort


void selectionSort(int arr[], int n)
{
  for(int i = 0 ; i < n - 1  ; i++)
    {
        int mini = i ;
        for(int j = i + 1 ; j < n ; j++)
        {
            if(arr[mini] > arr[j])
            {
                mini = j;
            }
        }
        swap(& arr[mini] , &arr[i]);
    }
}

````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
						//Merge Two Sorted Arrays

// c++
class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        vector<int> c(n + m);
        int i = 0 ;
        int j = 0;
        int k = 0; // to storing in c;
        while(i< m && j < n)
        {
            if(a[i] > b[j])
            {
                c[k] = b[j];
                j++;
                k++;
            }
            else{
                c[k] = a[i] ;
                i ++ ;
                k++;
            }
        }
        while(i < m)
        {
            c[k] = a[i];
            i++;
            k++;
        }
        while(j < n)
        {
            c[k] = b[j] ;
            j ++ ;
            k++;
        }
        for(int i = 0 ; i< c.size() ; i++)
        {
            a[i] = c[i] ;
        }
    }
};


//java
class Solution {
    public void merge(int[] a, int m, int[] b, int n) {
        int len = m + n;
        int[] ans = new int[len];
        int i  = 0 , j  =  0, k = 0  ;
        
        while(i < m && j < n) 
        {
            if(a[i] > b[j])
            {
                ans[k] = b[j];
                j ++ ;
            }
            else{
                ans[k] = a[i];
                i ++ ;
            }
            k ++;
        }
        
        while(j < n)
        {
            ans[k] = b[j];
            j++ ; k++;
        }
        while(i < m)
        {
            ans[k] = a[i];
            i++ ; k++;
        }
        
        for(int ii = 0 ; ii < ans.length; ii ++)
        {
            a[ii] = ans[ii];
        }
    }
}
