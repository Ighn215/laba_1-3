#include <iostream>
#include <cstring>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void main() {
	int i = 0, p = 100;
	int n = 824;
	
	while (!(i < n)) {
		p *= p;
		i++;
	}

	cout << p << endl;
}