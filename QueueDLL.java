class DNode {
    int data;
    DNode prev, next;

    DNode(int data) {
        this.data = data;
        this.prev = this.next = null;
    }
}

class QueueDLL {
    DNode front, rear;

    void enqueue(int data) {
        DNode newNode = new DNode(data);

        if (rear == null) {
            front = rear = newNode;
            System.out.println(data + " inserted");
            return;
        }

        rear.next = newNode;
        newNode.prev = rear;
        rear = newNode;

        System.out.println(data + " inserted");
    }

    void dequeue() {
        if (front == null) {
            System.out.println("Queue is empty");
            return;
        }

        System.out.println(front.data + " deleted");
        front = front.next;

        if (front != null)
            front.prev = null;
        else
            rear = null;
    }

    void display() {
        if (front == null) {
            System.out.println("Queue is empty");
            return;
        }

        DNode temp = front;
        System.out.print("Queue: ");
        while (temp != null) {
            System.out.print(temp.data + " <-> ");
            temp = temp.next;
        }
        System.out.println("NULL");
    }

    public static void main(String[] args) {
        QueueDLL q = new QueueDLL();

        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);

        q.display();

        q.dequeue();
        q.display();
    }
}