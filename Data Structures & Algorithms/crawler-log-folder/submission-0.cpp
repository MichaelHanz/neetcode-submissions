class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> crawler;

        for(auto op : logs){
            if(op == "../"){
                if(crawler.size() != 0){
                    crawler.pop();
                }
            }
            else if(op == "./"){
                continue;
            }
            else{
                crawler.push(op);
            }
        }

        return crawler.size();
    }
};