
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

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


class Solution
{
    public:
    //Function to rotate a linked list.

    Node* push(Node* head, int data)
    {
        Node* newnode = NULL;
        newnode= (struct Node*)malloc(sizeof(struct Node));

        newnode->data= data;
        newnode->next=NULL;

        if(head==NULL) return newnode;

        Node* temp= head;
        while(temp->next)
        {
            temp= temp->next;
        }
        temp->next = newnode;


        return head;
    }

    Node* rotate(Node* head, int k)
    {
        // Your code here

        Node* temp= head;

        Node* newnode =NULL ;


        for(int i=1;i<=k;i++)
        {

            newnode= push(newnode, temp->data);
            temp=temp->next;

        }

       while(head->next) head= head->next;
       head->next= newnode;
        if(!temp) return newnode;
        return temp;
    }
};



//{ Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;

        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;

        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }

        cin>> k;

        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends
