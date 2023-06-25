#include <bits/stdc++.h>
using namespace std;
/*creating node class which have all the property of linked list
->linked list is the data structure which are used for storing various type of 
data like array but not neccessarily at contigious locating(similar to dynamically 
crated array).
benifts->it allows the user to store any number of data without considering about space.
time complexity of linkedlist-o(n).
*/
class node{
  /*public specifier is required to make sure that the variable under the class is accessible
  for any function outside the class 
  */
  public:
  /*data variable will store the data required to be stored in the linked list.
  (*next) is the pointer variable which will store the adress of nodes of the linked list.*/
    int data;
    node *next;
    /*here we uses paramatrized constructor to assign the value to the variable and assign the null adress to the 
    variables.*/
    node (int data){
      this->data=data;
      this->next=NULL;
    }

};

int main()
{

  //creating two nodes with data equals to 23 and 34
  node n1(23);
  node n2(34);
  cout<<"printing the data of the linked list without creating link"<<endl;
  cout<<n1.data<<"-->"<<n2.data<<endl;
  cout<<n1.next<<"   "<<n2.next<<endl;
  //creating link
  n1.next=&n2;
    cout<<"printing the data of the linked list after creating link"<<endl;
  cout<<n1.data<<"-->"<<n2.data<<endl;
  cout<<n1.next<<"   "<<n2.next<<endl;



  return 0;
}