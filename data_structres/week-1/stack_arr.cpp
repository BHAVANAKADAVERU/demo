#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int top=-1;
int main(){
    int stack[MAX];
    int opt;
    cout<<"\t\t\t****welcome to stack datastructure****"<<endl;
    while(1){
       cout<<"\t\t\t\t1.push"<<endl<<"\t\t\t\t2.pop"<<endl<<"\t\t\t\t3.peek"<<endl<<"\t\t\t\t4.display"<<endl<<"\t\t\t\t5.exit"<<endl;
       cout<<"\t\t\t\tchoose the option:";

       cin>>opt;

       switch(opt){
        case 1:
               if(top==MAX-1){
                cout<<"stack overflow(cannot insert more elements)"<<endl;
               }else{
                int val;
                cout<<endl<<"enter the element to push:";
                cin>>val;
                top++;
                stack[top]=val;
                cout<<"pushed element is:"<<stack[top]<<endl;
               }
               break;
        case 2:
             if(top==-1){
                cout<<"stack underflow"<<endl;
             }else{
                cout<<"popped element is:"<<stack[top]<<endl;
                top--;
             }
             break;
        case 3:
            if(top==-1){
                cout<<"stack is empty"<<endl<<"try inserting elements"<<endl;
            }else{
               cout<<"peek element of stack is:"<<stack[top]<<endl;
            }
            break;
        case 4:
            if(top==-1){
               cout<<"stack is empty"<<endl<<"try inserting elements"<<endl;
            }else{
                int temp=top;
                cout<<"stack elements are:";
                while(temp>=0){
                   cout<<stack[top]<<"\t";
                   temp--;
                }
            }
            break;
        case 5:goto end;
        default:cout<<"enter the valid element"<<endl;
        break;

       }
    }
    end:
    cout<<"\t\t*****end of the program****";
       return 0;
    
}