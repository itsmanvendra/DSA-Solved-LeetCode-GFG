//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

class Solution{
    
public:

    bool checkPrime(int n){
        for(int i = 2; i<=sqrt(n); i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    int prime(int n){
        int ans = n;
        int n1 = n;
        int n2 = n;
        if(n == 1){
            return 2;
        }
        while(checkPrime(n1) == false){
            n1--;
        }
        while(checkPrime(n2) == false){
            n2++;
        }
        if(abs(ans - n1) <= abs(ans-n2)){
            return n1;
        }
        else{
            return n2;
        }
    }
    Node *primeList(Node *head){
        
        Node* temp = head;
        while(temp != NULL){
            
            temp->val = prime(temp->val);
            temp = temp->next;
        }
        // cout<<prime(2)<<endl;
        return head;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head,*tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends