// Authors Chiranth , Prasad , Sanjan
#ifndef _MAIN2_H
#define _MAIN2_H

#include "attributes.h"

int Auth::Usepwdcheck()
{
//handling exception if password lenght and username lenght is less than 6 and 4 respectively also if not matched.
        int maxchar = 10;
	int f=3;
	while (f > 0){
        try {
        	cout << green << " \t\t Enter Username :";
        	cin >> username;
        	if ( username.length() < 4)
        	{
                	throw "ERROR";
		}
 		else if (username != USERNAME)
        	{
                	throw 1.5;
        	}

 		else {

			cout << green << " \t\t Enter Password : ";
        		cin >> password;
			if ( password.length() < 4)
        		{
                		throw "ERROR";
        		}

			else if (password != PASSWORD) 
			{
                		throw -1;

        		}

        		else {
                		return 0;
	     		     }
		}

        	if ( username.length() > maxchar || password.length() > maxchar)
        	{
                	throw 12;
        	}
        }

        	catch(const char* Message)
        	{
			cout << red <<  " \t\t Incorrect!! (username and password should be more than 4): " << endl;
        	}
        	catch(const int p)
        	{
                	cout << " Entered Value is too long "<< endl;
        	}
		catch(const double v)
        	{
			cout << red <<  " \t\t  Incorrect Username " << endl;
        	}
		catch(signed int m)
        	{
			cout << red <<  " \t\t  Incorrect Password" << endl;
        	}
		
		f--;
			cout <<  green << " \t\t you have " << f << "trie(s) left " << endl;
		}
		cin.ignore();
		return 1;
}


int Auth::Maincheck()
{
	a = Usepwdcheck();
	if (a == 0) {
		return 0;
	}
	else
	{
		return 1;

	}


}



string Attribute::GetUsername()
{
	return username;
}

double Attribute::GetT(int a, int b)
{
	GotoLine(a);
	infile >> rent;
	infile >> carloan;
	infile >> elecgas;
	infile >> phone;
	infile >> insurance;
	infile >> groceries;
	infile >> commute;
	infile >> misc;
	infile >> rflag;
	infile >> threshold;
	switch (b)
	{
	case 1:
		return rent;

	case 2:
		return carloan;
		break;
	case 3:
		return elecgas;
		break;

	case 4:
		return phone;
		break;

	case 5:
		return insurance;
		break;

	case 6:
		return groceries;
		break;

	case 7:
		return commute;
		break;

	case 8:
		return misc;
		break;
		/*	case 9:
		return rent;
		break;

		case 10:
		return rent;
		break;

		*/	default:
			cout << "try again " << endl;
			break;
	}
}

int Attribute::GetMonth()
{
	Display d;
	string mon;
	cout << magenta << " \t\t Please enter the month(eg: january or jan) : ";
	cin.ignore();
	getline(cin, mon);
	//cin >> month;

	if (mon == "jan" || mon == "january" || mon == "feb" || mon == "february" || mon == "mar" || mon == "march" || mon == "apr" || mon == "april" || mon == "may" || mon == "jun" || mon == "june" || mon == "jul" || mon == "july" || mon == "aug" || mon == "august" || mon == "sep" || mon == "september" || mon == "oct" || mon == "october" || mon == "nov" || mon == "november" || mon == "dec" || mon == "decembe") {
		while (cin.good() == true)
		{

			map < string, int > month;
			month["jan"] = 1;
			month["january"] = 1;

			month["feb"] = 2;
			month["february"] = 2;

			month["mar"] = 3;
			month["march"] = 3;

			month["apr"] = 4;
			month["april"] = 4;

			month["may"] = 5;

			month["jun"] = 6;
			month["june"] = 6;

			month["jul"] = 7;
			month["july"] = 7;

			month["aug"] = 8;
			month["august"] = 8;

			month["sep"] = 9;
			month["september"] = 9;

			month["oct"] = 10;
			month["october"] = 10;

			month["nov"] = 11;
			month["november"] = 11;

			month["dec"] = 12;
			month["december"] = 12;


			return month[mon];
		}
	}
	else
	{
		cout << " Please Try again " << endl;
		d.Mainmenu();
	}

}


