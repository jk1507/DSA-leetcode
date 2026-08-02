class Solution {
public:
    int getCost(string s, int startAt, int moveCost, int pushCost) {
        int cost = 0;
        int cur = startAt;

        for (char c : s) {
            int d = c - '0';
            if (cur != d)
                cost += moveCost;
            cost += pushCost;
            cur = d;
        }

        return cost;
    }

    int minCostSetTime(int startAt, int moveCost, int pushCost, int targetSeconds) {
        int ans = INT_MAX;

        for (int m = 0; m <= 99; m++) {
            int s = targetSeconds - m * 60;

            if (s < 0 || s > 99)
                continue;

            string str;

            if (m >= 10)
                str += to_string(m);
            else if (m > 0)
                str += char('0' + m);

            if (s >= 10)
                str += to_string(s);
            else {
                if (!str.empty())
                    str += '0';
                str += char('0' + s);
            }

            ans = min(ans, getCost(str, startAt, moveCost, pushCost));
        }

        return ans;
    }
};