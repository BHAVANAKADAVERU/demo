#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};

node* top=nullptr;

void push(){
      int val;
      cout<<"enter the element to push:";
      cin>>val;
      cout<<endl;
      node* new_node=new node;
      new_node->data=val;
      new_node->next=top;
      top=new_node;
      cout<<"pushed element is:"<<top->data<<endl;
}
void pop(){
    if(top==nullptr){
        cout<<"stack is empty"<<endl;
    }else{
        node* temp=top;
        cout<<"popped element is:"<<temp->data<<endl;
        top=top->next;
        delete temp;
    }
}
void peek(){
    if(top==nullptr){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"peek element is:"<<top->data<<endl;
    }
}
void display(){
    if(top==nullptr){
        cout<<"stack is empty"<<endl;
    }else{
        node* temp=top;
        cout<<"the elements of stack are:";
        while(temp!=nullptr){
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
        cout<<endl;
    }
}
int main(){
    int opt;
    cout<<"\t\t\t****welcome to stack datastructure****"<<endl;
    while(1){
        cout<<"\t\t\t\t1.push"<<endl<<"\t\t\t\t2.pop"<<endl<<"\t\t\t\t3.peek"<<endl<<"\t\t\t\t4.display"<<endl<<"\t\t\t\t5.exit"<<endl;
        cout<<"\t\t\t\tchoose the option:";
        cin>>opt;

        switch(opt){
            case 1:push();
            break;
            
            case 2:pop();
            break;

            case 3:peek();
            break;

            case 4:display();
            break;

            case 5:goto end;

            default:cout<<"enter valid option"<<endl;
        }

    }
    end:cout<<"*****end of program*****";
    return 0;
}