#pragma once
#include <iostream>
using namespace std;

class IntSet {
protected:
	int *elements;
	int count;
	int capacity;
public:
	IntSet(int cap=100, int arrays[]=NULL, int count=0):capacity(cap), count(0), elements(new int[cap]) {
		if (arrays == NULL)return;
		for (int i = 0; i < count; i++)add(arrays[i]);
	}

	~IntSet()
	{
		delete elements;
		cout << "Îö¹¹º¯Êý" << endl;
	}

	virtual int isInSet(int ele) {
		for (int i = 0; i < count; i++) {
			if (elements[i] == ele)return i;
		}
		return -1;
	}

	virtual int add(int ele) {
		if (count >= capacity) {
			cerr << "out of capacity"<<endl ;
			exit(1);
		}
		int index;
		if ((index=isInSet(ele)) >= 0)return index;
		else elements[count++] = ele;
		return count;
	}

	virtual bool remove(int ele) {
		int index;
		if (( index = isInSet(ele)) >= 0) {
			for (int i = index; i < count-1; i++) {
				elements[i] = elements[i + 1];
			}
			count--;
			return true;
		}
		return false;
	}

	virtual int get(int index) {
		return elements[index];
	}

	int  size() {
		return count;
	}

	virtual bool add(int arrays[],int len) {
		if (arrays != NULL) {
			for (int i = 0; i < len; i++) {
				add(arrays[i]);
			}
		}
		return false;
	}

};





















