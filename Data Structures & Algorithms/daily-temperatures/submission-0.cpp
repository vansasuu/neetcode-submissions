class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size(); 

        vector < int > ans(n , 0);

        stack < int > stac;

        for(int i = 0 ; i < n ; i++)
        {
            while (!stac.empty() && temperatures[i] > temperatures[stac.top()])
            {
                int prvind = stac.top();
                stac.pop();
                ans[prvind] = i - prvind;
            }
            stac.push(i);
        }
        return ans;
    }
};
