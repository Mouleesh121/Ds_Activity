class MyCircularQueue {
public:
    MyCircularQueue(int k) {   
        q.resize(k);  // we want the capacity of the vector to be k
        front=rear=size=0; // constructor initializes these values 
        capacity=k;
    }
    
    bool enQueue(int value) {
        // we need to check if the queue is already full or not
        if(size==capacity)
            return false;
        else
        {                     
          if(size==0) // the queue is empty, means front=rear=0 . Check below for further explanation *
          {
            front=0,rear=0;    // Why initialized again ? Check below **
            q[rear]=value;
            size++;
            return true;
          }
            rear=(rear+1)%capacity; 
            q[rear]=value;
            size++;
            return true;
        }
    }
    
    bool deQueue() {
        // we need to check if the queue is empty or not
        if(size==0)
            return false;
        else
        {
            front=(front+1)%capacity;  // Instead of actual deletion, overwriting at the index and variation of size is what is happening.
            size--;
            return true;          
        }
    }
    
    int Front() {
        // one line statement using ternary operators
            return isEmpty()? -1: q[front];       
    }
    
    int Rear() {          
        return isEmpty()? -1 : q[rear];
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==capacity;
    }
    
    private:
    vector<int> q;
    int rear=0,front=0,size=0;
    int capacity=0;
    
};
