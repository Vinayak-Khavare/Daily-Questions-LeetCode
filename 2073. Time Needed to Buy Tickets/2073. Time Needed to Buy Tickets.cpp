// Approach 1
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int timer = 0;
        int i = 0;

        while(i<tickets.size()){
            if(tickets[i]!=0){
                tickets[i]--;
                timer++;
            }

            if(tickets[k]==0)
                break;

            i++;
            if(i==tickets.size())
                i=0;
        }

        return timer;
    }
};

// Approach 2
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;

        for(int i = 0; i<tickets.size(); i++){
            if(i<=k)
                time+=min(tickets[i], tickets[k]);
            else
                time+=min(tickets[i], tickets[k]-1);
        }

        return time;
    }
};