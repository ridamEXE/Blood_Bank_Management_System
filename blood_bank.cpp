#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
class blood_bank
{
public:
    static int bloodgroup[8];
    
};
int blood_bank::bloodgroup[]={0,0,0,0,0,0,0,0};

class admin
{
    
public:
    
    void display();
    
    admin()
    {
        char s[20]="ridam";
        char str[20];
        cout<<"\t\t\tEnter Password: ";
        cin>>str;
        if(strcmp(s,str)==0){
            cout<<"\t\t\t  ~:Welcome Ridam:~"<<endl;
            display();
        }
        else
            cout<<"Please contact Ridam to become an admin"<<endl;
        
    }
};
// A, O+, B+, AB+, A-, O-, B-, AB-

void admin::display()
{
    cout<<"\nCurrently available Blood types:- "<<endl;
    cout<<"\tA +ve:"<<blood_bank::bloodgroup[0]<<endl;
    cout<<"\tO +ve:"<<blood_bank::bloodgroup[1]<<endl;
    cout<<"\tB +ve:"<<blood_bank::bloodgroup[2]<<endl;
    cout<<"\tAB +ve:"<<blood_bank::bloodgroup[3]<<endl;
    
    cout<<"\tA -ve:"<<blood_bank::bloodgroup[4]<<endl;
    cout<<"\tO -ve:"<<blood_bank::bloodgroup[5]<<endl;
    cout<<"\tB -ve:"<<blood_bank::bloodgroup[6]<<endl;
    cout<<"\tAB -ve:"<<blood_bank::bloodgroup[7]<<endl;
}

class patient
{
    char name[50];
    char blood_group[20];
    
    
public:
    
    int save();
    void show(int);
    
};
// A+, O+, B+, AB+, A-, O-, B-, AB-

int patient::save()
{
    int c,n;
    
    cout<<"Enter your name: ";
    cin>>name;
    
    cout<<"Enter type of blood group you are looking for: "<<endl;
    
    cout<<"\t0) A+"<<endl<<"\t1) O+"<<endl<<"\t2) B+"<<endl<<
    "\t3) AB+"<<endl<<"\t4) A-"<<endl<<"\t5) O-"<<endl<<"\t6) B-"<<endl<<"\t7) AB-"<<endl<<"--> ";
    
    
    cin>>c;
    
    cout<<"You will be donated with 1 blood packet."<<endl<<"Please login again to get 1 more blood packet."<<endl;
    
    show(c);
    return 0;
}

