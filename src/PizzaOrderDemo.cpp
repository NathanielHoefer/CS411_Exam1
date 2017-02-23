//==============================================================================
// Exam 1 - Pizza Order Demo
//==============================================================================
/*
    File: PizzaOrderDemo.cpp
    Project: Exam 1
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Class: CS411 - Spring 2017
	Date: 2/23/2017

*******************************************************************************/

#include "PizzaOrder.hpp"
#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

void requestOrder(PizzaOrder &order);
void printOrder(PizzaOrder &order);

int main()
{
	PizzaOrder order;

	requestOrder(order);
	printOrder(order);
}

// 	Requests the number of pizzas and their details for a specific order.
//		Preconditions: the Pizza Order object doesn't contain any pizzas
//		Postcoditions: The order will contain the number of pizzas based on input
void requestOrder(PizzaOrder &order)
{
	char input[100];
	int pizzaCount, size, extraToppings;
	pizzaCount = size = extraToppings = 0;
	bool validResponse = false;

	cout << "Pizza Order Placement" << endl << endl;;

	// Requests and validates number of pizzas from user
	while (!validResponse) {
		cout << "How many pizzas would you like to order (0-3)? ";
		cin.getline(input, 100);
		cin.clear();

		// Validates input from 0 to 3
		if (strlen(input) == 1 && input[0] >= '0' && input[0] <= '3') {
			pizzaCount = atoi(input);
			validResponse = true;
		}
	}
	validResponse = false;

	// Generates the pizzas
	for (int i = 0; i < pizzaCount; i++) {
		cout << "Pizza " << i + 1 << ": " << endl;

		// Requests and validates the size of the pizza
		while (!validResponse) {
			cout << " - Size (1=Small, 2=Medium, 3=Large)? ";
			cin.getline(input, 100);
			cin.clear();

			// Validates input from 1 to 3
			if (strlen(input) == 1 && input[0] >= '1' && input[0] <= '3') {
				size = atoi(input);
				validResponse = true;
			}
		}
		validResponse = false;

		// Requests and validates the extra toppings count
		while (!validResponse) {
			cout << " - Extra Cheese Topping Count (0-2)? ";
			cin.getline(input, 100);
			cin.clear();

			// Validates input from 0 to 2
			if (strlen(input) == 1 && input[0] >= '0' && input[0] <= '2') {
				extraToppings = atoi(input);
				validResponse = true;
			}
		}
		validResponse = false;

		Size sizeType;
		switch (size) {
		case 1 :
			sizeType = SMALL;
			break;
		case 2 :
			sizeType = MEDIUM;
			break;
		case 3 :
			sizeType = LARGE;
			break;
		default :
			sizeType = SMALL;
		}
		order.addPizza(sizeType, extraToppings);
	}
	cout << endl;
}

//	Prints the receipt of the current order
void printOrder(PizzaOrder &order)
{
	cout << order << endl;
}
