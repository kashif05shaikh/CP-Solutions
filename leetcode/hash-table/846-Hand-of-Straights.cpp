class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize != 0)
            return false;

        map<int, int> mp;

        for (int x : hand)
            mp[x]++;

        while (!mp.empty()) {
            int start = mp.begin()->first;

            for (int i = 0; i < groupSize; i++) {
                int x = start + i;

                if (mp[x] == 0)
                    return false;

                mp[x]--;

                if (mp[x] == 0)
                    mp.erase(x);
            }
        }

        return true;
    }
};