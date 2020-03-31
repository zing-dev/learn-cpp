//
// Created by zing on 3/26/2020.
//

#ifndef LEARN_CPP_FUNCTIONS_H
#define LEARN_CPP_FUNCTIONS_H

extern int addition(int a, int b);

extern int subtraction(int a, int b);

extern void duplicate(int &a, int &b, int &c);

extern int divide(int a, int b = 2);

extern void odd(int x);

extern void even(int x);

extern long factorial(long a);

extern int operate(int, int);

extern double operate(double, double);

template<class T>
 T sum(T t1, T t2);

#endif //LEARN_CPP_FUNCTIONS_H
