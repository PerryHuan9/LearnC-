// UnionTen.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "shape.h"
#include "IntSet.h"
#include "IntOrderSet.h"

int Shape::sb = 8888;
void testShape() {
	Shape *r=new Rectangle (10, 20);
	Shape &c=*new Circle(10);
	Circle c2(10);
	//Shape s = c2;
	(*r).area();
	(*r).circumference();
	c.area();
	c.circumference();
	c.area();
	c.circumference();
	cout << "s=" << Circle::show()<<c2.show() << endl;
}

void testIntSet() {
	int arrays[] = {1,2,2,5,6,52};
	IntSet set(9, arrays, 6);
	int a[]{ 13,14,15 };
	set.add(a,3);
	set.remove(2);
	set.add(17);
	set.add(18);
	cout << set.isInSet(2) << endl;
	for (int i = 0; i < set.size(); i++) {
		cout << set.get(i) <<"\t";
	}
	cout << endl;
}

void testIntOrderSet() {
	int arrays[] = { 1,10,2,57,6,52 };
	IntOrderSet set( 15, arrays, 6);
	int a[]{ 13,14,15 };
	set.add(a, 3);
	set.remove(52);
	set.add(17);
	set.add(18);
	cout << set.isInSet(2) << endl;
	for (int i = 0; i < set.size(); i++) {
		cout << set.get(i) << "\t";
	}
	cout << endl;
}


int main()
{
	testShape();
	//testIntSet();
	//testIntOrderSet();
    return 0;
}

