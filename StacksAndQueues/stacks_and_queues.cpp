#include <iostream>
#include <stack>
#include <queue>

/*
In C++, stacks and queues are data structures for containing ordered sets of data. Stacks and queues sacrifice the flexibility of vectors for more systematic interactions with the data they are holding.

Stacks are designed to operate in a Last-In-First-Out context (LIFO), where elements are inserted and extracted only from one end of the container.

The .push() function inserts a new element at the top of the stack, above its current top element:

The .pop() function removes the latest element inserted into the stack. This operation effectively reduces the size of the stack by one:

The .top() function returns a reference to the top element in the stack without removing it

 Unlike vectors, stack access is limited to the top element and cannot use index access.

 The .size() function returns the number of elements in the stack:

The .empty() function returns a boolean value of whether the stack is empty:



Queues are designed to operate in a First-In-First-Out context (FIFO), where elements are inserted into one end of the container and extracted from the other.

The .push() function inserts a new element at the end of the queue, after its current last element:

The .pop() function removes the oldest element to be inserted into the queue. This operation effectively reduces the size of the queue by one:

The .front() function returns a reference to the front (oldest) element in the queue without removing it:

The .back() function returns a reference to the back (newest) element in the queue without removing it:

Note: Unlike vectors, queue access is limited to the front and back elements.

The .size() function returns the number of elements in the queue:

The .empty() function returns a boolean value of whether the queue is empty (i.e. whether its size is 0):

*/

int main()
{
    std::stack<int> tower;

    tower.push(3);
    tower.push(2);
    tower.push(1);

    std::cout << "size: " << tower.size() << "\n";

    while (!tower.empty())
    {
        std::cout << tower.top() << "\n";
        tower.pop();
    }

    std::queue<int> order;

    order.push(10);
    order.push(9);
    order.push(8);

    std::cout << "size: " << order.size() << "\n";

    while (!order.empty())
    {
        std::cout << order.front() << "\n";
        order.pop();
    }

    return 0;
}