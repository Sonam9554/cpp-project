#include<iostream>
#include<fstream>
using namespace std;
class manage{
	string id,name,author,search;
	fstream file;
	public:
		void addBook();
		void exBook();
		void showBook();
		
}obj;
int main(){
	
	char choice;
	cout<<"----------------------------"<<endl;
	cout<<"1. Show All Books"<<endl;
	cout<<"2. Extract Books"<<endl;
	cout<<"3. Add Books"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"----------------------------"<<endl;
	cin>>choice;
	switch(choice){
		case '1':
			cin.ignore();
			obj.showBook();
			break;
		case '2':
			cin.ignore();
			obj.exBook();
			break;
		case '3':
			cin.ignore();
			obj.addBook();
			break;
		case '4':
			return 0;
			break;
		default:
			cout<<"Invalid choice...!";
	}

}

void manage::addBook(){
	cout<<"Enter Book ID :: ";
	getline(cin,id);
	cout<<"Enter Book Name :: ";
	getline(cin,name);
	cout<<"Enter Author's Name :: ";
	getline(cin,author);
	
	file.open("bookData.txt",ios :: out | ios :: app);
	file<<id<<"*"<<name<<"*"<<author;
	file.close();
}

void manage::showBook(){
	file.open("bookData.txt",ios::in);
	getline(file,id,'*');
	getline(file,name,'*');
	getline(file,author,'\n');
		cout<<"\n\n";
		cout<<"\t\t Book ID \t\t\t Book Name \t\t\t Author's Name"<<endl;
		while(!file.eof()){
			cout<<"\t\t "<<id<<" \t\t\t "<<name<<" \t\t\t "<<author<<endl;
			getline(file,id,'*');
	        getline(file,name,'*');
			getline(file,author,'\n');
			}
	file.close();
}

void manage::exBook(){
	cout<<"Enter Book ID"<<endl;
	getline(cin,search);
	file.open("bookData.txt",ios::in);
	getline(file,id,'*');
	getline(file,name,'*');
	getline(file,author,'\n');
	cout<<"\n\n";
	cout<<"\t\t Book ID \t\t\t Book Name \t\t\t Author's Name"<<endl;
	
	while(!file.eof()){
		if(search==id){
			cout<<"\t\t"<<id<<"\t\t\t"<<name<<"\t\t\t"<<author<<endl;
			cout<<"Book Extracted Successfully...!";
		}
	getline(file,id,'*');
	getline(file,name,'*');
	getline(file,author,'\n');
	}
	file.close();
}

