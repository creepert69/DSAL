//23303
//assignment 3
#include<iostream>
#include<cstring>
using namespace std;


//structure to store data 
struct element{
    int data;
    struct element *next;
};

typedef struct element element;

//class to create a stack 
class stack{
    private:
    //top of the stack
    element *top;

    public:
    element *getElement(int data);
    void mPush(element *temp);
    int mPop();
    int mPeep();
    void mInitialize();

    stack(){
        //constructor initializes the top and runs the initialize function
        top = NULL;
        mInitialize();
    }
};

//creates an element for the stack
element* stack::getElement(int data){
    //declaring a temp element
    element *temp;
    temp = new(element);
    //assigning values to temp element
    temp->data = data;
    temp->next = NULL;
    
    return temp;
}

//pushes an element into the stack
void stack::mPush(element *temp){
    //since get element returns null if there is no space left
    if(temp == NULL){
        cout<<endl<<"LIST IS FULL!!!"<<endl;
        return; 
    }
    //checking if top is null
    if(top == NULL){
        top = temp;
    }
    else{
        temp->next = top;
        top = temp;
    }
}

//initializing list, used in constructor
void stack::mInitialize(){
    int continueChecker = 0;
    while(continueChecker == 0){
        cout<<"enter integer that will enter the stack : ";
        int x;
        cin>>x;
        mPush(getElement(x));
        cout<<"enter 0 to continue, any other integer to end : ";
        cin>>continueChecker;
        cout<<endl;
    }
}

//returns the top of the stack
int stack::mPeep(){
    cout<<top->data<<endl;
    return top->data;
}

//pops the data from the top of the stack and pops and returns it
int stack::mPop(){
    cout<<"Popped data : "<<top->data<<endl;
    element *temp = new(element);
    temp = top;
    int x;
    x = temp->data;
    top = temp->next;
    delete temp;
    cout<<"Popped data cleared from memory"<<endl;
    return x;
}

int main(){
    //obj created, constructor called
    stack q;
    
    //while loop for continued operation
    int continueChecker = 0;
    while(continueChecker == 0){
        cout<<"--------------------------------------------STACK MENU--------------------------------------------"<<endl;
        cout<<"Operations : \n\t1.Push data\n\t2.Pop data\n\t3.Peep data"<<endl;
        cout<<"Enter operation : ";
        int operation;
        cin>>operation;

        //switch case for operations
        switch (operation)
        {
        case 1:
            cout<<endl<<"Enter Data : ";
            int x;
            cin>>x;
            //get element returns type element which is accepted by mPush fn 
            q.mPush(q.getElement(x));
            cout<<endl;
            cout<<"Data entered."<<endl;
            break;
        case 2: 
            q.mPop();
            break;
        case 3:
            q.mPeep();
            break;
        default:
            cout<<"INVALID ENTRY!!!"<<endl;
            break;
        }
        

        cout<<"enter 0 to continue, any other integer to end : ";
        cin>>continueChecker;
        cout<<endl;
    }
}