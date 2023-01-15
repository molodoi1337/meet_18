#include <Windows.h>
#include <iostream>
#include "String.h"
using namespace std;

int main()
{
	String s{"12345"};
	String s2{ s };
	String s3 = s + s2;
	cout << s3;
}
