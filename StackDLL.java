class DNode {
    int data;
    DNode prev, next;

    DNode(int data) {
        this.data = data;
        this.prev = this.next = null;
    }
}

class StackDLL {
    DNode top;

    void push(int data) {
        DNode newNode = new DNode(data);

        if (top != null) {
            newNode.next = top;
            top.prev = newNode;
        }

        top = newNode;
        System.out.println(data + " inserted");
    }

    void pop() {
        if (top == null) {
            System.out.println("Stack is empty");
            return;
        }

        System.out.println(top.data + " deleted");
        top = top.next;

        if (top != null)
            top.prev = null;
    }

    void display() {
        if (top == null) {
            System.out.println("Stack is empty");
            return;
        }

        DNode temp = top;
        System.out.print("Stack: ");
        while (temp != null) {
            System.out.print(temp.data + " <-> ");
            temp = temp.next;
        }
        System.out.println("NULL");
    }

    public static void main(String[] args) {
        StackDLL s = new StackDLL();

        s.push(10);
        s.push(20);
        s.push(30);

        s.display();

        s.pop();
        s.display();
    }
}