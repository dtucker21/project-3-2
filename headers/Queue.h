#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <list>
using std::list;

template <class T>
class Queue {
    private:
        // We used a list to implement our queue
        list<T> container;
    public:
        // Desc: Default Constructor
        // Pre: None
        // Post: Empty Queue object
        Queue();

        // Desc: Copy Constructor
        // Pre: Queue object
        // Post: 2 identical but separate Queue objects
        Queue(const Queue& q);

        // Desc: Destructor
        // Pre: Queue object
        // Post: No more Queue object
        ~Queue();

        // Desc: Assignment operator overload
        // Pre: 2 Queue objects
        // Post: Deep copied identical but separate Queue objects
        operator=(const Queue& q);

        // Desc: Returns size of the Queue
        // Pre: None
        // Post: Returns number of elements in Queue
        int size();

        // Desc: Adds an item to the back of the Queue
        // Pre: Element to be added
        // Post: Queue now has that element
        void push(T input);

        // Desc: Removes the front element
        // Pre: None
        // Post: Removes front element without returning it
        void pop();

        // Desc: Looks at front element
        // Pre: None
        // Post: Returns the front object of the Queue (What will be popped next)
        T& front();

        // Desc: Checks if the Queue is empty
        // Pre: None
        // Post: Returns false (0) if an element exists in the Queue
        //       Returns true (1) if no elements are in the Queue
        bool empty();
};
#include "./Queue.cpp"
#endif