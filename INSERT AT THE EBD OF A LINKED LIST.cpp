#include<iostream>
using namespace std;
int main()
{
    struct mynode
    {
        int data;
        mynode *address;
    };
    mynode *start,*temp,*node;
    int x,i;
    start=NULL;
    for(i=0;i<5;i++)
    {
        cout<<"Enter data";
        cin>>x;
        node=(mynode*) new mynode();
        node->data=x;
        node->address=NULL;
        if(start==NULL)
        {
            start=node;
        }
        else
        {
            temp=start;
            while(temp->address!=NULL)
            {
                temp=temp->address;
            }
            temp->address=node;
            
        }
            
    }
    temp=start;
    while(temp!=NULL)
    {
        cout<<temp->data;
        cout<<endl;
        temp=temp->address;
    }
    return 0;
    
}
