class StockSpanner {
public:
    int i=-1;
    vector<int> v;
    stack<int> s;
    StockSpanner() {
        
    }
    int next(int price) {
        i++;
        int count=1, k=i-1;
        while(!s.empty() && price>=s.top() && k>=0) {
            count+=v[k];
            k-=v[k];
            s.pop();
        }
        v.push_back(count);
        s.push(price);
        return v[i];
    }
    
};