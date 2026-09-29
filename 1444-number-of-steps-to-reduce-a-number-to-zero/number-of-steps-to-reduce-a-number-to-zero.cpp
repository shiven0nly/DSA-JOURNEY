class Solution {
public:
    int numberOfSteps(int n) {
        int count = 0;
        for(int i = n ; i > 0 ; i--){
            if(n==0){
                break;
            }
            else if(n % 2 == 0){
                n = n / 2;
            }
            else {
                n = n - 1;
            }
            count++;
        }
        return count;
    }
};