#ifndef __TESTPARAMETER
#define __TESTPARAMETER
#include <iostream>
#include <iomanip>


using namespace std;

void cite();
void swap(int& a,int& b);
void swap(int* a,int* b);
void testArray();
void parameter();

void sendParam(int* a);
double circleArea(double r=0);
float triangle(float width=1,float height=1);
void testOmitParam();

int commonDicisor(int a,int b);
#endif