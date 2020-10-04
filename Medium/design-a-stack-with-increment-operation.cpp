// Problem: https://leetcode.com/problems/design-a-stack-with-increment-operation/

class CustomStack {
public:
    int cur, mx;
    int v[1005];
    
    CustomStack(int maxSize) {
        mx = maxSize;
        cur = 0;
    }
    
    void push(int x) {
        
        if (cur == mx) {
            return;
        }
        
        v[cur] = x;
        cur++;
    }
    
    int pop() {
        
        if(cur == 0) {
            return -1;
        }
        
        int ret = v[cur-1];
        
        cur--;
        
        return ret;
    }
    
    void increment(int k, int val) {
        for(int i=0 ; i<min(cur,k) ; i++) {
            v[i] += val;
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
