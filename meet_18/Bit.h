#pragma once
#include <iostream>
#include "String.h"
using namespace std;
//�� ����� ��� ������������� ����� � ��������� ���,������� ������ ���.
class Bit:public String {
	string str2;
	string negativ;
public:
	Bit(): str2 { "01100001001" } {}//� ���� ���������� �����������,� ��������,��� �� ����(+���-)�������� ������� ���,������ ������,�� ���� ��� ��������

	Bit(string s) {
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '0' || '1') {
				if (s[0] = '0') {
					str2 = s;
				}
				else negativ = s;
			}
			else str2.clear(); cout << "error"<<endl;
		}
	}
	Bit(const Bit& obj):String(obj) {}

	~Bit() {str2.clear();}

	void assign(string ss) { 
		for (int i = 0; i < ss.size(); i++) {
			if (ss[i] == '0' || '1') {
				if (ss[0] = '0') {
					str2 = ss;
				}
				else negativ = ss;
			}
			else str2.clear(); cout << "error" << endl;
		}
	}

	void replacement() {
		str2[0] = '1';
		negativ = str2;
		str2.clear();
	}

	void comparison(Bit &obj) {  //� ��������� String ������ �����������,��� ��������,������ �� ������� ��� ���������
		if (str2 == obj.str2) cout << "equal";
		else cout << "not equal";
	}

};