//void Attribute::SetUsername()
//{

//}
void Attribute::SetRent(int a)
{
	//cout << "a" << a << endl;
	//Attribute c;
	//GotoLine(a);
	//ofile.open("xman.txt");
	//ofile << renta;
	/*	infile << carloan;
	infile << elecgas;
	infile << phone;
	infile << insurance;
	infile << groceries;
	infile << commute;
	infile << misc;
	infile << rflag;
	infile << threshold;
	*/
	//	return //rent = a;
}
double Attribute::Cal(int a)
{
	Display d;
	double r, y;
	int month;
	month = GetMonth();
	cout << magenta << " \t\t Existing value is : " << GetT(month, a) << endl;
	cout << red << " \t\t Please enter the new value :";
	cin >> r;
	cout << endl << endl;
	cout << magenta << " \t\t 1.Yes " << endl;
	cout << magenta << " \t\t 2.No " << endl << yellow;

	cout << red << " \t\t Please confirm :";
	cin >> y;
	cout << endl;
	if (y == 1)
	{
		switch (a)
		{
		case 1:
			SetRent(r);
			cout << yellow << " \t\t Selection Confirmed" << endl << endl;
			return 0;


		case 2:
			SetCarLoan(r);
			cout << yellow << " \t\t Selection Confirmed" << endl << endl;
			return 0;
		case 3:
			SetCarLoan(r);
			cout << yellow << " \t\t Selection Confirmed" << endl << endl;
			return 0;

		case 4:
			SetPhone(r);
			cout << yellow << " \t\t Selection Confirmed" << endl << endl;
			return 0;

		case 5:
			SetInsurance(r);
			cout << yellow << " \t\t Selection Confirmed" << endl << endl;
			return 0;

		case 6:
			SetGroceries(r);
			cout << yellow << " \t\t Selection Confirmed" << endl << endl;
			return 0;
		case 7:
			SetCommute(r);
			cout << yellow << " \t\t Selection Confirmed" << endl << endl;
			return 0;


		}
	}
	else
	{
		return 1;

	}
}

double Attribute::SetCarLoan(int a)
{
	cout << "a" << a << endl;
	carloan = a;
}
double Attribute::SetInsurance(int a)
{
	cout << "\t a" << a << endl;
	insurance = a;
}

double Attribute::SetElecGas(int a)
{
	cout << "\t a" << a << endl;
	elecgas = a;

}
double Attribute::SetPhone(int a)
{
	cout << "\t a" << a << endl;
	phone = a;

}

double Attribute::SetGroceries(int a)
{
	cout << "\t a" << a << endl;
	groceries = a;
}

double Attribute::SetCommute(int a)
{
	cout << "\t a" << a << endl;
	groceries = a;
}

void Display::Time()
{
	time_t now = time(0);
	tm*ltm = localtime(&now);
	cout << 1 + ltm->tm_mon << "/" << 1 + ltm->tm_mday << "/" << 1900 + ltm->tm_year << "  " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;
}

void Display::welcome()
{
	cout << " \n\n\n";

	cout << red << " \t ****************************************************************************************" << endl;
	cout << red << " \t ****************************" << blue << " Welcome to Expense Manager " << red << "********************************" << endl;

	cout << red << " \t ****************************************************************************************" << endl;
	cout << endl;
	cout << endl;
	cout << reset;
}

void Display::top(string s)
{
	cout << " \n\n\n";
	cout << red << " \t ****************************************************************************************" << endl;
	cout << red << " \t ****************************" << blue << " Welcome to Expense Manager " << red << "********************************" << endl;
	cout << red << " \t ****************************************************************************************" << endl;
	cout << white << " \t\t\t\t\t\t\t\t Date & Time:";
	Time();
	cout << blue << " \t (" << s << ")" << "\t\t" << endl;
	cout << reset << endl;
}

