#include<iostream>
#include<cstring>
using namespace std;

struct Detail {
union Info
{
    char email[20];
    int phone[10];
}info;
int type;
};
struct Stud
{
    int rollno;
    char name[20];
    Detail detail;//creating an object of union (Detail)inside structure
};
Stud students[200];
int totalstudents=0;;

//void load();
void addstudent();  
int searchstudent(int); 
void displaystudent();
void updatestudent();
void deletestudent();

int main()
{
    //load();
    int choice;
    do
    {
        cout<<"================= Student Management System ================\n";
        cout<<"1. Add Student\n";
        cout<<"2. Search Student\n";
        cout<<"3. Display Student\n";
        cout<<"4. Update Student\n";
        cout<<"5. Delete Student\n";
        cout<<"6. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:addstudent();
                   break;
            case 2:{
                int rollno;
                cout<<"Enter Roll Number to search: ";
                cin>>rollno;
                int index=searchstudent(rollno);
                if(index!=-1)
                   {
                    cout<<"Student found:\n";
                    cout<<"Roll Number: "<<students[index].rollno<<endl;
                    cout<<"Name: "<<students[index].name<<endl;
                    if(students[index].detail.type==1)
                    {
                        cout<<"Email: "<<students[index].detail.info.email<<endl;
                    }
                    else
                    {
                        cout<<"Phone: "<<students[index].detail.info.phone<<endl;
                    }
                   }
                else
                    cout<<"Student not found!"<<endl;
                   
                   break;

                }
            case 3:{
                   displaystudent();
                   break;
                   }
            case 4:updatestudent();
                     break;
            case 5:deletestudent();
                     break;      
            case 6:cout<<"Exiting the program."<<endl;
                   break;
            default:cout<<"Invalid choice! Please try again."<<endl; 
            }       

        } while(choice!=6);
    return 0;
 
}
 void addstudent()
 {
    Stud s;
    cout<<"Enter Roll Number: ";
    cin>>s.rollno;
    cout<<"Enter Name: ";
    cin>>s.name;
    cout<<"Enter Detail Type (1 for Email, 2 for Phone): ";
    cin>>s.detail.type;
    if(s.detail.type==1)
    {
        cout<<"Enter Email: ";
        cin>>s.detail.info.email;
    }
    else
    {
        cout<<"Enter Phone Number: ";
        for(int i=0;i<10;i++)
        {
            cin>>s.detail.info.phone[i];
        }
    }
    students[totalstudents]=s;
    totalstudents++;
    cout<<"Student added successfully!"<<endl;
 }
    int searchstudent(int rollno)
    {
        for(int i=0;i<totalstudents;i++)
        {
            if(students[i].rollno==rollno)
            {
                return i;
            }
        }
        return -1;
    }
    void displaystudent()
    {
        for(int i=0;i<totalstudents;i++)
        {
            cout<<"Roll Number:"<<students[i].rollno<<endl;
            cout<<"Name:"<<students[i].name<<endl;
            if(students[i].detail.type==1)
            {
                cout<<"Email:"<<students[i].detail.info.email<<endl;
            }
            else
            {
                cout<<"Phone Number:";
                for(int j=0;j<10;j++)
                {
                    cout<<students[i].detail.info.phone[j];
                }
                cout<<endl;
            }
        }
    }
    void updatestudent()
    {
        int rollno;
        cout<<"Enter Roll Number to update: ";
        cin>>rollno;
        int index=searchstudent(rollno);
        if(index!=-1)
        {
            cout<<"Enter new Name: ";
            cin>>students[index].name;
            cout<<"Enter new Detail Type (1 for Email, 2 for Phone): ";
            cin>>students[index].detail.type;
            if(students[index].detail.type==1)
            {
                cout<<"Enter new Email: ";
                cin>>students[index].detail.info.email;
            }
            else
            {
                cout<<"Enter new Phone Number: ";
                for(int i=0;i<10;i++)
                {
                    cin>>students[index].detail.info.phone[i];
                }
            }
            cout<<"Student updated successfully!"<<endl;
        }
        else
        {
            cout<<"Student not found!"<<endl;
        }
    }
    void deletestudent()
    {
        int rollno;
        cout<<"Enter Roll Number to delete: ";
        cin>>rollno;
        int index=searchstudent(rollno);
        if(index!=-1)
        {
            for(int i=index;i<totalstudents-1;i++)
            {
                students[i]=students[i+1];
            }
            totalstudents--;
            cout<<"Student deleted successfully!"<<endl;
        }
        else
        {
            cout<<"Student not found!"<<endl;
        }
    }
    

