#ifndef _ATTRIBUTES_H
#define _ATTRIBUTES_H

#include <iostream>
#include <string>
#include "color.h"
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <limits>

using namespace std;

class Auth {
public:
	string USERNAME;
	string PASSWORD;// = "123456";
	string username, password;
	Auth(string USER = "sanjan", string PASS = "123456") : USERNAME(USER), PASSWORD(PASS) {}
	int a, b;
	int Usepwdcheck();
	int Maincheck();
};


class Attribute {

	string username, statement;
	double rent, carloan, elecgas, phone, insurance, groceries, commute, misc, rflag, threshold;
	fstream infile;
	ofstream ofile;

public:
	
	//Attribute(double  r = 1000, double c = 400, double  e = 100, double p = 50, double  i = 800, double  g = 100, double co = 150, double  m = 400, double rf = 0, double  t = 1000) : rent(r), carloan(c), elecgas(e), phone(p), insurance(i), groceries(g), commute(co), misc(m), rflag(rf), threshold(t) {}
	Attribute() : infile("xman.txt"){
/*		GotoLine(1);
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
*/	}

public:
	double ew;
	string GetUsername();
	void SetUsername();
	void SetRent(int a);
	double SetCarLoan(int a);
	double SetElecGas(int a);
	double SetPhone(int a);
	double SetInsurance(int a);
	double SetGroceries(int a);
	double SetCommute(int a);
	double SetMisc(int a);

	
	double GetRent(int a);
	double GetCarLoan(int a);
	double GetElecGas(int a);
	double GetPhone(int a);
	double GetInsurance(int a);
	double GetGroceries(int a);
	double GetCommute(int a);
	double GetMisc(int a);
	string GetStatement();
	double GetRecFlag();
	double GetThreshold(int a);
	int GetMonth();	
	double CalRent();
	double CalCarLoan();
	double CalElecGas();
	double CalPhone();
	double CalInsurance();
	double CalGroceries();
	double CalCommute();
	double CalMisc();

	fstream& GotoLine(int num) {
		infile.seekg(std::ios::beg);
		for (int i = 0; i < num - 1; ++i) {
			infile.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		return infile;
	}
};

class Display {
public:
	void welcome();
	void top(string s);
	void dismainmenu(string s);
	void disrent(string s);
	void DisGoback();
	void disviewoedit();
	void Time();
	int Mainmenu();
	int MainRent();
	int MainCarLoan();
	int MainInsurance();
	int MainGroceries();
	int RentGoback();
	int CarLoanGoback();
	int InsuranceGoback();
	int GroceriesGoback();
	void disrentrec(string s);
	void disrentnonrec(string s);

};

#endif
