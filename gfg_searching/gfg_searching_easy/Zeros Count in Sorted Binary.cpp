/*
Zeros Count in Sorted Binary
Given an array arr[] of only 0's and 1's. 
The array is sorted in descending order. 
Find the count of all the 0's.
*/
class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        int l=0,r=arr.size()-1,ans=arr.size();
        while(l<=r){
            int m=l+(r-l)/2;
            if(arr[m]==0){
                ans=m;
                r=m-1;
            }
            else l=m+1;
        }
        return arr.size()-ans;
    }
};