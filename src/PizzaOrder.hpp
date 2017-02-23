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

#ifndef SRC_PIZZAORDER_HPP_
#define SRC_PIZZAORDER_HPP_

#include <ostream>
#include <vector>
#include <string>
#include "Pizza.hpp"

class PizzaOrder
{
	std::vector<Pizza> mPizzas;

public:
	PizzaOrder();
	void addPizza(Size size, int toppings);
	double calcTotalCost();
	friend std::ostream & operator <<(const std::ostream &lhs, const PizzaOrder &rhs);
};



#endif /* SRC_PIZZAORDER_HPP_ */
