#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // maxheap
    priority_queue<int> pq;
    pq.push(6);
    pq.push(3);
    pq.push(9);
    pq.push(1);
    pq.push(8);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    // minheap
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(6);
    minheap.push(3);
    minheap.push(9);
    minheap.push(1);
    minheap.push(8);
    cout << minheap.top() << endl;
    minheap.pop();
    cout << minheap.top() << endl;

    return 0;
}