
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */



class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here

       struct Node * tail ;

        tail = (struct  Node *) malloc(sizeof(struct Node));

    	tail->data= x;
    	tail->next= NULL;

	    struct Node *ptr= head;
	    if(head ==NULL)
	         return tail;

	    else{
	        tail->next = head;
	        return tail;
	    }


    }


    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here

        struct Node * tail ;

        tail = (struct  Node *) malloc(sizeof(struct Node));

    	tail->data= x;
    	tail->next= NULL;

	    struct Node *ptr= head;
	    if(head ==NULL)
	         return tail;


    	while(ptr->next!=NULL){
    	    ptr = ptr->next;
    	}

    	ptr->next = tail;

    	return head;
        }

};