void patient::show(int c)
{
    cout<<"Available blood groups which are compatible with the entered blood group:-"<<endl;

    if(c==0)
    {
        cout<<"\tA +ve: "<<blood_bank::bloodgroup[0]<<endl;
        cout<<"\tA -ve: "<<blood_bank::bloodgroup[4]<<endl;
        cout<<"\tO +ve: "<<blood_bank::bloodgroup[1]<<endl;
        cout<<"\tO -ve: "<<blood_bank::bloodgroup[5]<<endl;
        
        if(blood_bank::bloodgroup[0]>0)
            blood_bank::bloodgroup[0]--;
        else if(blood_bank::bloodgroup[4]>0)
            blood_bank::bloodgroup[4]--;
        else if(blood_bank::bloodgroup[1]>0)
            blood_bank::bloodgroup[2]--;
        else if(blood_bank::bloodgroup[5]>0)
            blood_bank::bloodgroup[6]--;
        else
            cout<<"Compatible blood group not available.\n";
        system("pause");
        
    }
    
    else if(c==1)
    {
        cout<<"\tO +ve:"<<blood_bank::bloodgroup[1]<<endl;
        cout<<"\tO -ve:"<<blood_bank::bloodgroup[5]<<endl;
        
        
        if(blood_bank::bloodgroup[1]>0)
            blood_bank::bloodgroup[1]--;
        else if(blood_bank::bloodgroup[5]>0)
            blood_bank::bloodgroup[5]--;
        else
            cout<<"Compatible blood group not available.\n";
        system("pause");
        
    }
    
    else if (c==2)
    {
        cout<<"\tB +ve:"<<blood_bank::bloodgroup[2]<<endl;
        cout<<"\tB -ve:"<<blood_bank::bloodgroup[6]<<endl;
        cout<<"\tO +ve:"<<blood_bank::bloodgroup[1]<<endl;
        cout<<"\tO -ve:"<<blood_bank::bloodgroup[5]<<endl;
        
        if(blood_bank::bloodgroup[2]>0)
            blood_bank::bloodgroup[2]--;
        else if(blood_bank::bloodgroup[6]>0)
            blood_bank::bloodgroup[6]--;
        
        else if(blood_bank::bloodgroup[1]>0)
            blood_bank::bloodgroup[1]--;
        else if(blood_bank::bloodgroup[5]>0)
            blood_bank::bloodgroup[5]--;
        else
            cout<<"Compatible blood group not available.\n";
        system("pause");

    }
    
    else if (c==3)
    {
        cout<<"\tA +ve:"<<blood_bank::bloodgroup[0]<<endl;
        cout<<"\tA -ve:"<<blood_bank::bloodgroup[4]<<endl;
        cout<<"\tB +ve:"<<blood_bank::bloodgroup[2]<<endl;
        cout<<"\tB -ve:"<<blood_bank::bloodgroup[6]<<endl;
        cout<<"\tAB +ve:"<<blood_bank::bloodgroup[3]<<endl;
        cout<<"\tAB -ve:"<<blood_bank::bloodgroup[7]<<endl;
        cout<<"\tO +ve:"<<blood_bank::bloodgroup[1]<<endl;
        cout<<"\tO -ve:"<<blood_bank::bloodgroup[5]<<endl;
        
        if(blood_bank::bloodgroup[0]>0)
            blood_bank::bloodgroup[0]--;
        else if(blood_bank::bloodgroup[4]>0)
            blood_bank::bloodgroup[4]--;
        else if(blood_bank::bloodgroup[2]>0)
            blood_bank::bloodgroup[2]--;
        else if(blood_bank::bloodgroup[6]>0)
            blood_bank::bloodgroup[6]--;
        else if(blood_bank::bloodgroup[3]>0)
            blood_bank::bloodgroup[3]--;
        else if(blood_bank::bloodgroup[7]>0)
            blood_bank::bloodgroup[7]--;
        else if(blood_bank::bloodgroup[1]>0)
            blood_bank::bloodgroup[1]--;
        else if(blood_bank::bloodgroup[5]>0)
            blood_bank::bloodgroup[5]--;
        else
            cout<<"Compatible blood group not available.\n";
        system("pause");
        
    }
    else if (c==4)
    {
        cout<<"\tA -ve:"<<blood_bank::bloodgroup[4]<<endl;
        cout<<"\tO -ve:"<<blood_bank::bloodgroup[5]<<endl;
        
        if(blood_bank::bloodgroup[4]>0)
            blood_bank::bloodgroup[4]--;
        
        else if(blood_bank::bloodgroup[5]>0)
            blood_bank::bloodgroup[5]--;
        
        else
            cout<<"Compatible blood group not available.\n";
        system("pause");

    }
    
    else if (c==5)
    {
        cout<<"\tB -ve:"<<blood_bank::bloodgroup[6]<<endl;
        cout<<"\tO -ve:"<<blood_bank::bloodgroup[5]<<endl;
        
        if(blood_bank::bloodgroup[6]>0)
            blood_bank::bloodgroup[6]--;
        else if(blood_bank::bloodgroup[5]>0)
            blood_bank::bloodgroup[5]--;
        else
            cout<<"Compatible blood group not available.\n";
        system("pause");

        
    }
    
    else if (c==6)
    {
        cout<<"\tA +ve:"<<blood_bank::bloodgroup[0]<<endl;
        cout<<"\tA -ve:"<<blood_bank::bloodgroup[4]<<endl;
        cout<<"\tB +ve:"<<blood_bank::bloodgroup[2]<<endl;
        cout<<"\tB -ve:"<<blood_bank::bloodgroup[6]<<endl;
        cout<<"\tAB +ve:"<<blood_bank::bloodgroup[3]<<endl;
        cout<<"\tAB -ve:"<<blood_bank::bloodgroup[7]<<endl;
        cout<<"\tO +ve:"<<blood_bank::bloodgroup[1]<<endl;
        cout<<"\tO -ve:"<<blood_bank::bloodgroup[5]<<endl;
        
        
        if(blood_bank::bloodgroup[0]>0)
            blood_bank::bloodgroup[0]--;
        else if(blood_bank::bloodgroup[4]>0)
            blood_bank::bloodgroup[4]--;
        else if(blood_bank::bloodgroup[2]>0)
            blood_bank::bloodgroup[2]--;
        else if(blood_bank::bloodgroup[6]>0)
            blood_bank::bloodgroup[6]--;
        else if(blood_bank::bloodgroup[3]>0)
            blood_bank::bloodgroup[3]--;
        else if(blood_bank::bloodgroup[7]!=0)
            blood_bank::bloodgroup[7]--;
        else if(blood_bank::bloodgroup[1]>0)
            blood_bank::bloodgroup[1]--;
        else if(blood_bank::bloodgroup[5]>0)
            blood_bank::bloodgroup[5]--;
        else
            cout<<"Compatible blood group not available.\n";
        system("pause");

    }
    
    else if(c==7)
    {
        cout<<"\tA -ve:"<<blood_bank::bloodgroup[4]<<endl;
        cout<<"\tB -ve:"<<blood_bank::bloodgroup[6]<<endl;
        cout<<"\tO -ve:"<<blood_bank::bloodgroup[5]<<endl;
        cout<<"\tAB -ve:"<<blood_bank::bloodgroup[7]<<endl;
        
        
        if(blood_bank::bloodgroup[4]>0)
            blood_bank::bloodgroup[4]--;
        
        else if(blood_bank::bloodgroup[6]>0)
            blood_bank::bloodgroup[6]--;
        
        else if(blood_bank::bloodgroup[5]>0)
            blood_bank::bloodgroup[5]--;
        
        else if(blood_bank::bloodgroup[7]>0)
            blood_bank::bloodgroup[7]--;
        else
            cout<<"Compatible blood group not available.\n";
        system("pause");
        
        
    }
    
    
}

