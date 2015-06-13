#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
using namespace std;

template <typename elementType>
class Vector {
private:
	unsigned int vector_size;
	elementType *vArray;
	elementType vector_type_size;

public:
	Vector<elementType>(); 
	Vector<elementType>(int size);
	Vector<elementType>(int size, elementType defaultValue);
	void push_back(elementType element);
	void pop_back();
	unsigned const size();
	elementType const at(int index);
	bool const empty();
	void clear();
	void swap(Vector &v2);
	


};

#endif
