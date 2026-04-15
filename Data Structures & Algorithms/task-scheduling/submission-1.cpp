class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int time=0;

        //declare a vector with frequency to store the occurencs of the alphabets
        unordered_map<char,int> mp;

        for(int i =0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        // now I have the frequencies now create the priority queue by default max heap
        priority_queue<int> pq;

        for(auto it: mp){
            pq.push(it.second);
        }
        //priority quee has been created now

        while(!pq.empty()){
            vector<int> temp;
            for(int i =0;i<=n;i++){
                
                if(!pq.empty()){
                    int freq = pq.top();
                    pq.pop();
                    freq--;
                    temp.push_back(freq);
                }
            }
            //till here we have that we repushed into the priorty queue

            for(int i =0;i < temp.size();i++){
                if(temp[i]>0){
                    pq.push(temp[i]);
                }
            }

            if(pq.empty()){
                time+= temp.size();
            }
            else{
                time+=n+1;
            }
        }

        return time;
}
        
    
};
