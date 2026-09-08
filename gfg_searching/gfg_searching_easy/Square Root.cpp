/*
Square Root
Given a positive integer n, find the square root of n. 
If n is not a perfect square, then return the floor value.
Floor value of any number is the greatest Integer which is less than or equal to that number.
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