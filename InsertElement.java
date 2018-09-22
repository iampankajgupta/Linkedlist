class LinkedList{
    class LinkedListNode{
        int data;
        LinkedListNode next;
        public void LinkedListNode(int number){
            data = number;
        }
    }
    static LinkedListNode root;
    public void addNode(int number){
        if (root==null){
            root = new LinkedListNode(number);
            return ;
        }
        LinkedListNode currentNode = root;
        while (currentNode.next!=null){
            currentNode = currentNode.next;
        }
        LinkedListNode newNode = new LinkedListNode(number);
        currentNode.next = newnode;
    }
    public void PrintList(){
        while(root!=null){
            System.out.println(root.data+" ");
            root = root.next;
        }
    }
    public deleteNode(int number){
        while (currentNode.next!=null)
        {
            if (currentNode.next.data==number){
                currentNode.next = currentNode.next.next;
            }
            currentNode = currentNode.next;
            }
        }
    }
    public static void main (String args[]){
        LinkedList obj = new LinkedList();
        obj.addNode(1);
        obj.addNode(2);
        obj.addNode(3);
        obj.addNode(4);
    }
}
