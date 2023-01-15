#pragma once
#include <iostream>
using namespace std;

class String {
protected:
	string str;
public:
	String():str{"No value"}{}
	String(string s) {	str = s;}
	String(const String& obj) {
		str = obj.str;
	}
	~String() { str.clear(); }
	String operator=(String &obj) {
		str = obj.str;
		return str;
	}

	int StrSize() {
		return str.size();
	}

	void Clear() {
		str.clear();
	}

	String operator+(String& obj) {
		str = str+obj.str;
		return str;
	}
	String operator+=(String& obj) {
		str = str + obj.str;
		return str;
	}

	bool operator==(String& obj) {
		if (str == obj.str) return true;
		else return false;
	}

	bool operator!=(String& obj) {
		if (str != obj.str) return true;
		else return false;
	}

	friend ostream& operator<<(ostream& outstream, String& s) {
		outstream << s.str;
		return outstream;
	}
};
