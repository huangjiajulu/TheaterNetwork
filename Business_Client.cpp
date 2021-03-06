#include "stdafx.h"
#include "Business_Client.h"


Business_Client::Business_Client()
{
}

Business_Client::Business_Client(string& name,int age, int num_of_tickets) : Client(name,age, num_of_tickets)
{
}
Business_Client::Business_Client(string& name, int age) : Client(name, age)
{
}

Business_Client::~Business_Client()
{
}

float Business_Client::cost(int num, Screening& screening) const
{
	float discount;
	num_of_tickets < 100 ? discount = 0 : discount = 0.05;
	return num*(1 - discount)*screening.getPrice();
}