void Display::DisGoback()
{
	cout << magenta << " \t\t 1. Go to Previous Menu" << endl;
	cout << magenta << " \t\t 2. Go to Main Menu" << endl;
	cout << reset << endl;
}
void Display::ViewAdd(string s)
{
	top(s);
	cout << magenta << " \t\t 1. View  " << endl;
	cout << magenta << " \t\t 2. Add  " << endl << endl;
	cout << magenta << " \t\t Choice : ";

}

void Display::dismainmenu(string s) {
	top(s);
	cout << magenta << " \t\t 1. Rent " << endl;
	cout << magenta << " \t\t 2. car loan " << endl;
	cout << magenta << " \t\t 3. Electricity and gas " << endl;
	cout << magenta << " \t\t 4. Phone " << endl;
	cout << magenta << " \t\t 5. Insurance " << endl;
	cout << magenta << " \t\t 6. Groceries " << endl;
	cout << magenta << " \t\t 7. Commute " << endl;
	cout << magenta << " \t\t 8. Miscellaneous " << endl;
	cout << magenta << " \t\t 9. Previous Menu " << endl;
	cout << magenta << " \t\t 10. Exit " << endl;
	cout << yellow << " \n\t\t choose an option : ";

}

void Display::disrent(string s) {
	cout << magenta << " \t\t 1. Occurs Monthly " << endl;
	cout << magenta << " \t\t 2. NOn-Recursion  " << endl;

}

void Display::disrentrec(string s) {

}

void Display::disrentnonrec(string s) {

}



void Display::disviewoedit()
{
	cout << magenta << " \t\t 1. View " << endl;
	cout << magenta << " \t\t 2. edit " << endl;

}
int Display::Mainmenu() {
	int g, h, i;
	char c;
	system("clear");
	//dismainmenu(" Main Menu ");
	ViewAdd(" Main ");
	cin >> h;
	if (cin.good() == true)
	{
		system(" clear");
		switch (h)
		{
		case 1:
			ViewMenu();
			break;
		case 2:
			AddMenu();
			break;
		default:
			cout << " \n\n\n ";
			cout << cyan << " \t\t Please provide an valid input " << endl;
			cout << cyan << " \t\t Press enter to continue " << endl;
			cin.ignore();
			cin.ignore();
			Mainmenu();
			break;
		}
		cin.ignore();
		system("clear");
	}
	else
	{
		cout << endl;
		cout << cyan << " \t\t Please enter an Integer value " << endl;
		cout << cyan << " \t\t Press any key to continue : ";
		cin.ignore();
		cin.ignore();
		cin.ignore();
		system("./a ");
	}
}

