class CQueue {
public:
    stack<int> stack1;
    stack<int> stack2;

    CQueue() {
    }
    
    void appendTail(int value) {
        stack1.push(value);
    }
    
    int deleteHead() {
        if (stack1.empty()) return -1;
        
        while (!stack1.empty()){ // 1 -> 2
            stack2.push(stack1.top());
            stack1.pop();
        }
        // delete head
        int res = stack2.top();
        stack2.pop();
        while (!stack2.empty()){ // 1 <- 2
            stack1.push(stack2.top());
            stack2.pop();
        }
        return res;
    }
};