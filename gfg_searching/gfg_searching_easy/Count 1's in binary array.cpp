/*
Count 1's in binary array
You are given a binary array that is sorted in non-increasing order, meaning all the 1's appear before the 0's. 
Find the total number of 1's present in the array.
*/
class Solution {
  public:
    int countOnes(vector<int>& arr) {
        int l=0,r=arr.size()-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(arr[m]==1) l=m+1;
            else r=m-1;
        }
        return l;
    }
};