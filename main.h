#ifndef _MAIN_H
#define _MAIN_H

#include "attributes.h"

string Attribute:: GetUsername()
{
	return username;
}

double Attribute:: GetRent()
{
	return rent;
}

double Attribute:: GetCarLoan()
{
	return carloan;
}

double Attribute:: GetElecGas()
{
	return elecgas ;
}
double Attribute:: GetPhone()
{
	return phone;
}
double Attribute:: GetInsurance()
{
	return insurance;
}

double Attribute:: GetGroceries()
{
	return groceries;
}

double Attribute:: GetCommute()
{
	return commute;
}

double Attribute:: GetMisc()
{
	return misc;
}

string Attribute:: GetStatement()
{
	return statement;
}
double Attribute:: GetRecFlag()
{
	return rflag;
}
double Attribute:: GetThreshold()
{
	return threshold;
}



void AttributeDB:: SetUsername()
{
}

void AttributeDB:: SetRent()
{
}

void AttributeDB:: SetCarLoan()
{
}

void AttributeDB:: SetElecGas()
{
} 
void AttributeDB:: SetPhone()
{
}
void AttributeDB:: SetInsurance()
{
}

void AttributeDB:: SetGroceries()
{
}

void AttributeDB:: SetCommute()
{
}

void AttributeDB:: SetMisc()
{
}

void AttributeDB:: SetStatement()
{ 
}
void AttributeDB:: SetRecFlag()
{
}
void AttributeDB:: SetThreshold()
{
}


void Display :: welcome ()
{
	cout << " \n\n\n" ;
      
        cout << red  << " \t ****************************************************************************************" << endl;
    	cout << red  << " \t ****************************"<< blue << " Welcome to Expense Manager " << red << "********************************" << endl;

        cout << red  << " \t ****************************************************************************************" << endl;
	cout << endl;
        cout << endl;
        cout << reset;
}

void Display :: top (string s)
{   
	cout << " \n\n\n" ;
       // cout << blue << " \t\t Expense manager " << endl;
        cout << red  << " \t ****************************************************************************************" << endl;
       	cout << red  << " \t **********************i*****"<< blue << " Welcome to Expense Manager " << red << "********************************" << endl;
        cout << red  << " \t ****************************************************************************************" << endl;
  
	cout << blue << " \t (" << s <<")"<< endl;
	cout << endl;
        cout << reset << endl;
}   

void Display :: DisGoback ()
{
        cout << magenta << " \t\t 1. Go to Previous Menu"<< endl;
        cout << magenta << " \t\t 2. Go to Main Menu"<< endl;
        cout << reset << endl;
}



void Display :: dismainmenu ( string s){
        top(s);
        cout << magenta << " \t\t 1. Rent " << endl;
        cout << magenta << " \t\t 2. car loan " << endl;
        cout << magenta << " \t\t 3. Electricity and gas " << endl;
        cout << magenta << " \t\t 4. Phone " << endl;
        cout << magenta << " \t\t 5. Insurance " << endl;
        cout << magenta << " \t\t 6. Groceries " << endl;
        cout << magenta << " \t\t 7. Commute " << endl;
        cout << magenta << " \t\t 8. Miscellaneous " << endl;
}

void Display :: disrent (string s ){
	top(s);
	cout <<  magenta  << " \t\t 1. Occurs Monthly " << endl;
	cout <<  magenta  << " \t\t 2. NOn-Recursion  " << endl;

}

void Display :: disrentrec (string s){
        top(s);
        cout <<  yellow  << " \t\t Selection Confirmed" << endl<< endl;

}

int Display :: Mainmenu() {
	int g, h, i;
	char c;
	system("clear");
	dismainmenu(" Main Menu ");
	cout << yellow << " \n\t\t choose an option : ";
	cin >> h;
	if ( cin.good() == true )
	{
	system(" clear");
	do {
		switch (h)
		{
		case 1:
			MainRent();
			break;
		default:
			cout << " \n\n\n " ;
			cout << cyan << " \t\t Please provide an valid input " << endl;
			cout << cyan << " \t\t Press enter to continue " << endl;
			cin.ignore();
			cin.ignore();
			Mainmenu();
			break;
		}
	} while (!h);
	cin.ignore();
	system("clear");
	}
	else
	{
		//system("clear");
		cout << endl;
		cout << cyan << " \t\t Please enter an Integer value " << endl;
	//	cin.ignore();
	//	cin.ignore();
		cout << " \t\t Press any key to continue : " ;
		cin >> c;
		if (c)
		{
			cin.ignore();
			cin.ignore();
	       	Mainmenu();
		}
		else{
		return -1;
		}

	}


}
int Display ::  MainRent() {

	//Display a;
	int g;
	disrent(" Main Menu --> Rent ");
	cout << yellow << " \n\t\t choose an option : ";
	cin >> g;
	if ( cin.good() == false)
	{
		cout << " \t\t Please enter an integer " << endl;
		cin.ignore();
		cin.ignore();
	       	return -1;
	}
	else
	{
		system("clear");
		switch (g)
		{

		case 1:	disrentrec(" Main Menu --> Rent --> Rec ");
			DisGoback();
			RentGoback();
			break;

		case 2:
			break;

		default:
			cout << " \t\t please provide an input " << endl;
			cin.ignore();
			cin.ignore();
			system("clear");
		}
	cin.ignore();
	cout << reset;
	}
}
int Display :: RentGoback() {

	int i;
	cout << yellow << " \t\t choose an option : ";
	cin >> i;
	if ( cin.good() == false)
	{
		cout << " \t\t Please enter an integer " << endl;
		cin.ignore();
		cin.ignore();
	       	return -1;
	}
	else
	{
		system("clear");
		if (i == 1)
		{
			MainRent();
		}
		else
		{
			Mainmenu();
		}
	}
}











#endif
