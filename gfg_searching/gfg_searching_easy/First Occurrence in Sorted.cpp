/*
Second Largest
Given an array of positive integers arr[], 
return the second largest element from the array. 
If the second largest element doesn't exist then return -1.
Note: The second largest element should not be equal to the largest element.
*/
class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int largest = -1, second = -1;
        for (int x : arr) {
            if (x > largest) {
                second = largest;
                largest = x;
            }
            else if (x > second && x != largest) {
                second = x;
            }
        }
        return second;
    }
};