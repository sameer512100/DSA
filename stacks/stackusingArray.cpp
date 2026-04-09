class myStack
{
    constructor(cap)
    {

        // array to store elements
        this.arr = new Array(cap);

        // maximum size of stack
        this.capacity = cap;

        // index of top element
        this.top = -1;
    }

    // push operation
    push(x)
    {
        if (this.top == = this.capacity - 1)
        {
            console.log("Stack Overflow");
            return;
        }
        this.arr[++this.top] = x;
    }

    // pop operation
    pop()
    {
        if (this.top == = -1)
        {
            console.log("Stack Underflow");
            return -1;
        }
        return this.arr[this.top--];
    }

    // peek (or top) operation
    peek()
    {
        if (this.top == = -1)
        {
            console.log("Stack is Empty");
            return -1;
        }
        return this.arr[this.top];
    }

    // check if stack is empty
    isEmpty()
    {
        return this.top == = -1;
    }

    // check if stack is full
    isFull()
    {
        return this.top == = this.capacity - 1;
    }
}

// Driver Code
let st = new myStack(4);

// pushing elements
st.push(1);
st.push(2);
st.push(3);
st.push(4);

// popping one element
console.log("Popped: " + st.pop());

// checking top element
console.log("Top element: " + st.peek());

// checking if stack is empty
console.log("Is stack empty: " + (st.isEmpty() ? "Yes" : "No"));

// checking if stack is full
console.log("Is stack full: " + (st.isFull() ? "Yes" : "No"));