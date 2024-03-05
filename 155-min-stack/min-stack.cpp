class MinStack {
public:
    vector <pair<int,int>>st;
    MinStack() {
        

        

        
    }
    
    void push(int val) {
        if(st.empty())
        {
        // first element so min is it
        pair <int,int> p ;
        p.first=val;
        p.second=val;
        st.push_back(p);
        }
        else
        {
           pair <int,int> p ;
           p.first = val;
           int pmin= st.back().second;
           p.second=min(pmin,val);
           st.push_back(p);

          
          
            
        }
    }

        
    
    
    void pop() {

        st.pop_back();

    }
    
    int top() {
        if(! st.empty())
        {
        pair <int,int> right_most = st.back();
        return right_most.first;
        }
        return -1;
        
        
        
    }
    
    int getMin() {
        pair <int,int> right_most = st.back();
        return right_most.second;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */