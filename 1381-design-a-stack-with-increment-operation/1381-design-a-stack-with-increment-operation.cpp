class CustomStack {
private:
    int size = 0;
    vector<int> s;
    int totalElements = 0;
    
public:
    CustomStack(int maxSize) {
        size = maxSize;
    }
    
    void push(int x) {
        if(totalElements != size)
        {
            s.push_back(x);
            totalElements++;
        }
    }
    
    int pop() {
        int n = s.size();
        
        int ans = 0;
        if(n != 0)
        {
            ans = s[n-1];
        }
        else
        {
            return -1;
        }
        
        s.pop_back();
        
        totalElements--;
        return ans;
        
    }
    
    void increment(int k, int val) {
        int i = 0;
        
        for(i = 0; i < s.size() && k > 0; i++)
        {
            s[i] = s[i] + val;
            k--;
        }
        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */