public class circular{
    public class  LinkedListNode{
        int data;
        LinkedListNode next;
        public void LinkedListNode (int number){
            data = number;
        }
    }
    static LinkedListNode head;
    static LinkedListNode lastNode;
    // insertion in the circular linkedlist //
    public void insert(int data){
        LinkedListNode firstNode = new LinkedListNode();
        firstNode.data = data;
        firstNode.next = null;
        if (head==null){
            head = firstNode;
            lastNode = firstNode;
            lastNode.next = head;
        }
        while(lastNode.next!=head){
            lastNode = lastNode.next;
        }
        lastNode.next = firstNode;
        firstNode.next = head;
    }
    // Print the elements in the circular linkedlist //
    public void PrintList(){
        LinkedListNode iterate = head;
        while(iterate.next!=head){
            System.out.println(iterate.data+"");
            iterate = iterate.next;
        }
        System.out.println(iterate.data+"");
    }
    // deletion at the beginning of the circular linkedList //
    public void delete(){
        LinkedListNode iterate = head;
        LinkedListNode currentNode = head;
        while(iterate.next!=head){
            iterate = iterate.next;
        }
        head = head.next;
        iterate.next = head;
    }
    // deletion at the beginning //
   /* public void delete(){
        LinkedListNode iterate = head;
        while(iterate.next.next!=head){
            iterate = iterate.next;
        }
        iterate.next= head;
    }*/
    public static void main(String args[]){
        circular obj = new circular();
        obj.insert(1);
        obj.insert(2);
        obj.insert(3);
        obj.insert(4);
        obj.delete();
        obj.PrintList();
    }
}
