/*
V-Script-Main-Version
1.1b
*/

#include<iostream>
#include<stdlib.h>
#include<fstream>

/*
Must be compiled through a C++ IDE for an easier compiling process
Recommended: Dev-C++
But it can be your preference to compile it through an actual compiler
Recommended: MinGW
*/

using namespace std;

/*
============================ File Initialization ============================
*/

ofstream strObjs("objs/strObjs.txt");
ofstream intObjs("objs/intObjs.txt");
ofstream floObjs("objs/floatObjs.txt");
ofstream douObjs("objs/doubleObjs.txt");

/*
============================ Variable Initialization ============================
*/

bool isError = false;

/*
============================ Main Functions ============================
*/

static void LocalFor(bool firv, bool secv, int ivar, int a, int b, int c, bool cont, bool br)
{
	if (firv == true)
	{
		for (int i = ivar; i <= a; i = i + c)
		{
			cout << i << "\n";
			i++;
			if (i == b)
			{
				if (cont == true)
				{
					continue;
				}
				
				if (br == true)
				{
					break;
				}
			}
		}
	}
	
	if (secv == true)
	{
		int combs = b + c;
		for (int i = ivar; i <= a; i++)
		{
			cout << i << "\n";
			if (i == combs)
			{
				if (cont == true)
				{
					continue;
				}
				
				if (br == true)
				{
					break;
				}
			}
		}
	}
}

static void LocalWhile(bool nor, bool isdo, int ivar, int a, int b, bool cont, bool br)
{
	if (nor == true)
	{
		int i = ivar;
		while (i < a)
		{
			cout << i << "\n";
			i++;
			if (i == b)
			{
				if (cont == true)
				{
					continue;
				}
				
				if (br == true)
				{
					break;
				}
			}
		}
	}
	
	if (isdo == true)
	{
		int i = ivar;
		int combs = a + b;
		do {
			cout << i << "\n";
			i++;
			if (i == b)
			{
				if (cont == true)
				{
					continue;
				}
				
				if (br == true)
				{
					break;
				}
			}
		}
		while (i < combs);
	}
}

int res;

static void numconf(int a, int b, int c, bool add, bool sub, bool multi, bool divi, bool hascons)
{	
	if (add == true)
	{
		res = a + b;
		if (hascons == true)
		{
			if (res >= c || res <= c)
			{
				cout << res << c;
			}
		}
	}
	
	if (sub == true)
	{
		res = a - b;
		if (hascons == true)
		{
			if (res >= c || res <= c)
			{
				cout << res << c;
			}
		}
	}
	
	if (multi == true)
	{
		res = a * b;
		if (hascons == true)
		{
			if (res >= c || res <= c)
			{
				cout << res << c;
			}
		}
	}
	
	if (divi == true)
	{
		res = a / b;
		if (hascons == true)
		{
			if (res >= c || res <= c)
			{
				cout << res << c;
			}
		}
	}
	cout << res << "\n";
}

/*
============================ Sub Functions ============================
*/

void throwError(string errStr)
{
	cout << errStr;
	isError = true;
}

/*
============================ Main Classes ============================
*/

class Out {
	public:
		void OutStr(string str) {
			cout << str;
		}
	
		void OutInt(int num) {
			cout << num;
		}
	
		void OutFloat(float num){
			cout << num;
		}
};

Out SysOut;

class Calc {
	public:
		/*
		This is the new calculator
		*/
		void CalcStart() {
			int a;
			int b;
			int c;
			int curOpr;
			int extCurOpr;
			bool hascons = false;
			string opts;
			
			cout << "Input a number: ";
			cin >> a;
			
			cout << "Input a second number: ";
			cin >> b;
			
			cout << "Include Conditions? [y/n]: ";
			cin >> opts;
			
			if (opts == "y") {
				cout << "Input the number for the condition: ";
				cin >> c;
				hascons = true;
			} else if (opts == "n") {
				hascons = false;
			} else {
				throwError("Unknown Character.");
			}
			
			cout << "Operations \n" << "[1] addition \n" << "[2] subtraction \n" << "[3] multiplication \n" << "[4] division \n";
			cin >> curOpr;
			
			bool addCurNums = false;
			bool subCurNums = false;
			bool multiCurNums = false;
			bool diviCurNums = false;
			
			switch (curOpr)
			{
				case 1:
					addCurNums = true;
					extCurOpr = 1;
					break;
				
				case 2:
					subCurNums = true;
					extCurOpr = 2;
					break;
					
				case 3:
					multiCurNums = true;
					extCurOpr = 3;
					break;
					
				case 4:
					diviCurNums = true;
					extCurOpr = 4;
					break;
			}

			switch (extCurOpr)
			{
				case 1:
					res = a + b;
					break;

				case 2:
					res = a - b;
					break;

				case 3:
					res = a * b;
					break;

				case 4:
					res = a / b;
					break;
			}

			if (hascons == true) {
				if (res >= c || res <= c) {
					cout << res;
				}
			} else {
				cout << res;
			}
		}

	class Math {
		public:
			void Add(int a, int b, int c, bool hascons) {
				res = a + b;
				if (hascons == true) {
					if (res >= c || res <= c) {
						cout << res;
					} 
				} else {
					cout << res;
				}
			}
			
