// Specification file for the the IntegerList class.
#pragma once
#include <iostream>
using namespace std;

class IntegerList
{
private:
   int *list;                 // Pointer to the array.
   int numElements;           // Number of elements.
   bool isValid(int) const;   // Validates subscripts.
public:
	~IntegerList();
	IntegerList(const IntegerList & set);
   IntegerList(int);          // Constructor
   void setElement(int, int); // Sets an element to a value
   int getElement(int) const; // Returns an element
   int getNumElements() const;
};
