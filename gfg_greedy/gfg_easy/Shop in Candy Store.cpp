/*
Shop in Candy Store
In a candy store, there are different types of candies available and prices[i] represent the price of  ith types of candies. 
You are now provided with an attractive offer.
For every candy you buy from the store, you can get up to k other different candies for free. 
Find the minimum and maximum amount of money needed to buy all the candies.
Note: In both cases, you must take the maximum number of free candies possible during each purchase.
*/
class Solution {
public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        sort(prices.begin(), prices.end());
        int n = prices.size();
        int mn = 0, mx = 0;
        // Minimum: buy cheapest, take k most expensive free
        for (int i = 0, j = n - 1; i <= j; ) {
            mn += prices[i++];
            j -= k;
        }
        // Maximum: buy most expensive, take k cheapest free
        for (int i = 0, j = n - 1; i <= j; ) {
            mx += prices[j--];
            i += k;
        }
        return {mn, mx};
    }
};
