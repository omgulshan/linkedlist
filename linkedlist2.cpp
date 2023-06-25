//creating linkelist with 5 node

#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    
    node(int data){
        this->data=data;
        this->next=NULL;
    }

};
int main(){
    node n1(1);
    node n2(2);
    node n3(3);
    node n4(4);
    node n5(5);
    //creating link between data
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    n5.next=NULL;
    cout<<n1.data<<"-->"<<n2.data<<"-->"<<n3.data<<"-->"<<n4.data<<"-->"<<n5.data<<"-->"<<"Null"<<endl;
    cout<<n1.next<<"  "<<n2.next<<"  "<<n3.next<<"  "<<n4.next<<"  "<<n5.next<<endl;

    return 0;
}
