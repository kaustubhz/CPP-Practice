#ifndef MENUSTACK_H
#define MENUSTACK_H
#include<iostream>
#include<stdexcept>
#define SIZE 8
using namespace std;

class Stack
{
	private:
		int tos;
		int *p;
	public:
		Stack();
		bool isFull();
		bool isEmpty();
		int Peep();
		int Pop();
		void Push(int);
		~Stack();
};

#endif
