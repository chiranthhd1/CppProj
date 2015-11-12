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
        cout << red  << " \t\t ****************************************************************************************" << endl;
        cout << red  << " \t\t ****************************************************************************************" << endl;
    	cout << red  << " \t\t *************************"<< blue << " Welcome to Expense Manager " << red << "***********************************" << endl;
        cout << endl;
        cout << endl;
        cout << reset;
}

void Display :: top (string s)
{   
	cout << " \n\n\n" ;
        cout << blue << " \t\t Expense manager " << endl;
        cout << blue << " \t\t " << s << endl;
	cout << endl;
        cout << reset << endl;
}   

void Display :: Goback ()
{
        cout << blue << " \t\t 1. Go to Previous Menu"<< endl;
        cout << blue << " \t\t 2. Go to Main Menu"<< endl;
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
	Goback();

}

#endif
