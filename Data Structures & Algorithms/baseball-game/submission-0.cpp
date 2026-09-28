class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> record;
        int points = 0;
        for(const auto &op : operations){
            if(op == "C"){
                if(!(record.empty())){
                    record.pop();
                }
            }
            else if(op == "D"){
                if(!(record.empty())){
                    int x = record.top();
                    record.push(x * 2);
                }
            }
            else if(op == "+"){
                if(!(record.empty())){
                    int x = record.top();
                    record.pop();
                    int y = record.top();
                    record.push(x);
                    record.push(x + y);
                }
            }
            else{
                int x = stoi(op);
                record.push(x);
            }
        }

        while(!record.empty()){
            points += record.top();
            record.pop();
        }

        return points;
    }    
};