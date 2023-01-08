// Implementation of circular queue using array
#include <bits/stdc++.h>
using namespace std;
class Queue
{
private:
    int size;
    int *Q;

public:
    int front;
    int rear;
    void GetSize()
    {
        cout << "Enter size of queue " << endl;
        cin >> this->size;
    }
    void SetArray(Queue *q)
    {
        q->front = q->rear = 0;
        q->Q = new int[this->size];
    }
    void enqueue(Queue *q, int x)
    {
        if ((q->rear + 1) % q->size == q->front)
        {
            cout << "Queue is full" << endl;
            return;
        }
        else
        {
            q->rear = (q->rear + 1) % q->size;
            q->Q[q->rear] = x;
        }
    }
    int dequeue(Queue *q)
    {
        int x = -1;
        if (q->rear == q->front)
        {
            cout << "Queue is empty" << endl;
            return x;
        }
        else
        {
            q->front = (q->front + 1) % q->size;
            x = q->Q[q->front];
            return x;
        }
    }
    void display(Queue q)
    {
        int i = q.front + 1;
        do
        {
            cout << q.Q[i] << " ";
            i = (i + 1) % q.size;
        } while (i != (q.rear + 1) % q.size);
    }
};
int main()
{
    Queue q;
    q.GetSize();
    q.SetArray(&q);
    q.enqueue(&q, 1);
    q.enqueue(&q, 2);
    q.enqueue(&q, 3);
    q.enqueue(&q, 4);
    q.enqueue(&q, 5);
    q.display(q);
    cout << endl;
    q.dequeue(&q);
    q.display(q);
    return 0;
}