// ClientData.h

#pragma once

#include<iostream>
#include<string>

using namespace::std;

class ClientData
{
public:
	ClientData(int = 0, string = "", string = "", double = 0.0); // Contructor
	~ClientData(); // Destructor

	// Setters
	void setAccountNumber(int);
	void setFirstName(string);
	void setLastName(string);
	void setBalance(double);


	// Getters
	int getAccountNumber() const;
	string getFirstName() const;
	string getLastName() const;
	double getBalance() const;


private:

	int accountNumber;
	char firstName[10];
	char lastName[15];
	double balance;
	
};

