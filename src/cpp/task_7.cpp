/*
 * Author: Firdavs Ezozxonov
 * Date: 1/19/2024
 * Name: hw-10
 */

class Problem7 {
public:
    int numRabbits(vector<int>& answers) {
        int ans = 0;
        unordered_map<int,int> mp;
        for(auto &i: answers){
            mp[i]++;
        }
        for(auto &i: mp){
            ans += ceil((float)i.second/(i.first+1))*(i.first+1);
        }
        return ans;
    }
};
