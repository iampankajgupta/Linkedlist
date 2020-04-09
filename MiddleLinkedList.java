	
  // ANOTHER APPROACH USING FAST AND SLOW POINTER (HARE AND TORTOISE APPROACH )
  

  // FIND THE MIDDLE ELEMENT OF LINKEDLIST () LEETCODE EASY 
  
  TIME COMPLEXITY - O(N);
  SPACE COMPLEXITY - O(1)
  
  
  
  
  public LinkedList1Node findMiddleElement(LinkedList1Node head) {
		if (head==null || head.next==null ) return head;
		
		LinkedList1Node s = head;
		LinkedList1Node f = head;
    
    
		double count = 0;
		while(s.next!=null) {
			s = s.next;
			count++;
		}
		double another = 0;
    
    // IF THE COUNT IS ODD   
    
		if (count % 2!=0) {
			another = Math.round(count/2);
		}else {
    
    // IF THE COUNT IS EVEN 
    
			another = Math.ceil((count/2));
      
		}
		while(another!=0) {
			f = f.next;
			another--;
		}
		return f;
	}
