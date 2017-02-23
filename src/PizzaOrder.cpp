//==============================================================================
// Exam 1 - Pizza Order Class
//==============================================================================
/*
    File: PizzaOrder.hpp
    Project: Exam 1
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Class: CS411 - Spring 2017
	Date: 2/22/2017

*******************************************************************************/

#include "PizzaOrder.hpp"

PizzaOrder::PizzaOrder()
{
	// Default Constructor
}

void PizzaOrder::addPizza(Size size, int toppings)
{
	mPizzas.push_back(Pizza(size, toppings));
}

double PizzaOrder::calcTotalCost()
{
	double cost;
	for (int i = 0; i < (int) mPizzas.size(); i++) {
		cost += mPizzas[i].getPrice();
	}
	return cost;
}

std::ostream & operator <<(const std::ostream &lhs, const PizzaOrder &rhs)
{
	for (int i = 0; i < (int) rhs.mPizzas.size(); i++) {
		lhs << rhs.mPizzas[i] << "\n";
	}
	lhs << "----------------------------------------------------\n";
	lhs << "Total Cost = " << rhs.calcTotalCost() << "\n";
}

