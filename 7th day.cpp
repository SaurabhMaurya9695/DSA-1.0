                    //Partition of an array
import java.io.*;
import java.util.*;

public class Main {

  public static void partition(int[] arr, int pivot){
    int i = 0 , j = 0 ;
    while(i < arr.length)
    {
        if(arr[i] > pivot)
        {
            i++;
        }
        else{
            swap(arr ,  i ,  j);
            i ++ ;
            j ++ ;
        }
    }
  }

  // used for swapping ith and jth elements of array
  public static void swap(int[] arr, int i, int j) {
    System.out.println("Swapping " + arr[i] + " and " + arr[j]);
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  public static void print(int[] arr) {
    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
    System.out.println();
  }

  public static void main(String[] args) throws Exception {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int[] arr = new int[n];
    for (int i = 0; i < n; i++) {
      arr[i] = scn.nextInt();
    }
    int pivot = scn.nextInt();
    partition(arr,pivot);
    print(arr);
  }

}

                            //Quick Sort
import java.io.*;
import java.util.*;

public class Main {

  public static void quickSort(int[] arr, int lo, int hi) {
    //write your code here
    //basecase ;
    if(lo > hi) return ;
    
    int pivot = arr[hi] ; //we choose last elemnt as pivot ;
    int pidx = partition(arr , pivot , lo , hi) ; // pidx is on corect pos ;
    quickSort(arr , lo , pidx - 1) ;
    quickSort(arr , pidx + 1 , hi);
    
  }

  public static int partition(int[] arr, int pivot, int lo, int hi) {
    System.out.println("pivot -> " + pivot);
    int i = lo, j = lo;
    while (i <= hi) {
      if (arr[i] <= pivot) {
        swap(arr, i, j);
        i++;
        j++;
      } else {
        i++;
      }
    }
    System.out.println("pivot index -> " + (j - 1));
    return (j - 1);
  }

  // used for swapping ith and jth elements of array
  public static void swap(int[] arr, int i, int j) {
    System.out.println("Swapping " + arr[i] + " and " + arr[j]);
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  public static void print(int[] arr) {
    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
    System.out.println();
  }

  public static void main(String[] args) throws Exception {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int[] arr = new int[n];
    for (int i = 0; i < n; i++) {
      arr[i] = scn.nextInt();
    }
    quickSort(arr, 0, arr.length - 1);
    print(arr);
  }

}

                        //sort the colors
class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        vector<int> v;
        int zeros = 0 ,ones = 0, twos = 0;
        for(int i = 0; i< n; i++)
        {
            if(arr[i] == 0)
            {
                zeros++;
            }
            else if(arr[i] == 1)
            {
                ones++;
            }
            else{
                twos++;
            }
            
        }
        
        while(zeros)
        {
            v.push_back(0);
            zeros--;
        }
        while(ones)
        {
            v.push_back(1);
            ones--;
        }
        while(twos)
        {
            v.push_back(2);
            twos--;
        }
        for(int i =0 ;i< n; i++)
        {
            arr[i] = v[i];
        }
        
        
    }
};

                        //partition array on the basis of pivot
class Solution {
public:
    vector<int> pivotArray(vector<int>& arr, int pivot) 
    {
        int n = arr.size() ;
        int i = 0 , j = 0;
        vector<int> left , right ;
        int pcnt = 0 ;
        while(i < n)
        {
            if(arr[i]  > pivot)
            {
                right.push_back(arr[i]);
            }
            else if(arr[i] < pivot)
            {
                left.push_back(arr[i]) ;      
            }
            else {
                // equal condition ;
                pcnt++;
            }
            i++;
        }
        
        while(pcnt -- )
        {
            left.push_back(pivot);
        }
        for(int i = 0 ; i< right.size() ; i++)
        {
            left.push_back(right[i]);
        }
        return left;
    }
};

                        //Sort 01
#include<iostream>
#include<vector>

using namespace std;


void swap(vector<int>& arr, int i, int j) {
  cout << "Swapping index " << i << " and index " << j << endl;
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}


void sort01(vector<int>& arr) {
  int n = arr.size() ;
  int i = 0 , j = 0 ;
  int pi = 1 ;
  while(i < n)
  {
      if(arr[i] == 1) i++;
      else{
          swap(arr , i, j) ;
          i++ ;
          j++;
      }
  }
}


void Display(vector<int>& arr) {
  for (int ele : arr) {
    cout << ele << endl;
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  sort01(arr);
  Display(arr);
  return 0;
}

                            // Least Pair sum k elements
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    ll n , k ;
    cin >> n  >> k;
    vector<ll > arr ( n) ;
    for(auto &x : arr) cin >> x;
    sort(arr.begin() , arr.end());
    for(int i = 0 ; i < k ; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< endl;
    return ;
}
int main() {
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}

                    //      Seating Arrangement
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<-4*(a[0]-a[n-1])<<endl;
    }
    return 0;
}


                    //Array Reordering
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n ;
    cin >> n ;
    vector<ll > arr(n) , brr(n);
    for(auto &x : arr) cin >> x;
    for(auto &y : brr) cin >> y;
    sort(arr.begin() , arr.end());
    reverse(arr.begin() , arr.end());
    sort(brr.begin() , brr.end());
    for(int i = 0 ; i < n ; i++)
    {
        cout<< arr[i] << " "; 
    }
    cout<< endl;
    for(int i = 0 ; i < n ; i++)
    {
        cout<< brr[i] << " "; 
    }
    cout<< endl;
}

int main() {
    // your code goes here
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}


                    // Sort the array 
#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
       vector<pair<int,int>> v(n);
       
       for(int i=0;i<n;i++){
           v[i] = {a[i],i};
       }
       
       sort(v.begin(),v.end());
       
      int count = 0;
      for(int i=0;i<n;i++){
          if(v[i].second == i) {
              continue;
          }
          else{
              count++;
              swap(v[i],v[v[i].second]);
              i--;
          }
      }
    
    
      cout<<count<<endl;
    
    }
}

                            




