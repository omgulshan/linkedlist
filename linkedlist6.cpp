#include <bits/stdc++.h>
using namespace std;
class node {
    public:
 int data;
 node *next;
 node(int data){
    this->data=data;
    this->next=NULL;
 }

};
void print(node *head){
    while (head!=NULL)
    {
       cout<<head->data<<"->";
       head=head->next;
    }
    cout<<"Null"<<endl;
    
}
node* takeInput(){
   int data;
   cin>>data;
   node *head = NULL;  
   node *tail = NULL;   
     
   while(data != -1){
    /// creating LL
    node *n = new node(data);
    /// 1st node
    if(head == NULL){
        head = n;
        tail = n;
    }else {
        tail -> next = n;   /// Inserting at Tail
        tail = n;
    }

    cin>>data;
   }
   return head;

}
int countlinkedlist(node *head){
    int count=0;
    while (head!=NULL)
    {
        count++;
        head=head->next;
    }
    return count;
    
}
void print_linked_list(node *head,int i){
    int n=countlinkedlist(head);
    if (i<0 && i>n-1){
        cout<<"-1"<<endl;
        return;
    }
    int count=1;
    while (count<=i)
    {
       head=head->next;
       count++;
    }
    cout<<head->data<<endl;
    
}
void print_linked_list1(node *head,int i){
    
    if (i<0 && head){
        cout<<"-1"<<endl;
        return;
    }
    int count=1;
    while (count<=i)
    {
       head=head->next;
       count++;
    }
    cout<<head->data<<endl;
    
}
int main(){
     node *head = takeInput();
     int i;
     cout<<"please enter the index which are required to be printed:"<<endl;
     cin>>i;
     print_linked_list(head,i);
     print_linked_list1(head,i);
    // cout<<"The length of the linked list is :"<<countlinkedlist(head)<<endl;
  return 0;
}
