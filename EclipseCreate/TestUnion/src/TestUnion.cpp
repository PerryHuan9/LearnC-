//============================================================================
// Name        : TestUnion.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "struct.h"



int main(){
	focus a,b;
	a.number=10;
	b.zoom=100;
	cout << "a.number=" << a.number << setw(10) << "b.zoom=" << b.zoom << endl;
	cout << "size of focus:" << sizeof(focus) << endl;

	cout<<"size of Colar:"<<sizeof(Colar)<<endl;
	cout<<"size of Rectangular:"<<sizeof(Rectangular)<<endl;
	cout<<"size of point:"<<sizeof(point)<<endl;

	point c;
	c.coordinate1.radius=1;
	c.coordinate1.angle=30;
	c.coordinate1.show();
	c.coordinate1.transformToRectangular().show();

	point d;
	d.coordinate2.x=1;
	d.coordinate2.y=2;
	d.coordinate2.show();
	return 0;
}