			void Sub(int a, int b, int c, bool hascons) {
				res = a - b;
				if (hascons == true) {
					if (res >= c || res <= c) {
						cout << res;
					} 
				} else {
					cout << res;
				}
			}
			
			void Multiply(int a, int b, int c, bool hascons) {
				res = a * b;
				if (hascons == true) {
					if (res >= c || res <= c) {
						cout << res;
					} 
				} else {
					cout << res;
				}
			}
			
			void Divide(int a, int b, int c, bool hascons) {
				res = a / b;
				if (hascons == true) {
					if (res >= c || res <= c) {
						cout << res;
					}
				} else {
					cout << res;
				}
			}
	};
	Math Math;
};

Calc Calculate;

class Create {
	public:
		void Obj() 
		{
			int objType;
			int extObjType;
			int arrayObjType;
			string strArrayObjType;
			int extArrayObjType;
			int arrayLength;
			string strObjType;
			bool isString = false;
			bool isInt = false;
			bool isFloat = false;
			bool isDouble = false;
			bool isArray = false;
			string obj;
			
			cout << "Enter a new name for your object: \n";
			cin >> obj;
			
			cout << "Object Type: \n";
			cout << "[1] string \n" << "[2] integer \n" << "[3] float \n" << "[4] double \n" << "[5] array \n";
			cin >> objType;
			
			switch (objType)
			{
				case 1:
					isString = true;
					strObjType = "string";
					extObjType = 1;
					break;	
				case 2:
					isInt = true;
					strObjType = "integer";
					extObjType = 2;
					break;
				case 3:
					isFloat = true;
					strObjType = "float";
					extObjType = 3;
					break;
				case 4:
					isDouble = true;
					strObjType = "double";
					extObjType = 4;
					break;
				case 5:
					isArray = true;
					strObjType = "array";
					extObjType = 5;
					break;
			}
			
			string opts;
			
			cout << "Create object? [y/n]: ";
			cin >> opts;
			
			if (opts == "y") {
				cout << "Created Object: " << obj << "\n";
				cout << "Object Type: " << strObjType << "\n\n";
			} else if (opts == "n") {
				cout << "Discarded Object.";
			} else {
				cout << "Unknown Character: " << opts;
			}
			
			string objStr;
			int objInt;
			float objFloat;
			double objDouble;
			
			switch (extObjType)
			{
				case 1:
					cout << "Input some string for your object: \n";
					cin >> objStr;
					cout << "Object String: " << objStr;
					strObjs << "Object: " << obj << "\n" << "String: " << objStr;
					break;
				case 2:
					cout << "Input some numbers for your object: \n";
					cin >> objInt;
					cout << "Object Integer: " << objInt;
					intObjs << "Object: " << obj << "\n" << "Integer: " << objInt;
					break;
				case 3:
					cout << "Input some numbers for your object: \n";
					cin >> objFloat;
					cout << "Object Float: " << objFloat;
					floObjs << "Object: " << obj << "\n" << "Float: " << objFloat;
					break;
				case 4:
					cout << "Input some numbers for your object: \n";
					cin >> objDouble;
					cout << "Object Double: " << objDouble;
					douObjs << "Object: " << obj << "\n" << "Double: " << objDouble;
					break;
				case 5:
					cout << "Select an array type: \n";
					cout << "[1] string \n" << "[2] integer \n" << "[3] float \n" << "[4] double \n";
					cin >> arrayObjType;
					cout << "Input the amount objects for your array: \n";
					cin >> arrayLength;
					cout << "Input The Elements for your array: \n";
					break;
			}
			
			switch (arrayObjType)
			{
				case 1:
					strArrayObjType = "string";
					extArrayObjType = 1;
					break;
				case 2:
					strArrayObjType = "integer";
					extArrayObjType = 2;
					break;
				case 3:
					strArrayObjType = "float";
					extArrayObjType = 3;
					break;
				case 4:
					strArrayObjType = "double";
					extArrayObjType = 4;
					break;
			}
			
			if (strArrayObjType == "string")
			{
				string strArray[arrayLength];
				for (int i = 0; i < arrayLength; i++) {
					cin >> strArray[i];
				}
				for (int i = 0; i < arrayLength; i++) {
					cout << strArray[i] << " ";
				}
			}
			
			if (strArrayObjType == "integer")
			{
				int intArray[arrayLength];
				for (int i = 0; i < arrayLength; i++) {
					cin >> intArray[i];
				}
				for (int i = 0; i < arrayLength; i++) {
					cout << intArray[i] << " ";
				}
			}
			
			if (strArrayObjType == "float")
			{
				float floatArray[arrayLength];
				for (int i = 0; i < arrayLength; i++) {
					cin >> floatArray[i];
				}
				for (int i = 0; i < arrayLength; i++) {
					cout << floatArray[i] << " ";
				}
			}
			
			if (strArrayObjType == "double")
			{
				double doubleArray[arrayLength];
				for (int i = 0; i < arrayLength; i++) {
					cin >> doubleArray[i];
				}
				for (int i = 0; i < arrayLength; i++) {
					cout << doubleArray[i] << " ";
				}
			}
		}
};

Create Create;

/*
============================ Code Writing ============================
*/

int main()
{
	
	// Write custom code
	
	return 0;
	
}
