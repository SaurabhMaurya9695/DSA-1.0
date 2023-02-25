 						//Allocate minimum number of pages

class Solution 
{
    public:
    bool isPossibleToRead(int pages[] , int noofbooks ,  int maxLimit , int maxStudent){
        int curr_sum = 0 ;
        int curr_student =  1 ; // by default one student is reading now
        for(int i = 0 ; i < noofbooks && curr_student <= maxStudent; i ++){
            if(curr_sum + pages[i] <= maxLimit) // we have to read every time ;
            {
                curr_sum += pages[i]; // student 1- > 10, 20 ,30 , 40 mid= 58 ,
                //s1 ca read only 30
            }
            else{
                curr_student ++ ;
                curr_sum = pages[i] ; // 30
            }
        }
        if(curr_student > maxStudent) return false;
        else return true ;
    }
    
    
    
    //Function to find minimum number of pages.
    int findPages(int pages[], int noofbooks, int student) 
    {
        if(student > noofbooks) return -1;
        // *max_element(arr , arr + n) ;
        // one student can read max pages of books -> which is read by one student
        int start = *max_element(pages , pages + noofbooks) ;
        //our end is total sum -> s2 can readall the books 
        int sum = 0 ;
        for(int i = 0 ; i < noofbooks ; i ++){
            sum += pages[i];
        }
        int end = sum ;
        int ans = -1; // if no such mini value found 
        
        while(start <= end){
            int mid = start + (end - start) / 2;
            // we gave the max load to every student to read only mid books 
            if(isPossibleToRead(pages , noofbooks ,  mid , student) == true){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans ;
        
        
    }
};

`````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
					//Painter's Partition Problem


   #define ll long long
   bool isPossible(vector<int> pages , int books, int maxLoad, int totalStud){
        ll currStud = 1, currPages = 0;

        for(int i=0; currStud <= totalStud && i<books; i++){

            if(currPages + pages[i] <= maxLoad){
                currPages = (currPages + pages[i]) % 10000003;
            } else {
                currStud++;
                currPages = pages[i];
            }

        }

        if(currStud > totalStud) return false;
        return true;
    }
  
  
  
  int findPages(int books , int students  ,vector<int> pages)
    {
        ll start = *max_element(pages.begin(), pages.end()) ;// min no of pages can read by student
        ll sum = 0 ;
        ll n = books ;
        for(int i =0 ; i< n; i++)
        {
            sum += pages[i];
        }
        ll high = sum  % 10000003 ;
        ll ans = -1;
        while(start <= high)
        {
            ll mid = start + ( high -  start) / 2;
            if(isPossible(pages, books, mid, students) == true) // is should be a possible ans;
            {
                ans = mid % 10000003;
                high = mid - 1;
            }
            else{
                start = mid + 1 ;
            }
        }
        return ans %  10000003;
    }


int Solution::paint(int A, int B, vector<int> &C) {
    // max books allocation problem ;
    ll x = findPages(A , B, C) ;
    return x;
}

`````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
								//capacity to load ship in d days

class Solution {
public:
    int findmaxi(vector<int>& pages , int books)
    {
        int maxi = INT_MIN;
        for(int i = 0; i< books ; i++)
        {
            if(pages[i] > maxi)
            {
                maxi = pages[i];
            }
        }
        return maxi ;
    }
    
    bool  ispossible(vector<int>& pages , int books , int totalstu , int mid)
    {
        int currstudent = 1;
        int totalreadbystud = 0;
        for(int i = 0 ; i< books ; i++)
        {
            totalreadbystud += pages[i] ; // 20 + 10 + 30 + 40 // mid - > 70 
            if(totalreadbystud > mid)
            {
                currstudent++;
                totalreadbystud = pages[i] ;
            }
        }
        if(currstudent > totalstu) 
            return false;
        else{
            return true ;
        }
        
    }
    int findpages(vector<int>& pages, int books, int totalstud) 
    {
        int start =  findmaxi(pages , books);
        int sum = 0 ;
        for(int i = 0 ; i< books ; i++)
        {
            sum += pages[i];
        }
        int end = sum ;
        int ans = -1; // if no other possibility exist ;
        
        //starting binary Search;
        while(start <= end)
        {
            int mid = start + (end - start) / 2 ;
            if(ispossible(pages , books , totalstud , mid) == true)
            {
                ans = mid ; // we get the temp ans and check in left side ;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            
        }
        return ans ;
    }
    int shipWithinDays(vector<int>& pages, int totalstud) {
        int books = pages.size() ; 
        int x = findpages(pages , books , totalstud);
        return x;
    }
};

````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````









