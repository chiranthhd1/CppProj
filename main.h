#ifndef _MAIN_H
#define _MAIN_H

#include "attributes.h"

int Auth::Usepwdcheck()
{
	cout << green << " \t\t Enter Username : ";
	cin >> username;


	if (username.length() < 4)
	{
		cout << red << " \t\t Username length must be atleast 4 characters long." << "\n";
	}
	else
	{

		cout << green << " \t\t Enter Password : ";
		cin >> password;


		if (password.length() < 6)
		{
			cout << red << " \t\t Password length must be atleast 6 character long." << "\n";

		}
	}
	if (username == USERNAME && password == PASSWORD) {
		return 0;
	}

	else {
		cout << red << " \t\t Inserted wrong userid or password try again" << "\n";
		return 1;
	}



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

double Attribute::GetRent()
{
	cout << cyan << " \t\t Rent : " << rent << endl << endl;
	return rent;
}

double Attribute::GetCarLoan()
{
	cout << cyan << " \t\t CarLoan : " << carloan << endl << endl;
	return carloan;
}

double Attribute::GetElecGas()
{
	return elecgas;
}
double Attribute::GetPhone()
{
	return phone;
}
double Attribute::GetInsurance()
{
	cout << cyan << " \t\t Insurance : " << insurance << endl << endl;
	return insurance;
}

double Attribute::GetGroceries()
{
	return groceries;
}

double Attribute::GetCommute()
{
	return commute;
}

double Attribute::GetMisc()
{
	return misc;
}

string Attribute::GetStatement()
{
	return statement;
}
double Attribute::GetRecFlag()
{
	return rflag;
}
double Attribute::GetThreshold()
{
	return threshold;
}



void AttributeDB::SetUsername()
{

}
void AttributeDB::SetRent()
{
}
double Attribute::SetRent()
{
	Display d;
	double r, y;
	cout << magenta << " \t\t Existing Rent is : " << rent << endl;
	cout << red << " \t\t Please enter the value of rent :";
	cin >> r;
	cout << red << " \t\t Please confirm " << endl;
	//cout << r;
	cout << magenta << " \t\t 1.Yes " << endl;
	cout << magenta << " \t\t 2.No " << yellow;
	//	cout << yellow << " \t\t     :";

	cin >> y;
	if (y == 1)
	{
		rent = r;
		//cout << r << rent << endl;
		cout << yellow << " \t\t Selection Confirmed" << endl << endl;
	}
	else
	{
		return 1;

	}
}

double Attribute::SetCarLoan() {
	Display d;
	double c, y;
	cout << green << " \t\t Existing Carloan is : " << carloan << endl;
	cout << blue << " \t\t Please enter the value of CarLoan :";
	cin >> c;
	cout << red << " \t\t Please confirm " << endl;
	cout << yellow << " \t\t 1.Yes " << endl;
	cout << yellow << " \t\t 2.No " << yellow;
	cin >> y;

	if (y == 1)
	{
		carloan = c;
		cout << yellow << " \t\t Selection Confirmed" << endl << endl;
	}
	else
	{
		return 1;

	}
}

double Attribute::SetInsurance() {
        Display d;
        double c, y,z;
        cout << white << " \t\t Insurance Amount is: " << insurance << endl;
        cout << blue << " \t\t Please enter the value to be changed :";
        cin >> c;
        cout << red << " \t\t Please confirm " << endl;
        cout << yellow << " \t\t 1.Yes " << endl;
        cout << yellow << " \t\t 2.No " << yellow;
        cin >> y;

        if (y == 1)
        {
                insurance = c;
                cout << yellow << " \t\t Selection Confirmed" << endl << endl;
        }
        else
        {
                return 1;

        }
}

void AttributeDB::SetCarLoan()
{

}

void AttributeDB::SetElecGas()
{
}
void AttributeDB::SetPhone()
{
}
void AttributeDB::SetInsurance()
{
}

void AttributeDB::SetGroceries()
{
}

void AttributeDB::SetCommute()
{
}

void AttributeDB::SetMisc()
{
}

void AttributeDB::SetStatement()
{
}
void AttributeDB::SetRecFlag()
{
}
void AttributeDB::SetThreshold()
{
}

void Display::Time()
{
	time_t now = time(0);
	//	cout << " Total number of seconds " << now << endl;
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
	//	string date = system ("date '+ %D %X'") ;
	//	cout << blue << system ("date '+ %D %X'") << endl;


	cout << blue << " \t (" << s << ")" << "\t\t" << endl;
	cout << reset << endl;
}

void Display::DisGoback()
{
	cout << magenta << " \t\t 1. Go to Previous Menu" << endl;
	cout << magenta << " \t\t 2. Go to Main Menu" << endl;
	cout << reset << endl;
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
	cout << magenta << " \t\t 9. Exit " << endl;
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
	dismainmenu(" Main Menu ");
	cin >> h;
	if (cin.good() == true)
	{
		system(" clear");
		//	do {
		switch (h)
		{
		case 1:
			MainRent();
			break;
		case 2:
			MainCarLoan();
			break;
		case 5: 
			MainInsurance();
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
		//	} while (!h);
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

int Display::MainRent() {

	Attribute a;
	AttributeDB b;
	int g, h;
	top(" Main Menu --> Rent ");
	disviewoedit();
	cout << magenta << " \t\t 3. Go to Main Menu" << endl;
	cout << yellow << " \n\t\t choose an option : ";

	cin >> h;
	system("clear");
	switch (h)
	{

	case 1: // this vies the value of rent
		system("clear");
		top(" Main Menu --> Rent --> View ");
		a.GetRent();
		DisGoback();
		RentGoback();
		break;



	case 2:// this changes or adds the value of rent along with rec o non rec
		system("clear");
		top(" Main Menu --> Rent --> Edit");
		disrent(" Main Menu --> Rent ");
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

			case 1:	top(" Main Menu --> Rent --> Edit --> Rec "); //sets new value of rent and rec flag to 1
				a.ew = a.SetRent();
				if (a.ew != 1)
				{
					DisGoback();
					RentGoback();
					break;
				}
				else
				{
					break;
				}

			case 2: top(" Main Menu --> Rent --> Edit -->Non- Rec ");// //sets new value of rent and rec flag to 1
				a.ew = a.SetRent();
				if (a.ew != 1)
				{
					DisGoback();
					RentGoback();
					break;
				}
				else
				{
					break;
				}
			case 3:
				MainRent();
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

int Display::RentGoback() { // This is for go back option for rent menu.

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
			MainRent();
		}
		else
		{
			Mainmenu();
		}
	}
}

int Display::MainCarLoan() {

	Attribute a;
	AttributeDB b;
	int g, h;
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
		a.GetCarLoan();
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
				a.ew = a.SetCarLoan();
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

int Display::MainInsurance() {

        Attribute a;
        AttributeDB b;
        int g, h ,t;
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
                a.GetInsurance();
                DisGoback();
                InsuranceGoback();
                break;
        case 2: system("clear");
                top(" Main Menu --> Insurance --> Edit");
		//disrent(" Main Menu --> Insurance ");
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
                                a.ew = a.SetInsurance();
                                if (a.ew != 1)
                                {
                                        //DisGoback();
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
                                a.ew = a.SetInsurance();
                                if (a.ew != 1)
                                {
                                        //DisGoback();
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
                                a.ew = a.SetInsurance();
                                if (a.ew != 1)
                                {
                                        //DisGoback();
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


#endif