int Display::ViewMenu() {
	int g, h, i;
	char c;
	system("clear");
	dismainmenu(" Main Menu --> View ");
	cin >> h;
	if (cin.good() == true)
	{
		system(" clear");
		switch (h)
		{
		case 1:
			MainRent(1);
			break;
		case 2:
			MainCarLoan();
			break;
		case 3:
			MainElecGas();
			break;
		case 4:
			MainPhone();
			break;

		case 5:
			MainInsurance();
			break;
		case 6:
			MainGroceries();
			break;
		case 7:
			MainCommute(1);
			break;

		case 9:
			Mainmenu();
			break;
		case 10:
			exit(1);
		default:
			cout << " \n\n\n ";
			cout << cyan << " \t\t Please provide an valid input " << endl;
			cout << cyan << " \t\t Press enter to continue " << endl;
			cin.ignore();
			cin.ignore();
			Mainmenu();
			break;
		}
		cin.ignore();
		system("clear");
	}
	else
	{
		cout << endl;
		cout << cyan << " \t\t Please enter an Integer value " << endl;
		cout << cyan << " \t\t Press any key to continue : ";
		cin.ignore();
		cin.ignore();
		cin.ignore();
		/*	cin >> c;
		if (c)
		{
		cin.ignore();
		cin.ignore();
		Mainmenu();
		}
		else
		{
		exit(1);
		//		return -1;
		}

		*/
		system("./a");
		//Mainmenu();
	}
}
int Display::AddMenu() {
	int g, h, i;
	char c;
	system("clear");
	dismainmenu(" Main Menu --> Add ");

	cin >> h;
	if (cin.good() == true)
	{
		system(" clear");
		switch (h)
		{
		case 1:
			MainRent(2);
			break;
		case 2:
			MainCarLoan();
			break;
		case 3:
			MainElecGas();
			break;
		case 4:
			MainPhone();
			break;

		case 5:
			MainInsurance();
			break;
		case 6:
			MainGroceries();
			break;
		case 7:
			MainCommute(2);
			break;
		case 9:
			exit(1);
		default:
			cout << " \n\n\n ";
			cout << cyan << " \t\t Please provide an valid input " << endl;
			cout << cyan << " \t\t Press enter to continue " << endl;
			cin.ignore();
			cin.ignore();
			Mainmenu();
			break;
		}
		cin.ignore();
		system("clear");
	}
	else
	{
		cout << endl;
		cout << cyan << " \t\t Please enter an Integer value " << endl;
		cout << cyan << " \t\t Press any key to continue : ";
		cin.ignore();
		cin.ignore();
		cin.ignore();
		/*	cin >> c;
		if (c)
		{
		cin.ignore();
		cin.ignore();
		Mainmenu();
		}
		else
		{
		exit(1);
		//		return -1;
		}

		*/
		system("./a");
		//Mainmenu();
	}
}


int Display::View(string a, int c) {

	Attribute b;
	int month;
	system("clear");
	top(a);
	month = b.GetMonth();
	cout << cyan << " \t\t Value : " << b.GetT(month, c) << endl << endl;
	DisGoback();
	Goback(1);
}
int Display::Add(string s, int b)
{
	Attribute a;

	top(s); //sets new value of rent and rec flag to 1

	a.ew = a.Cal(b);
	if (a.ew != 1)
	{
		DisGoback();
		Goback(2);
	}
	else
	{
		Mainmenu();
	}

}
int Display::MainRent(int h) {

	Attribute a;
	system("clear");
	switch (h)
	{

	case 1: // this vies the value of rent
		View(" Main Menu --> View --> Rent", 1);
		break;

	case 2:// this changes or adds the value of rent along with rec o non rec
		Add(" Main Menu --> Add --> Rent", 1);
		break;

	default:
		cout << " \t\t please provide an input " << endl;
		cin.ignore();
		cin.ignore();
		system("clear");
		cin.ignore();
		cout << reset;
		break;

	}
}
int Display::MainCommute(int h) {

	Attribute a;
	system("clear");
	switch (h)
	{

	case 1: // this views the value of rent
		View(" Main Menu --> View --> Commute", 7);
		break;

	case 2:// this changes or adds the value of rent along with rec o non rec
		Add(" Main Menu --> Add --> Commute", 7);
		break;

	default:
		cout << " \t\t please provide an input " << endl;
		cin.ignore();
		cin.ignore();
		system("clear");
		cin.ignore();
		cout << reset;
		break;

	}
}


int Display::Goback(int j) { // This is for go back option for rent menu.

	int i;
	cout << yellow << " \t\t choose an option : ";
	cin >> i;
	if (cin.good() == false)
	{
		cout << " \t\t Please enter an integer " << endl;
		cin.ignore();
		cin.ignore();
		return -1;
	}
	else
	{
		system("clear");
		if (i == 1 && j == 1)
		{
			ViewMenu();
		}
		else if (i == 1 && j == 2)
		{
			AddMenu();
		}
		else
		{
			Mainmenu();
		}
	}
}



