class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth = 0;
        for(int i = 0; i < accounts.size() ; i++){
            int sum = 0; // initializing sum
            for(int j = 0 ; j < accounts[i].size(); j++){
                sum = sum + accounts[i][j];
                // sum = accounts[0][1] + accounts[0][1] + accounts[0][j_max]; 
            }
            maxwealth = max(maxwealth,sum);
        }
        return maxwealth;
    }
};