class Solution {
public:
    int rem;
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxheap;

        for(int i = 0; i < stones.size();i++){
            maxheap.push(stones[i]);
        }
        int rem,x,y;
        while(maxheap.size()>0){
            if(maxheap.size() == 1)
                return maxheap.top();
             y = maxheap.top();
            maxheap.pop();
             x = maxheap.top();
             maxheap.pop();

            rem = y > x ? y-x : 0;
            if(rem>0)
            maxheap.push(rem);

        }
        return rem;

        
    }
};