int Display::MainCarLoan() {

	Attribute a;
	int g, h, month;
	top(" Main Menu --> CarLoan ");
	disviewoedit();
	cout << magenta << " \t\t 3. Go to Main Menu" << endl;
	cout << yellow << " \n\t\t choose an option : ";

	cin >> h;
	system("clear");
	switch (h)
	{

	case 1: // this vies the value of CarLoan
		system("clear");
		top(" Main Menu --> CarLoan --> View ");
		cout << magenta << " \t\t Please enter the month(1to12) : ";
		cin >> month;
		cout << cyan << " \t\t CarLoan : " << a.GetT(month, 2) << endl << endl;
		DisGoback();
		CarLoanGoback();
		break;
	case 2: system("clear");
		top(" Main Menu --> CarLoan --> Edit");
		disrent(" Main Menu --> CarLoan ");
		cout << magenta << " \t\t 3. Go to Previous Menu" << endl;
		cout << magenta << " \t\t 4. Go to Main Menu" << endl;

		cout << yellow << " \n\t\t choose an option : ";
		cin >> g;
		// Not Yet working
		if (cin.good() == false)
		{
			cout << " \t\t Please enter an integer " << endl;
			cin.ignore();
			cin.ignore();
			break;
		}
		else
		{
			system("clear");
			switch (g)
			{

			case 1: top(" Main Menu --> Carloan --> Edit --> Rec "); //sets new value of rent and rec flag to 1
				a.ew = a.Cal(2);
				if (a.ew != 1)
				{
					DisGoback();
					CarLoanGoback();
					break;
				}
				else
				{
					break;
				}
			case 3:
				MainCarLoan();
				break;
			case 4:
				Mainmenu();
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
	case 3:
		Mainmenu();
		break;

	}
}

int Display::CarLoanGoback() { // This is for go back option for Carloan menu.

	int i;
	cout << yellow << " \t\t choose an option : ";
	cin >> i;
	if (cin.good() == false)
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
			MainCarLoan();
		}
		else
		{
			Mainmenu();
		}
	}
}

int Display::MainElecGas() {

	Attribute a;
	int g, h, t, month;
	top(" Main Menu --> ElecGas ");
	disviewoedit();
	cout << magenta << " \t\t 3. Go to Main Menu" << endl;
	cout << yellow << " \n\t\t choose an option : ";
	cin >> h;
	system("clear");
	switch (h)
	{

	case 1: // gives the total Amount of Electricity and Gas
		system("clear");
		top(" Main Menu --> ElecGas --> View ");
		cout << magenta << " \t\t Please enter the month(1to12) : ";
		cin >> month;
		cout << cyan << " \t\t ElecGas amount : " << a.GetT(month, 3) << endl << endl;
		DisGoback();
		ElecGasGoback();
		break;
	case 2: system("clear");
		top(" Main Menu --> ElecGas --> Edit");
		disrent(" Main Menu --> ElecGas ");
		cout << magenta << " \t\t 3. Go to Previous Menu" << endl;
		cout << magenta << " \t\t 4. Go to Main Menu" << endl;

		cout << yellow << " \n\t\t choose an option : ";
		cin >> g;
		// Not Yet working
		if (cin.good() == false)
		{
			cout << " \t\t Please enter an integer " << endl;
			cin.ignore();
			cin.ignore();
			break;
		}
		else
		{
			system("clear");
			switch (g)
			{

			case 1: top(" Main Menu --> ElecGas --> Edit --> Rec "); //sets new value of rent and rec flag to 1
				a.ew = a.Cal(3);
				if (a.ew != 1)
				{
					DisGoback();
					ElecGasGoback();
					break;
				}
				else
				{
					break;
				}
			case 3:
				MainElecGas();
				break;
			case 4:
				Mainmenu();
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
	case 3:
		Mainmenu();
		break;

	}
}

int Display::ElecGasGoback() { // This is for go back option for ElecGas menu.

	int i;
	cout << yellow << " \t\t choose an option : ";
	cin >> i;
	if (cin.good() == false)
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
			MainElecGas();
		}
		else
		{
			Mainmenu();
		}
	}
}

