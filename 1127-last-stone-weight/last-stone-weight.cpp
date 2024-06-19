class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        std::priority_queue<int> pq;

        for (int i = 0; i < stones.size(); i++) 
        pq.push(stones[i]);

        while(pq.size()>1)
        {
            int temp1 = pq.top();
            pq.pop();
            int temp2=pq.top();
            pq.pop();
            if(temp1==temp2)
            continue;
            else
            {
                pq.push(abs(temp1-temp2));
            }

        }
        if (pq.size() == 0)
        return 0;
        int ans= pq.top();
        return ans;
    }

        
    
};