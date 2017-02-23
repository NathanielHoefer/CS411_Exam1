//==============================================================================
// Exam 1 - Pizza Class
//==============================================================================
/*
    File: Pizza.cpp
    Project: Exam 1
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Class: CS411 - Spring 2017
	Date: 2/22/2017

*******************************************************************************/

#include "Pizza.hpp"

Pizza::Pizza()
{
	mSize = SMALL;
	mToppings = 0;
	calcPrice();
}

Pizza::Pizza(Size size, int toppings)
{
	mSize = size;
	mToppings = toppings;
	calcPrice();
}

Size Pizza::getSize()
{
	return mSize;
}

double Pizza::getPrice()
{
	return mPrice;
}

void Pizza::calcPrice()
{
	// Resolves the price of the pizza
	switch (mSize) {
	case SMALL :
		mPrice = SMALL_COST;
		break;
	case MEDIUM :
		mPrice = MEDIUM_COST;
		break;
	case LARGE :
		mPrice = LARGE_COST;
		break;
	default :
		mPrice = SMALL_COST;
	}
	mPrice += (TOPPING_COST * mToppings);
}

std::ostream & operator <<(const std::ostream &lhs, const Pizza &rhs)
{
	std::string size;
	switch (rhs.mSize) {
	case SMALL :
		size = "Small";
		break;
	case MEDIUM :
		size = "Medium";
		break;
	case LARGE :
		size = "Large";
		break;
	}
	lhs << "Size = " << size;
	lhs << ", Number of Toppings = " << rhs.mToppings;
	lhs << ", Price = " << rhs.mPrice;
	return lhs;
}