int Display::MainPhone() {

	Attribute a;
	int g, h, t, month;
	top(" Main Menu --> Phone ");
	disviewoedit();
	cout << magenta << " \t\t 3. Go to Main Menu" << endl;
	cout << yellow << " \n\t\t choose an option : ";
	cin >> h;
	system("clear");
	switch (h)
	{

	case 1: // gives the total Amount of Phone Bill
		system("clear");
		top(" Main Menu --> Phone --> View ");
		cout << magenta << " \t\t Please enter the month(1to12) : ";
		cin >> month;
		cout << cyan << " \t\t Phone : " << a.GetT(month, 4) << endl << endl;
		DisGoback();
		PhoneGoback();
		break;
	case 2: system("clear");
		top(" Main Menu --> Phone --> Edit");
		disrent(" Main Menu --> Phone ");
		cout << magenta << " \t\t 3. Go to Previous Menu" << endl;
		cout << magenta << " \t\t 4. Go to Main Menu" << endl;

		cout << yellow << " \n\t\t choose an option : ";
		cin >> g;
		// Not Yet working
		if (cin.good() == false)
		{
			cout << " \t\t Please enter an integer " << endl;
			cin.ignore();
			cin.ignore();
			break;
		}
		else
		{
			system("clear");
			switch (g)
			{

			case 1: top(" Main Menu --> Phone --> Edit --> Rec "); //sets new value of rent and rec flag to 1
				a.ew = a.Cal(4);
				if (a.ew != 1)
				{
					DisGoback();
					PhoneGoback();
					break;
				}
				else
				{
					break;
				}
			case 3:
				MainPhone();
				break;
			case 4:
				Mainmenu();
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
	case 3:
		Mainmenu();
		break;

	}
}





int Display::PhoneGoback() { // This is for go back option for Phone menu.

	int i;
	cout << yellow << " \t\t choose an option : ";
	cin >> i;
	if (cin.good() == false)
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
			MainPhone();
		}
		else
		{
			Mainmenu();
		}
	}
}




int Display::MainInsurance() {

	Attribute a;
	int g, h, t, month;
	top(" Main Menu --> Insurance ");
	disviewoedit();
	cout << magenta << " \t\t 3. Go to Main Menu" << endl;
	cout << yellow << " \n\t\t choose an option : ";
	cin >> h;
	system("clear");
	switch (h)
	{

	case 1: // gives the total Insurance
		system("clear");
		top(" Main Menu --> Insurance --> View ");
		cout << magenta << " \t\t Please enter the month(1to12) : ";
		cin >> month;
		cout << cyan << " \t\t Insurance : " << a.GetT(month, 5) << endl << endl;
		DisGoback();
		InsuranceGoback();
		break;
	case 2: system("clear");
		top(" Main Menu --> Insurance --> Edit");
		cout << magenta << " \t\t 1. Insurance Yearly " << endl;
		cout << magenta << " \t\t 2. Insurance half Yearly " << endl;
		cout << magenta << " \t\t 3. Insurance Quarterly " << endl;
		cout << magenta << " \t\t 4. Go to Previous Menu" << endl;
		cout << magenta << " \t\t 5. Go to Main Menu" << endl;

		cout << yellow << " \n\t\t choose an option : ";
		cin >> g;
		// Not Yet working
		if (cin.good() == false)
		{
			cout << " \t\t Please enter an integer " << endl;
			cin.ignore();
			cin.ignore();
			break;
		}
		else
		{
			system("clear");
			switch (g)
			{
			case 1: top(" Main Menu --> Insurance --> Edit --> Yearly "); //sets Insurance value and its duration (yearly)
				a.ew = a.Cal(4);
				if (a.ew != 1)
				{
					cout << magenta << " \t\t 1. Go to Insurance Page" << endl;
					cout << magenta << " \t\t 2. Go to Main Menu" << endl;

					InsuranceGoback();
					break;
				}
				else
				{
					break;
				}
			case 2: top(" Main Menu --> Insurance --> Edit --> HalfYearly "); //sets Insurance value and its duration (yearly)
				a.ew = a.Cal(5);
				if (a.ew != 1)
				{
					cout << magenta << " \t\t 1. Go to Insurance page" << endl;
					cout << magenta << " \t\t 2. Go to Main Menu" << endl;
					InsuranceGoback();
					break;
				}
				else
				{
					break;
				}
			case 3: top(" Main Menu --> Insurance --> Edit --> Quarterly "); //sets Insurance value and its duration (yearly)
				a.ew = a.Cal(5);
				if (a.ew != 1)
				{
					cout << magenta << " \t\t 1. Go to Insurance page" << endl;
					cout << magenta << " \t\t 2. Go to Main Menu" << endl;
					InsuranceGoback();
					break;
				}
				else
				{
					break;
				}

			case 4:
				MainInsurance();
				break;
			case 5:
				Mainmenu();
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
	case 3:
		Mainmenu();
		break;

	}
}

int Display::InsuranceGoback() {

	int i;
	cout << yellow << " \t\t choose an option: ";
	cin >> i;
	if (cin.good() == false)
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
			MainInsurance();
		}
		else
		{
			Mainmenu();
		}
	}
}

