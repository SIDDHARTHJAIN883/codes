#include<iostream>
using namespace std;
int main()
{
    struct mynode
    {
        int data;
        mynode *address;
    };
    int entries,i,dataa;
    mynode *start,*node,*temp;
    cout<<"Enter number of nodes to be inserted";
    cin>>entries;
    cout<<endl;
    start=NULL;
    for(i=0;i<entries;i++)
    {
        cout<<"Enter "<<i<<" element";
        cin>>dataa;
        cout<<endl;
        node=(mynode*) new mynode();
        node->data=dataa;
        node->address=NULL;
        if(start==NULL)
        {
            start=node;
        }
        else
        {
            node->address=start;
            start=node;
        }
       
        
    }
    // traversal and cout
    
    temp=start;
    while(temp!=NULL)
    {
        cout<<temp->data;
        cout<<endl;
        temp=temp->address;
    }
    return 0;
}
