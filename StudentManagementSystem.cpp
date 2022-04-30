#include<iostream>
#include<fstream>
#include<cstring>
#include<cctype>
using namespace std;

long int total=0; //global declaration to track number of student

class Student
{
	public:
		string first_name[50],last_name[50], course[50], section[50], roll_no[50], reg_no[50],cn[50];
		
	public:
		Student()	//constructor calling for login page of the program
			{
				this->index();
			}
		void index();		//function for index page
		void enter();		//function to enter data
		void show();		//function to display data
		void search();		//function to search data
		void update(); 		//function to update data
		void deletedata();	//function to delete data
		void write();		//function to perform write operation in file
		
};

//Function to add data
void Student::enter()
{
	int i,ch=0;
	cout <<"\n\n\n\t********************************\n";
        cout<<"\t\tAdd Student Data";
        cout <<"\n\t********************************\n";
	
	cout<<"\tHow many student data you want to enter\t: ";
		cin>>ch;
	if(total==0)
	{
		for( i=0;i<ch;i++)
            {
            	cout<<"\n\tEnter data of student : "<<i+1<<endl;
                
                cout<<"\n Enter the Firt Name \t\t: ";
                cin>>first_name[i];
                cout<<" Enter the Last Name 	\t: ";
                cin>>last_name[i];
                cout<<" Enter the Course \t\t: ";
                cin>>course[i];
                cout<<" Enter the Section \t\t: ";
                cin>>section[i];
                cout<<" Enter the Roll no \t\t: ";
                cin>>roll_no[i];
                cout<<" Enter the regisgtration no \t: ";
                cin>>reg_no[i];
                cout<<" Enter the contact no \t\t: ";
                cin>>cn[i];
                
            }
	}
	else
	{
		for( i=total;i<total+ch;i++)
            {
            	cout<<"\n\tEnter data of student : "<<i+1<<endl;
                
                cout<<"\nEnter the Firt Name \t\t: ";
                cin>>first_name[i];
                cout<<"Enter the Last Name 	\t: ";
                cin>>last_name[i];
                cout<<"Enter the Course \t\t: ";
                cin>>course[i];
                cout<<"Enter the Section \t\t: ";
                cin>>section[i];
                cout<<"Enter the Roll no \t\t: ";
                cin>>roll_no[i];
                cout<<"Enter the regisgtration no \t: ";
                cin>>reg_no[i];
                cout<<"Enter the contact no \t\t: ";
                cin>>cn[i];}

	}
	total+=ch;
}
//Function to display data
void Student::show()
{
		int i;
		cout <<"\n\n\n\t********************************\n";
        cout<<"\t\tShow Student Data";
        cout <<"\n\t********************************\n";
	if(total!=0)
	{
		
	for(int i=0;i<total;i++)
		{	
				
				cout<<"\n\n";
				cout<<" Student : "<<i+1;
				cout << "\n Firt Name 				: "<< first_name[i];
                cout << "\n Last Name 				: "<< last_name[i];
                cout << "\n Course    				: "<< course[i];
                cout << "\n Section   				: "<< section[i];
                cout << "\n Roll no    				: "<< roll_no[i];
                cout << "\n Regisgtration no 			: "<< reg_no[i];
                cout << "\n Contact no 			 	: "<< cn[i];
                cout<<"\n";
		}
	}
	else
	{
		cout<<"\t\t Insert some data and try again..!!\n";	
	}
	system("pause");

	
	}
