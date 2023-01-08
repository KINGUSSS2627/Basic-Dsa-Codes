// Implementation of queue using array
#include <bits/stdc++.h>
using namespace std;
class Queue
{
private:
    int size;
    int *Q;
    int front;
    int rear;

public:
    void GetSize()
    {
        cout << "Enter size of queue " << endl;
        cin >> this->size;
    }
    void SetArray(Queue *q)
    {
        q->front = q->rear = -1;
        q->Q = new int[this->size];
    }
    void enqueue(Queue *q, int x)
    {
        if (q->rear == this->size - 1)
        {
            cout << "Queue is full" << endl;
            return;
        }
        else
        {
            q->rear++;
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
            q->front++;
            x = q->Q[q->front];
            return x;
        }
    }
    void display(Queue q)
    {
        for (int i = q.front + 1; i <= q.rear; i++)
        {
            cout << q.Q[i] << " ";
        }
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