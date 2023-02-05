//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* inputList(int size)
{
    if (size == 0) return NULL;

    int val;
    cin >> val;

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}


// } Driver Code Ends
/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution
{
public:

    int solve(Node* temp1, Node* temp2){
        while(temp1 != NULL && temp2 != NULL && temp1->next != temp2->next ){
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            if(temp1 == NULL || temp2 == NULL){
                return -1;
            }
            else{
                temp1 = temp1->next;
                return temp1->data;
            }
    }
    int intersectPoint(Node* head1, Node* head2)
    {
        // Your Code Here
        int count1 = 0;
        int count2 = 0;
        int ans = 0;
        Node* temp = head1;
        while(temp!= NULL){
            count1 += 1;
            temp = temp->next;
        }
        temp = head2;
        while(temp != NULL){
            count2 += 1;
            temp = temp->next;
        }
        
        if(count1 >= count2){
            temp = head1;
            while(count1-count2){
                temp = temp->next;
                count1 -= 1;
            }

            ans = solve(temp, head2);
        }
        else{
            temp = head2;
            while(count2-count1){
                temp = temp->next;
                count2 -= 1;
            }
            
            ans = solve(head1, temp);
            
            
        }
        return ans;
        
    }
};



//{ Driver Code Starts.


/* Driver program to test above function*/
int main()
{
    int T, n1, n2, n3;

    cin >> T;
    while (T--)
    {
        cin >> n1 >> n2 >> n3;

        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);

        Node* temp = head1;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL) temp->next = common;

        temp = head2;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL) temp->next = common;
        
        Solution ob;
        cout << ob.intersectPoint(head1, head2) << endl;
    }
    return 0;
}


// } Driver Code Ends