//Function to search data
void Student::search()
{ 
int m=1;
	string s_roll;
		cout <<"\n\n\n\t********************************\n";
        cout<<"\t\tSearch Student Data";
        cout <<"\n\t********************************\n";

	cout<<"\tEnter roll of Student which you want to search : ";
	cin>>s_roll;
		for(int i=0;i<total;i++)
		{
			if(s_roll==roll_no[i])	
			{
				m=0;
				cout<<"\n\n";
				cout<<" Searched Data :";
				cout << "\n Firt Name 				: "<< first_name[i];
                cout << "\n Last Name 				: "<< last_name[i];
                cout << "\n Course    				: "<< course[i];
                cout << "\n Section   				: "<< section[i];
                cout << "\n Roll no    				: "<< roll_no[i];
                cout << "\n Regisgtration no 			: "<< reg_no[i];
                cout << "\n Contact no 			 	: "<< cn[i];
                cout<<"\n";
			}	
		}
			
			if(m==1){
				cout<<"\n\tInvalid Student Roll Number...Please try again !!!\n\n ";
			}
		system("pause");
}
//Function to update data
void Student::update()
{	
	int m=0;
	string s_roll;
		cout <<"\n\n\n\t********************************\n";
        cout<<"\t\tUpdate Student Data";
        cout <<"\n\t********************************\n";
	cout<<"\tEnter roll of Student which you want to update : ";
	cin>>s_roll;
		for(int i=0;i<total;i++)
		{	
			if(s_roll==roll_no[i])	
			{	m=1;
				cout<<"\tPrevious Data of Student :\n";
			
				cout << "\n Firt Name 				: "<< first_name[i];
                cout << "\n Last Name 				: "<< last_name[i];
                cout << "\n Course    				: "<< course[i];
                cout << "\n Section   				: "<< section[i];
                cout << "\n Roll no    				: "<< roll_no[i];
                cout << "\n Regisgtration no 			: "<< reg_no[i];
                cout << "\n Contact no 			 	: "<< cn[i];
                cout<<"\n";
                
				cout<<"\n\nEnter New data of student :"<<endl;
                
                cout<<"\n Enter the Firt Name \t\t: ";
                cin>>first_name[i];
                cout<<" Enter the Last Name 	\t: ";
                cin>>last_name[i];
                cout<<" Enter the Course \t\t: ";
                cin>>course[i];
                cout<<" Enter the Section \t\t: ";
                cin>>section[i];
                cout<<"Enter the Roll no \t\t: ";
                cin>>roll_no[i];
                cout<<"Enter the regisgtration no \t: ";
                cin>>reg_no[i];
                cout<<"Enter the contact no \t\t: ";
                cin>>cn[i];
                cout<<"\n\t\tStudent data successfully updated\n ";
			}
			
		}
		if(m==0)
		{
				cout<<"\n\t\tInvalid Student Roll Number...Please try again !!!\n\n ";
		}
		system("pause");
}
//Function to Delete data
void Student::deletedata()
{
	int choice;
	string s_roll;
		cout <<"\n\n\n\t********************************\n";
        cout<<"\t\tDelete Student Data";
        cout <<"\n\t********************************\n";
        cout<<"\tPress 1 to delete all records\n";
        cout<<"\tPresss 2 to delete specific record\n";
        cout<<"\tEnter Your Choice : ";
        cin>>choice;
        if(choice==1)
        {
        	total=0;
        	cout<<"\n\t\tAll records are successfully deleted... \n";
		}
		else if(choice==2)
		{
		cout<<"\n\tEnter roll of Student which you want to delete : ";
		cin>>s_roll;
		char ch='n';
		for(int i=0;i<total;i++)
		{	
			if(s_roll==roll_no[i])	
			{
				ch='y';
				for(int j=i;j<total;j++)
				{
					first_name[j] = first_name[j+1];
					last_name[j]  = last_name[j+1];
					course[j]     = course[j+1];
					section[j]    = section[j+1];
					roll_no[j]    = roll_no[j+1];
					reg_no[j]     = reg_no[j+1];
					cn[j]         = cn[j+1];
				}
			}
		}
		if(ch=='y')		//check data was deleted or not
		{
			cout<<"\n\t\tSpecific records is successfully deleted... \n ";
			total--;
		}
		else
		{
			cout<<"\n\t\tInvalid Student Roll Number...Please try again !!!\n\n ";
		}
	}
	else{
			cout<<"\n\t\tInvalid Option...Please try again !!!\n\n ";
			
		}
			system("pause");
}
//Function to write data in file
void Student::write()
{
	fstream file;
	file.open("Data.txt",ios::out | ios::in | ios::app);
		
		file<<"\n New Entry";
		for(int i=0;i<total;i++)
			{	
				file << "\n\n";
				file << " Student : "<<i+1;
				file << "\n Firt Name \t\t\t: "<< first_name[i];
                file << "\n Last Name \t\t\t: "<< last_name[i];
                file << "\n Course \t\t\t: "<< course[i];
                file << "\n Section \t\t\t: "<< section[i];
                file << "\n Roll no \t\t\t: "<< roll_no[i];
                file << "\n Regisgtration no \t: "<< reg_no[i];
                file << "\n Contact no \t\t: "<< cn[i];
                file <<"\n";      
			}
		
		file.close();
}
//Function to display index page
void Student::index()
{
	char uname[20],pass[10];
		
	system("cls");
        
       	cout <<"\n\n\n\t\t*******************************************************\n";
        cout << "\t\t    ====== STUDENT DATABASE MANAGEMENT SYSTEM ======";
        cout <<"\n\t\t*******************************************************\n";
        cout << "\n\t\t\t\t By P. Mahesh Rao ";
        cout << "\n\n\t\t\t\t    Login Page ";
        cout << "\n\t\t\t\t******************";
        cout << "\n\n \t\t\t  Username : ";		cin>>uname;
        cout << "\n \t\t\t  Password : ";			cin>>pass;
		cout <<"\n\n\n\n\t\t*******************************************************\n";
	
	if(strcmpi(uname,"Admin")!=0&&strcmpi(pass,"Admin")!=0){
		cout<<"\n\tInvalid Id or Password... Please run your Program again";
		exit(0);	
	}
}


int main()
{
	int choice;
		Student s;
	 while(1)
    {
        
	system("cls");
       	cout <<"\n\n\n\t\t*******************************************************\n";
        cout << "\t\t    ====== STUDENT DATABASE MANAGEMENT SYSTEM ======";
        cout <<"\n\t\t*******************************************************\n";
        cout << "\n\t\t\t\t By P. Mahesh Rao ";
        cout << "\n\t\t";
        cout << "\n \t\t\t 1. Add    Student  Data";
        cout << "\n \t\t\t 2. Show   Student  Data";
        cout << "\n \t\t\t 3. Search Student  Data";
        cout << "\n \t\t\t 4. Update Student  Data";
        cout << "\n \t\t\t 5. Delete Student  Data";
        cout << "\n \t\t\t 6. Exit From Program";
		cout <<"\n\n\n\n\t\t*******************************************************\n";
        cout << "\t\t\t Enter Your Choice : ";
 		cin>>choice;
		system("cls");	   
		switch(choice)
		{
			case 1:
				s.enter();
				break;
				
			case 2:
				s.show();
				break;
				
			case 3:
				s.search();
				break;
				
			case 4:
				s.update();
				break;
			
			case 5:
				s.deletedata();
				break;
				
			case 6:
				 s.write();
				 system("cls");
				 cout<<"\n\t\tTHANK YOU FOR USING OUR PROGRAM.\n";
				 system("pause");
				 exit(0);
				
			default:
				cout<<"Invalid input chose option between 1 to 6 \n";
				break;	
				
		}
	}
		
			return (0);
	
}  