class donor
{
    char name[50];
    char sex[15];
    
    struct date
    {
        int day;
        int month;
        int year;
    }date;
    
    char blood_group[20];
    //DONOR DETAILS
    int phone_no[15];
public:
    
    int save();
    int display();
    
    int x,c;
    
    
};


int donor::save()
{
    cout<<"Enter your Name: ";
    cin>>name;
    
    cout<<"Enter your Gender: ";
    cin>>sex;
    
    cout<<"Enter date(DD MM YY): ";
    cin>>date.day;
    cin>>date.month;
    cin>>date.year;
    
    
    // A, O+, B+, AB+, A-, O-, B-, AB-
    
    cout<<"Enter type of blood group you are donating:"<<endl;
    
    cout<<"\t0) A+"<<endl<<"\t1) O+"<<endl<<"\t2) B+"<<endl<<
    "\t3) AB+"<<endl<<"\t4) A-"<<endl<<"\t5) O-"<<endl<<"\t6) B-"<<endl<<"\t7) AB-"<<endl<<"--> ";
    
    cin>>c;
    
    cout<<"How many packets of blood are you donating: ";
    cin>>x;
    
    blood_bank::bloodgroup[c]+=x;
    char ch;
    cout<<"Do you want your information to be displayed now(Y/N): ";
    cin>>ch;
    
    if(ch=='Y'||ch=='y')
        donor::display();
    return 0;
}


int donor::display()
{
    cout<<"\nDoner Information:-\n";
    cout<<"\tName: ";
    cout<<name<<endl;
    
    cout<<"\tDate(DD MM YY): ";
    cout<<date.day<<" ";
    cout<<date.month<<" ";
    cout<<date.year<<endl;
    
    cout<<"\tBlood group: ";
    
    switch(c)
    {
            // A, O+, B+, AB+, A-, O-, B-, AB-
        case 0:
            cout<<"A+"<<endl;
            break;
        case 1:
            cout<<"O+"<<endl;
            break;
        case 2:
            cout<<"B+"<<endl;
            break;
        case 3:
            cout<<"AB+"<<endl;
            break;
        case 4:
            cout<<"A-"<<endl;
            break;
        case 5:
            cout<<"O-"<<endl;
            break;
        case 6:
            cout<<"B-"<<endl;
            break;
        case 7:
            cout<<"AB-"<<endl;
    }
    
    cout<<"\tPackets of blood: "<<x<<endl;
    return 0;
}

int main()
{
    system("cls");
    int i=0,j=0;
    donor a[100];
    patient b[50];
    
    int c=0;
    cout<<"\n\n\t\t|| Welcome to the Blood Bank Management System ||\n\n";
    while(c!=4)
    {
        
        cout<<"\nEnter choice:";
        cout<<"\n\t1) If you are the Admin\n\t2) If you are a Donor\n\t3) If you are a Patient\n\t4) If you want to exit:\n--> ";
        cin>>c;
        switch(c)
        {
                
                
            case 4:
                break;
                
            case 1:
            {
                admin t;
                char c;
                break;
            }
                
            case 2:
            {
                int k=1;
                static int i=0;
                cout<<"\n\t\tWelcome Donor\n";
                // getch();
                // system("pause");
                // cout<<"Please enter 1 if you want to enter your information:";
                // cin>>k;
                if(k==1)
                    a[i++].save();
                else if (k==2)
                    a[i].display();
                
                break;
            }
                
            case 3:
            {
                static int i=0;
                cout<<"\t\tWelcome Patient"<<endl;
                b[i++].save();
                break;
            }
        }
    }
    return 0;
}