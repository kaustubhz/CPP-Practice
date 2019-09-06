#ifndef DECTOOCT_H
#define DECTOOCT_H
#include<iostream>
#include<stdexcept>
#define SIZE 8
using namespace std;

class Stack
{
	private:
		int num;
		int tos;
		int *p;
	public:
		Stack();
		bool isFull();
		bool isEmpty();
		int peep();
		int pop();
		void push(int ele);
		void Accept();
		void DecToOct();
		void Display();
		~Stack();
};

#endif
