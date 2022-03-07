#include <iostream>

using namespace std;

class Car
{
	//attribute

	private:
	bool correct_date_of_production = false; //helper for check year of production

	public:
	string car_name;
	string car_model;
	int car_year_of_production{};
	int car_kilometers_travelled{};

	//methods

	//This method add new car to attribute
	void add_new_car()
	{
		//Entred in variable
		cout << "Add Car name to base: ";
		cin >> car_name;
		cout << "Add Car model to base: ";
		cin >> car_model;
		cout << "Add year of prodtction to base: ";
		cin >> car_year_of_production;

		//Check if year of production is correct
		if (car_year_of_production <= 2022)
		{
			correct_date_of_production = true;
		}
		else
		{
			while (correct_date_of_production == false)
			{
				//system("cls");
				//cout << "Add Car name to base: " << car_name << endl;
				//cout << "Add Car model to base : " << car_model << endl;
				cout << "Incorrect Year of production" << endl;
				cout << "Set correct year of production: ";
				cin >> car_year_of_production;

				if (car_year_of_production <= 2022)
				{
					correct_date_of_production = true;
				}
			}
		}
		cout << "Add kilometers travelled to base: ";
		cin >> car_kilometers_travelled;
	}

	//This method show what user wrote to variable 
	void show_exist_car()
	{
		cout << endl;
		cout << "Showing a exist car" << endl;
		cout << car_name << " - Name of car" << endl;
		cout << car_model << " - Model of car" << endl;
		cout << car_year_of_production << " - Date of production" << endl;
		cout << car_kilometers_travelled << " - Kilometers travelled" << endl;
	}
};

int main()
{
	Car car[2];

	car[0].add_new_car();
	car[1].add_new_car();

	car[0].show_exist_car();
	car[1].show_exist_car();

}
