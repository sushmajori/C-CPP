// This program will print The total days in between two dates.

// Days in-between dates
// Compiled in Visual C++ 2008 Express Edition
// Language: C++/STL


#include<iostream>

using namespace std;




int main()
{

	int days_in_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int first_day, second_day;

	int first_month, second_month;

	int first_year, second_year;

	int years_difference, days_difference;

	int months_total;

	int reg_year = 365;

	
	
	cout<<"Program to calculate how many days are in between the day/month/year entered."<<endl;
	cout<<endl;

	cout<<"Please enter the date by day, month, year."<<endl;
	cout<<endl;

	cout<<"First date:: "<<endl;
	cout<<endl;

	cout<<"Day: ";
	cin>>first_day;
	if(first_day > 31 || first_day <= 0)
	{
		cout<<"Incorrect day entered"<<endl;
		cin.ignore();
		return 0;
	}
	cout<<"Month: ";
	cin>>first_month;
	if(first_month > 12 || first_month <= 0)
	{
		cout<<"Incorrect Month entered"<<endl;
		cin.ignore();
		return 0;
	}
	cout<<"Year: ";
	cin>>first_year;
	if(first_year > 9999 || first_year < 0)
	{
		cout<<"Incorrect Year Entered"<<endl;
		cin.ignore();
		return 0;
	}
	
	cout<<endl;
	cout<<"\nSecond date:: "<<endl;
	cout<<endl;

	cout<<"Day: ";
	cin>>second_day;
	if(second_day > 31 || second_day <= 0)
	{
		cout<<"Incorrect day entered"<<endl;
		cin.ignore();
		return 0;
	}
	cout<<"Month: ";
	cin>>second_month;
	if(second_month > 12 || second_month <= 0)
	{
		cout<<"Incorrect Month entered"<<endl;
		cin.ignore();
		return 0;
	}
	cout<<"Year: ";
	cin>>second_year;
	if(second_year > 9999 || second_year < 0)
	{
		cout<<"Incorrect Year Entered"<<endl;
		cin.ignore();
		return 0;
	}


	/////////////////////////////Years/////////////////////////////////

	
	if(first_year == second_year)
	{
		years_difference = 0;
	}
	else
	{
		if(first_year % 4 == 0 && first_year % 100 != 0 || first_year % 400 == 0)
		{
			if(second_year % 4 == 0 && second_year % 100 != 0 || second_year % 400 == 0)
			{
				if(first_year > second_year)
				{
					years_difference = (first_year - second_year) * (reg_year) + 2;
				}
				else
				{
					years_difference = (second_year - first_year) * (reg_year) + 2;
				}
				if(second_month > first_month)
				{
					if(days_in_months[first_month - 1] > days_in_months[1])
					{
						--years_difference;
					}
				}
			}
			else
			{
				if(first_year > second_year)
				{
					years_difference = (first_year - second_year) * (reg_year) + 1;
				}
				else
				{
					years_difference = (second_year - first_year) * (reg_year) + 1;
				}
				if(first_month > second_month)
				{
					if(days_in_months[second_month - 1] > days_in_months[1])
					{
						--years_difference;
					}
				}
			}
		}
		else
		{
			if(first_year > second_year)
			{
				years_difference = (first_year - second_year) * (reg_year);
			}
			else
			{
				years_difference = (second_year - first_year) * (reg_year);
			}
		}
	}

	/////////////////////////////Months////////////////////////////////////

	
	if(first_month == second_month)
	{
		months_total = 0;
	}
	else
	{
		if(first_month > second_month)
		{
			for(int i = (first_month - 1); i > (second_month - 1); i--)
			{
				static int months_total_temp = 0;
				months_total_temp += days_in_months[i];
				months_total = months_total_temp;
			}
		}
		else
		{
			for(int i = (first_month - 1); i < (second_month - 1); i++)
			{
				static int months_total_temp = 0;
				months_total_temp += days_in_months[i];
				months_total = months_total_temp;
			}
		}
	}

	////////////////////////////Days//////////////////////////////////

	int days_total;

	if (first_day == second_day)
	{
		days_difference = 0;
		days_total = (years_difference + months_total) - days_difference;
	}
	else
	{
		if(first_day > second_day)
		{
			days_difference = first_day - second_day;
			days_total = (years_difference + months_total) - days_difference;
		}
		else
		{
			days_difference = second_day - first_day;
			days_total = (years_difference + months_total) + days_difference;
		}
	}

	//////////////////////////In Between Leap Years///////////////////////////////

	if(first_year == second_year)
	{
	}
	else
	{
		if(first_year > second_year)
		{
			for(int i = (second_year + 1); i < first_year; i++)
			{
				if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
				{
					cout<<endl;
					cout<<i<<endl;
					++days_total;
				}
			}
		}
		else
		{
			for(int i = (first_year + 1); i < second_year; i++)
			{
				if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
				{
					cout<<endl;
					cout<<i<<endl;
					++days_total;
				}
			}
	        }
	}

	//////////////////////////Output//////////////////////////////////


	cout<<endl;
	cout<<"\nThe total days in between your dates are: "<<days_total<<endl;
	cout<<endl;

	cin.get();
	cin.ignore();
	return 0;

}
