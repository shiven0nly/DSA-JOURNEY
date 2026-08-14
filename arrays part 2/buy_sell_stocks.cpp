#include <iostream>
#include <climits>
using namespace std;

void maxProfit(int *prices, int n){
    int bestBuy[100000]; // constraints given in leetcode, so array size won't go outside of 10^5
    bestBuy[0] = INT_MAX;
    for(int i=1; i < n ; i++){
        bestBuy[i] = min(bestBuy[i],prices[i-1]);
    }
    int maxProfit = 0;
    for(int i = 0; i < n ; i++){
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit,currProfit);
    }
    cout << "max Profit = "<<maxProfit<<endl;

    // Time Complexity = O(n + n) = O(n)
}
int main () {
   int prices[] = {7,1,5,3,6,8}; // stock prices with indexes as day
   int n = sizeof(prices)/sizeof(int);


    return 0;
}