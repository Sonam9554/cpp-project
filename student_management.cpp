#include<iostream>
#include<fstream>
using namespace std;
class manage{
	string name,rollNum,address,fname,search,he;
	fstream file;
	public:
	void addstu();
	void viewstu();
	void searchstu();
}obj;
int main(){
	char choice;
	cout<<"-------------------------"<<endl;
	cout<<"1. Add Student Details"<<endl;
	cout<<"2. View Student Details"<<endl;
	cout<<"3. Search Details"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"-------------------------"<<endl;
	cin>>choice;
	switch(choice){
		case '1':
			obj.addstu();
			break;
		case '2':
			obj.viewstu();
			break;
		case '3':
			obj.searchstu();
			break;
		case '4':
			return 0;
			break;
		default:
			cout<<"Invalid choice...!";
	}

}
void manage::addstu(){
	getline(cin,he);
	cout<<"Enter Student's Roll Number"<<endl;
	getline(cin,rollNum);
	cout<<"Enter Student's Name"<<endl;
	getline(cin,name);
	cout<<"Enter Student's Father's Name"<<endl;
	getline(cin,fname);
	cout<<"Enter Student's Address"<<endl;
	getline(cin,address);
	
	file.open("stuData.txt",ios :: out | ios :: app);
	file<<rollNum<<"*";
	file<<name<<"*";
	file<<fname<<"*";
	file<<address<<endl;
	file.close();
	
}
void manage::viewstu(){
	file.open("stuData.txt",ios::in);
	getline(file,rollNum,'*');
	getline(file,name,'*');
	getline(file,fname,'*');
	getline(file,address,'\n');
	while(!file.eof()){
		cout<<endl;
		cout<<"Student's Roll Number :: "<<rollNum<<endl;
		cout<<"Student's name :: "<<name<<endl;
		cout<<"Student's Father's Name :: "<<fname<<endl;
		cout<<"Student's Address :: "<<address<<endl;
		
	getline(file,rollNum,'*');
	getline(file,name,'*');
	getline(file,fname,'*');
	getline(file,address,'\n');
	}
	file.close();
}
void manage::searchstu(){
	getline(cin,he);
	cout<<"Enter Student's Roll Number ::";
	getline(cin,search);
	
	file.open("stuData.txt",ios::in);
	getline(file,rollNum,'*');
	getline(file,name,'*');
	getline(file,fname,'*');
	getline(file,address,'\n');
	while(!file.eof()){
		if(rollNum==search){
		cout<<endl;
		cout<<"Student's Roll Number :: "<<rollNum<<endl;
		cout<<"Student's name :: "<<name<<endl;
		cout<<"Student's Father's Name :: "<<fname<<endl;
		cout<<"Student's Address :: "<<address<<endl;
		}
	getline(file,rollNum,'*');
	getline(file,name,'*');
	getline(file,fname,'*');
	getline(file,address,'\n');
	}
}
