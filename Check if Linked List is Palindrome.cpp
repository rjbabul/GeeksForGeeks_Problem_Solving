
//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:

    Node* push(Node* head, int data)
    {
        Node* newnode= NULL;
        newnode= (struct Node*)malloc(sizeof(struct Node));
        newnode->data= data;
        newnode->next = head;

        return newnode;
    }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here

        Node * reverse = NULL;

        Node *temp = head;
        while(temp)
        {
            reverse= push(reverse, temp->data);
            temp= temp->next;
        }
        bool flag= true;

        while(head)
        {
            if(head->data!= reverse->data) flag= false;
            head= head->next;
            reverse= reverse->next;
        }

        return flag;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {

        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends
