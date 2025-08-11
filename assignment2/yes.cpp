#include<iostream>
#include<cstring>
using namespace std;

struct node{
    string data;
    struct node *next;
};

typedef struct node node;

class list{
    node *head;
    public:
    node getNode();
    void displayNode(node *t);
    void displayNode(string t);

    list(){
        head = NULL;
    }
    ~list(){
        //destructor to be written
    }
};

node list::getNode(){
    node *t;

    if (head == NULL)
    {
        head = t;
    }
    else{
        head = t;
        while (t->next != NULL)
        {
            t = t->next;
        }
    }
    cout<<"Enter the data : ";
    cin.ignore();
    cin>>t->data;    
}

void list::displayNode(node *t){
    cout<<endl<<t->data<<endl;
}

void list::displayNode(string t){
    node *temp;
    temp = head;
    while (strcmp(temp->data.c_str(), t.c_str())!=0)
    {
        temp = temp->next;
    }
    
    cout<<temp->data;

}
//yes this is it 