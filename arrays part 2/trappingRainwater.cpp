#include <iostream>
#include <climits>

using namespace std;

int watertrap(int *arr, int n){
  int leftmax[20000];
  int rightmax[20000];
  // for leftmax
  leftmax[0] = arr[0];
  for(int i = 1; i < n ; i++){
    leftmax[i] = max(leftmax[i-1],arr[i]);
  }
  // for rightmax
  rightmax[n-1] = arr[n-1];
  for(int i = n-2 ; i >= 0 ; i--){
    rightmax[i] = max(rightmax[i+1],arr[i]);
  }
  // for water trap
  int waterTrapped = 0;
  for(int i = 0 ; i < n ; i++){
    int currWater = min(leftmax[i],rightmax[i]) - arr[i];
    if(currWater > 0){
        waterTrapped += currWater;
    }
  }
  cout << "Water trapped= " <<waterTrapped<<endl;
  return waterTrapped;
}
int main() {
    int heights[] = {4, 2,0,6,3 ,2};
    int n = sizeof(heights)/sizeof(int);
    watertrap(heights,n);

    return 0;
}