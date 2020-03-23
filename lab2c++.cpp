#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct Movie
{
	char Name[30];
	char ProducerName[30];
	int realeseYear;
	char Country[15];
	int price;
	int income;
	int profit;
};

void InputInfo( int N, Movie group[])
{

	for (int i = 0; i < N; i++)
	{
		cout << "\nInput Movie name: ";
		cin.ignore(std::cin.rdbuf()->in_avail());
		cin.getline(group[i].Name, 30);

		cout << "\nInput Producer name: ";
		cin.ignore(std::cin.rdbuf()->in_avail());
		cin.getline(group[i].ProducerName, 30);

		do
		{
			cout << "\nInput realese year: ";
			cin >> group[i].realeseYear;

		} while (group[i].realeseYear > 0 && group[i].realeseYear <= 2020);

		cout << "\nInput Country: ";
		cin.ignore(std::cin.rdbuf()->in_avail());
		cin.getline(group[i].Country, 15);

		do
		{
			cout << "\nInput price: ";
			cin >> group[i].price;

		} while (group[i].price > 0);

		do
		{
			cout << "\nInput income: ";
			cin >> group[i].income;
		} while (group[i].income > 0);

		do
		{
			cout << "\nInput profit: ";
			cin >> group[i].profit;
		} while (group[i].profit > 0);
	}
}

void infoOutput(const int N, Movie group[])
{
	for (size_t i = 0; i < N; i++)
	{
		cout << "Movie name: " << group[i].Name << endl;;
		cout << "Producer name: " << group[i].ProducerName << endl;
		cout << "Realese year: " << group[i].realeseYear << endl;
		cout << "Country: " << group[i].Country << endl;
		cout << "Price: " << group[i].price << endl;
		cout << "Income: " << group[i].income << endl;
		cout << "Profit: " << group[i].profit << endl;
	}
}

int main()
{
	const int N = 2;
	Movie group[N];

	InputInfo(N,group);
	infoOutput(N, group);
}