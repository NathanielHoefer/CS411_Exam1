//==============================================================================
// Exam 1 - Pizza Class
//==============================================================================
/*
    File: Pizza.hpp
    Project: Exam 1
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Class: CS411 - Spring 2017
	Date: 2/22/2017

*******************************************************************************/

#ifndef SRC_PIZZA_HPP_
#define SRC_PIZZA_HPP_

#include <ostream>

static const double SMALL_COST = 6;
static const double MEDIUM_COST = 8;
static const double LARGE_COST = 10;
static const double TOPPING_COST = 1;

enum Size { SMALL, MEDIUM, LARGE };

class Pizza
{
	Size mSize;
	int mToppings;
	double mPrice;

public:
	Pizza();
	Pizza(Size size, int toppings);
	Size getSize();
	double getPrice();
	friend std::ostream & operator <<(const std::ostream &lhs, const Pizza &rhs);
private:
	// Calculates the price of the pizza and updates the member variable
	void calcPrice();
};

#endif /* SRC_PIZZA_HPP_ */
