class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> timeToCapacityMap(1001,0);
        for(auto trip: trips) {
            timeToCapacityMap[trip[1]] += trip[0];
            timeToCapacityMap[trip[2]] -= trip[0];
        }
        int cap = 0;
        for(auto currCap: timeToCapacityMap) {
            cap += currCap;
            if(cap>capacity)
                return false;
        }
        return true;
    }
};