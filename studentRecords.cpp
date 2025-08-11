#include<iostream>
using namespace std;

struct student
{
    int rollNo, marks[5];
    float average;
    string name;
};

class studentManagement{
    struct student s[20];
    int n;

    public:
    void getData();
    void putData();
    void putData(int rno);
    void putData(float minPercentage);
    void modifyData(int rollNo);
    void modifyData();
    studentManagement(int c){
        n = c;
    }
};

void studentManagement::getData(){
    for(int i=0;i<n;i++){
        cout<<"Enter roll number : ";
        cin>>s[i].rollNo;
        cout<<"Enter name for "<<s[i].rollNo<<" : ";
        cin>>s[i].name;
        int sum = 0;
        for(int j=0;j<5;j++){
            cout<<"Enter marks for subject "<<j<<" : ";
            cin>>s[i].marks[j];
            sum += s[i].marks[j];
        }
        s[i].average = sum/5;
    }
}

void studentManagement::putData(){
    for(int i=0;i<n;i++){
        cout<<"Roll number : "<<s[i].rollNo<<"\tName : "<<s[i].name<<endl;
        for(int j=0; j<5;j++){
            cout<<"\tMarks for subject "<<j<<" : "<<s[i].marks[j]<<endl;
        }
        cout<<"average : "<<s[i].average<<endl;
    }
    return;
}

void studentManagement::putData(int rno){
    rno = rno-1;
    cout<<"Roll number : "<<s[rno].rollNo<<"\tName : "<<s[rno].name<<endl;
    for(int j=0; j<5;j++){
        cout<<"\tMarks for subject "<<j<<" : "<<s[rno].marks[j]<<endl;
    }
    cout<<"average : "<<s[rno].average<<endl;
    return;
}

void studentManagement::putData(float minPercentage){
    for(int i=0;i<n;i++){
        if(s[i].average >= minPercentage){
            cout<<"Roll number : "<<s[i].rollNo<<"\tName : "<<s[i].name;
            for(int j=0; j<5;j++){
                cout<<"\tMarks for subject "<<j<<" : "<<s[i].marks[j]<<endl;
            }
        }
    }
    return;
}

void studentManagement::modifyData(int rollNo){
    int j;
    for (j = 0; j < n; j++)
    {
        if (s[j].rollNo==rollNo)
        {
            break;
        }
        
    }
    
    cout<<endl<<"What field is to be modified for "<<rollNo<<endl<<"\t1.Name\n\t2.Marks"<<endl;
    int i;
    cin>>i;
    switch (i)
    {
    case 1:
        cout<<"Enter new name : ";
        cin>>s[j].name;
        break;
    case 2: {
        int sum = 0;
        for(int k=0;k<5;k++){
            cout<<"Enter marks for subject "<<k<<" : ";
            cin>>s[j].marks[k];
            sum += s[j].marks[k];
        }
        s[j].average = sum/5;
        break;
    }
    default:
        cout<<"INVALID OPERAION"<<endl;
        break;
    }
}

int main(){
    cout<<"How many students are in the class ? (max limit 20) : ";
    int n;
    cin>>n;
    studentManagement classS(n);
    classS.getData();
    bool isActive = true;
    while (isActive)
    {
        cout<<"Enter the operation to be performed : "<<endl<<"\t1.Print data for a Roll number\n\t2.Print names and roll numbers for scores above a certain average\n\t3.Print all data\n\t4.Modify Data for a particular roll number "<<endl<<"Operation : ";
        int opVal;
        cin>>opVal;
        switch (opVal)
        {
        case 1:
            cout<<"Enter the roll number : ";
            int rNo;
            cin>>rNo;
            classS.putData(rNo);
            break;
        case 2: 
            cout<<"Enter a minimum average : ";
            float minPerc;
            cin>>minPerc;
            classS.putData(minPerc);
            break;
        case 3:
            classS.putData();
            break;
        case 4:
            cout<<"Enter the roll number : ";
            int rNoo;
            cin>>rNoo;
            classS.modifyData(rNoo);
            break;
        default:
            break;
        }

        cout<<endl<<"Do you want to still perform an operation ? (0 for yes and anything else for no):";
        int randomVariableEEE;
        cin>>randomVariableEEE;
        if (randomVariableEEE != 0)
        {
            isActive = false;
        }
        
    }
    

    return 0;
}