class MedianFinder {
public:
    vector<double> v1;
    int num;
    MedianFinder() {
        this->num = num;
        
    }
    
    void addNum(int num) {
        v1.push_back(num);
        
    }
    
    double findMedian() {
        sort(v1.begin(), v1.end());
        int size = v1.size();

        if(size % 2 == 0){
            //even hai
            int k =size/2;
            double ans = (v1[k]+v1[k-1])/2;
            return ans;
        }
        else 
        return v1[(size/2)];
        
    }
};
