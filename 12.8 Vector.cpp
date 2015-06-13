#include "Vector.h"
template<typename elementType>
Vector<elementType>::Vector(){
	vector_size = 0;
	vArray = 0;
	vector_type_size = 0;

}

template<typename elementType>
Vector<elementType>::Vector(int size){
	vector_size = size;
	vector_type_size = size;
	vArray = new elementType[size];
	for (int i = 0; i < size; i++){
		vArray[i] = NULL;
	}

}

template<typename elementType>
Vector<elementType>::Vector(int size, elementType defaultValue){
	vector_size = size;
	vArray = new elementType[size];
	for (int i = 0; i < size; i++){
		vArray[i] = defaultValue;
	}
}

template<typename elementType>
void Vector<elementType>::push_back(elementType element){
	vector_size++;
	if (vector_size > vector_type_size){
		vector_type_size = 2 * vector_size;
		elementType *tempArray = vArray;
		vArray = new elementType[2 * vector_size];
		for (int i = 0; i < vector_size; i++){
			vArray[i] = tempArray[i];
		}
		vArray[vector_size - 1] = element;
		delete tempArray;
	}
	else{
		vArray[vector_size - 1] = element;
	}
}

template<typename elementType>
void Vector<elementType>::pop_back(){
	if (vector_size > 0){
		vector_size--;
		vArray[vector_size] = NULL;
	}
}

template<typename elementType>
unsigned const Vector<elementType>::size(){
	return vector_size;
}

template<typename elementType>
elementType const Vector<elementType>::at(int index){
	return vArray[index];
}

template<typename elementType>
bool const Vector<elementType>::empty(){
	if (vector_size == 0) 
		return true;
	else
		return false;
}

template<typename elementType>
void Vector<elementType>::clear(){
	for (int i = 0; i < vector_size; i++){
		vArray[i] = NULL;
	}
	vector_size = 0;
}

template <typename elementType>
void Vector<elementType> ::swap(Vector &v2){


	int temp_size = vector_size;
	elementType temp_type_size = vector_type_size;
	elementType *temp = new elementType[vector_type_size];
	for (int i = 0; i < vector_size; i++){
		temp[i] = vArray[i]; 
	}
	// Swap Vector 1 <- Vector 2
	vector_size = v2.vector_size;
	vector_type_size = v2.vector_type_size;
	vArray = v2.vArray;
	// Swap Vector 2 <- Vector 1
	v2.vector_size = temp_size;
	v2.vector_type_size = temp_type_size;
	v2.vArray = temp;
}