int Display::MainGroceries() {

	Attribute a;
	int g, h, t, month;
	top(" Main Menu --> Groceries ");
	disviewoedit();
	cout << magenta << " \t\t 3. Go to Main Menu" << endl;
	cout << yellow << " \n\t\t choose an option : ";
	cin >> h;
	system("clear");
	switch (h)
	{

	case 1: // gives the total Grocery
		system("clear");
		top(" Main Menu --> Groceries --> View ");
		cout << magenta << " \t\t Please enter the month(1to12) : ";
		cin >> month;
		cout << cyan << " \t\t Groceries : " << a.GetT(month, 6) << endl << endl;
		DisGoback();
		GroceriesGoback();
		break;
	case 2: system("clear");
		top(" Main Menu --> Groceries --> Edit ");
		cout << magenta << " \t\t 1. Occurs Monthly " << endl;
		cout << magenta << " \t\t 2. NOn-Recursion  " << endl;
		cout << magenta << " \t\t 4. Go to Previous Menu" << endl;
		cout << magenta << " \t\t 5. Go to Main Menu" << endl;

		cout << yellow << " \n\t\t choose an option : ";
		cin >> g;
		// Not Yet working
		if (cin.good() == false)
		{
			cout << " \t\t Please enter an integer " << endl;
			cin.ignore();
			cin.ignore();
			break;
		}
		else
		{
			system("clear");
			switch (g)
			{
			case 1: top(" Main Menu --> Groceries --> Edit --> Rec "); //sets groceries value and its duration (yearly)
				a.ew = a.Cal(6);
				if (a.ew != 1)
				{
					DisGoback();
					GroceriesGoback();
					break;
				}
				else
				{
					break;
				}
			case 2: top(" Main Menu --> Groceries --> Edit --> NonRec "); //sets Insurance value and its duration (yearly)
				a.ew = a.Cal(6);
				if (a.ew != 1)
				{
					DisGoback();
					GroceriesGoback();
					break;
				}
				else
				{
					break;
				}

			case 3:
				MainGroceries();
				break;
			case 4:
				Mainmenu();
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
	case 3:
		Mainmenu();
		break;

	}
}

int Display::GroceriesGoback() {

	int i;
	cout << yellow << " \t\t choose an option: ";
	cin >> i;
	if (cin.good() == false)
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
			MainGroceries();
		}
		else
		{
			Mainmenu();
		}
	}
}




#endif
