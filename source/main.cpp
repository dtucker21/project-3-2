#include <string>
#include <iostream>
#include "Queue.h"
using std::cout;
using std::endl;

int main() {
    Queue<int> iq;
    cout << "iq Empty status: " << iq.empty() << endl;
    iq.push(1);
    cout << "iq Empty status: " << iq.empty() << endl;
    iq.push(2);
    iq.push(3);
    cout << "iq Size: " << iq.size() << endl;
    iq.push(4);
    iq.push(5);
    cout << "iq Front item: " << iq.front() << endl;
    iq.pop();
    iq.push(9);
    cout << "iq Front item: " << iq.front() << endl;
    cout << "iq Size: " << iq.size() << endl;
    Queue<int> cq;
    cout << "cq Empty status: " << cq.empty() << endl;
    cq = iq;
    cout << "cq Empty status: " << cq.empty() << endl;
    cout << "cq Front item: " << cq.front() << endl;
    cout << "iq Empty status: " << iq.empty() << endl;
    cout << "iq Front item: " << iq.front() << endl;
    cq.pop();
    cq.pop();
    cq.pop();
    cout << "cq Front item: " << cq.front() << endl;
    cout << "iq Front item: " << iq.front() << endl;
    return 0;
}