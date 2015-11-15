#ifndef _ATTRIBUTES_H
#define _ATTRIBUTES_H

#include <iostream>
#include <string>
#include "color.h"
#include <cstdlib>
#include <cmath>


using namespace std;

class Attribute {
public:
	string username, statement;
	double rent, carloan, elecgas, phone, insurance, groceries, commute, misc, rflag, threshold, ew;
	Attribute(double  r = 1000, double c = 400, double  e = 100, double p = 50, double  i = 80, double  g = 100, double co = 150, double  m = 400, double rf = 0, double  t = 1000) : rent(r), carloan(c), elecgas(e), phone(p), insurance(i), groceries(g), commute(co), misc(m), rflag(rf), threshold(t) {}

//	Attribute *p_rent;
//	 p_rent = &rent;


	string GetUsername();
	double GetRent();
	double SetRent();
	double GetCarLoan();
	double SetCarLoan();
	double GetElecGas();
	double GetPhone();
	double GetInsurance();
	double GetGroceries();
	double GetCommute();
	double GetMisc();
	string GetStatement();
	double GetRecFlag();
	double GetThreshold();
	friend class AttributeDB;
};

class AttributeDB {
public:
	void SetUsername();
	void SetRent();
	void SetCarLoan();
	void SetElecGas();
	void SetPhone();
	void SetInsurance();
	void SetGroceries();
	void SetCommute();
	void SetMisc();
	void SetStatement();
	void SetRecFlag();
	void SetThreshold();

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
	int RentGoback();
	int CarLoanGoback();
	void disrentrec(string s);
	void disrentnonrec(string s);

};

#endif
