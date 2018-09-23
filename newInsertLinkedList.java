class LinkedList1{
    class LinkedList1Node{
        int data;
        LinkedList1Node next;
        public void LinkedList1Node(int number){
            data = number;
        }
    }
    static LinkedList1Node head;
    public void insert(int data){
        LinkedList1Node firstNode = new LinkedList1Node();
        firstNode.data = data;
        firstNode.next = null;
        if (head==null){
            head = firstNode;
            return;
        }
        LinkedList1Node currentNode = head;
        while(currentNode.next!=null){
            currentNode = currentNode.next;
        }
        currentNode.next = firstNode;
    }
    public void PrintList(){
        LinkedList1Node iterate = head;
        while(iterate.next!=null){
            System.out.println(iterate.data +" ");
            iterate = iterate.next;
        }
        System.out.println(iterate.data +" ");
    }
    public void delete (int value){
        LinkedList1Node currentNode = head;
        if (value==1){
            head = head.next;
            return ;
        }
        while(currentNode.next!=null){
            if (currentNode.next.data==value){
                currentNode.next = currentNode.next.next;
            }
            currentNode = currentNode.next;
        }
    }
    public static void main (String args[]){
        LinkedList1 obj = new LinkedList1();
        obj.insert(1);
        obj.insert(2);
        obj.insert(3);
        obj.insert(4);
        obj.delete(1);
        obj.PrintList();
    }

}
