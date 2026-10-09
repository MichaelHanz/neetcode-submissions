class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int cookieSize = 0 , cookieNum = 0;

        while(cookieNum < g.size() && cookieSize < s.size()){
            if(s[cookieSize] >= g[cookieNum]){
                cookieNum++;
            }
            else{
                cookieSize++;
            }

        }

        return cookieNum;
    }
};