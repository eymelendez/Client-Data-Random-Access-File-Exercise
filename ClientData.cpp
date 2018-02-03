// ClientData.cpp

#include<iostream>
#include<string>

using namespace::std;

#include"ClientData.h"

ClientData::ClientData(int accountNumberValue, 
	string lastNameValue, string firstNameValue, double balanceValue)
{
	setAccountNumber(accountNumberValue); 
	setFirstName(firstNameValue);
	setLastName(lastNameValue);  
	setBalance(balanceValue);

}

ClientData::~ClientData()
{
}

void ClientData::setAccountNumber(int accountNumberValue)
{
	accountNumber = accountNumberValue;
}

void ClientData::setFirstName(string firstNameString)
{
	// copy at most 10 characters from string to firstName
	int length = firstNameString.size();
	length = (length < 10 ? length : 9);
	firstNameString._Copy_s(firstName, 10, length);
	firstName[length] = '\0'; // append null character to firstName

}

void ClientData::setLastName(string lastNameString)
{
	// copy at most 15 characters from string to lastName 

	int length = lastNameString.size();
	length = (length < 15 ? length : 14 ); 
	lastNameString._Copy_s(lastName, 15, length);
	lastName[ length ] = '\0'; // append null character to lastName
}

void ClientData::setBalance(double balanceValue)
{
	balance = balanceValue;
}

int ClientData::getAccountNumber() const
{
	return accountNumber;
}

string ClientData::getFirstName() const
{
	return firstName;
}

string ClientData::getLastName() const
{
	return lastName;
}

double ClientData::getBalance() const
{
	return balance;
}
