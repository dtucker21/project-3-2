#include "Queue.h"

template <class T>
Queue<T>::Queue() {
    container = list<T>();
}

template <class T>
Queue<T>::Queue(const Queue& q) {
    container = Queue<T>(q.container);
}

template <class T>
Queue<T>::operator=(const Queue<T>& q) {
    container = q.container;
}

template <class T>
Queue<T>::~Queue() {
    // We aren't sure, but container will clean up after itself, yeah?
}

template <class T>
int Queue<T>::size() {
    return container.size();
}

template <class T>
void Queue<T>::push(T input) {
    container.push_back(input);
}

template <class T>
void Queue<T>::pop() {
    container.pop_front();
}

template <class T>
T& Queue<T>::front() {
    return *container.begin();
}

template <class T>
bool Queue<T>::empty() {
    if (container.size() == 0) {
        return true;
    }
    else {
        return false;
    }
}