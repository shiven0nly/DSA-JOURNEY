// kadane's algorithm is a simplest way to calculate the maxSum of subarrays
// How it works:-
// 1. as adding two numbers we have three possiblities:-
//   i) (+ve) + (+ve) = +ve
//   ii) +ve(big) + (-ve) = +ve
//  iii) +ve + (-ve)(big) = -ve
// so negative number adding in next indexed number in subarrays will ultimately make our currSum small than previous
// so, instead of considering it what we does
// we calculate sum of one index then add another index in it, if currSum < 0 then we write if condition that currSum = 0 , and if its positive then we initialize maxSum = max(currSum,maxSum)

#include <iostream>
#include <climits>
using namespace std;

int maxSum=INT_MIN;
int kadanesAlgo(int *arr,int n){
    int currSum = 0;
    for(int i = 0; i < n ; i++){
        currSum = currSum + arr[i];
        maxSum = max(maxSum,currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << "max sum of subarrays: "<<maxSum<<endl;
}

int main (){
    int arr[] = {2,-3,6,5,4,2};
    int n = sizeof(arr)/sizeof(int) ;
    kadanesAlgo(arr,n);

    return 0;
}