#include<iostream>
#include<string>
using namespace std;

class Employes{

	private :

		int id;
		char name[100];
		char post[100];
		int salary[10];
		int exprience[10];
		char address[100];
		char maill[50];
		char contact[10];
	public :	

	void setemp(){
		cout<<"Enter Employe ID = ";
		cin>>id;
		cout<<"Enter Employe Name = ";
		cin>>name;
		cout<<"Enter Employe Post = ";
		cin>>post;
		cout<<"Enter Empoloye Salary = ";
		cin>>salary[100];
		cout<<"Enter Employe Exprience Year = ";
		cin>>exprience[100];
		cout<<"Enter Employe Address = ";
		cin>>address;
		cout<<"Enter Employe Mail ID = ";
		cin>>maill;
		cout<<"Enter Employe Contact = ";
		cin>>contact;

	}
	void getemp()
	{

		cout<<"Employe ID = "<<id<<endl
		    <<"Employe Name = "<<name<<endl
		    <<"Employe Post = "<<post<<endl
		    <<"Employe Salary = "<<salary<<endl
		    <<"Employe Exprience = "<<exprience<<endl
		    <<"Employe Address = "<<address<<endl
		    <<"Employe Mail ID = "<<maill<<endl
		    <<"Employe Contact no. = "<<contact<<endl;
	}


};
int main(){

	Employes e,e1,e2,e3,e4;

	e.setemp();
	e1.setemp();
	e2.setemp();
	e3.setemp();
	e4.setemp();

	cout<<endl<<"-----Employe Data Print-----"<<endl<<endl;

	e.getemp();
	e1.getemp();
	e2.getemp();
	e3.getemp();
	e4.getemp();


	return 0;
}
