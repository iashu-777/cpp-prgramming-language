    #include<iostream>
    using namespace std;
    struct Node{
        int data;
        Node *next;
        Node(int x)
        {
            data=x;
            next=NULL;
        } 
    };
    Node *insert_begin(Node *head1,int x){
        Node *n=new Node(x);
        n->next=head1;
        return n;
        
    }
    void printlist(Node *head){
        while (head!=NULL)
        {
            cout<<head->data<<"->";
            head=head->next;
        }
        cout<<"NULL"<<endl;
    }
    int main(){
        int n1,n2,n3,n4;
        cin>>n1;
        cin>>n2;
        cin>>n3;
        cin>>n4;
        
        Node *head=NULL;
        head=insert_begin(head,n1);
        head=insert_begin(head,n2);
        head=insert_begin(head,n3);
        head=insert_begin(head,n4);
        printlist(head);
    return 0;
    }