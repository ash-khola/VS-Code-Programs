// Implement circular queue using array.

// Steps:
// Enqueue: Increament the rear pointer and assign new value to the updated rear index.
// Dequeue: Remove the element pointed by the front and increament the front pointer.
// If a dequeue operation is performed and we found that front == rear, it means that thos is the only element present in the queue so we will remove this element and assign (front = rear = -1), and (front = -1 / rear = -1) indicartres that the queue is empty.

// Using the above steps we are avoiding the use of an extra block in the array.

// Solution:


class MyCircularQueue {
public:
    int *arr;
    int front,rear, size;
    
    MyCircularQueue(int k) {        // initializing the size, front and rear pointer of the queue
        arr = new int[k];
        front=-1;
        rear=-1;
        size=k;
    }
    
    bool enQueue(int value) {         
        if(rear==front-1 or (rear==size-1 and front==0) )
            return false;
        else
        {
            if(front==-1)
            {
                rear++,front++;
                arr[rear]=value;
            }
            else if(rear==size-1)
            {
                rear=0;
                arr[rear]=value;
            }
            else
            {
                arr[++rear]=value;
            }
        }
        return true;
    }
    
    bool deQueue() {   // no need to return dequeued value, just return whether the dequeue operation is feasible or not
        if(front==-1)
            return false;
        else
        {
            if(front==rear)
            {
                front=rear=-1;
            }
            else if(front==size-1)
            {
                front=0;
            }
            else
                ++front;
        }
        return true;
    }
    
    int Front() {
        if(front==-1)
            return -1;
        else
        {
            return arr[front];
        }
    }
    
    int Rear() {
        if(front==-1)
            return -1;
        else
            return arr[rear];
    }
    
    bool isEmpty() {
        if(front==-1)
            return true;
        else
            return false;
    }
    
    bool isFull() {
        if(rear==front-1 or (rear==size-1 and front==0))
            return true;
        else
            return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */