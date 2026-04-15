class KthLargest {
public:
vector<int> arr;
int k;
priority_queue<int,vector<int>,greater<int>> minh;
    KthLargest(int k, vector<int>& nums) {
        this->arr = nums;
        this->k =k;
        for(int i =0;i<arr.size();i++){
            minh.push(arr[i]);
            if(minh.size()>k){
                minh.pop();
            }
        }

        
    }
    
    void add2(int val, int k){
        minh.push(val);
        if(minh.size()>k)
        minh.pop();
    }
    int add(int val) {
        add2(val, k);
        return minh.top();
        
        
    }
};
