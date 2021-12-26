/*
V-Script-Main-Version
1.0b
*/

#include<iostream>
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

static void OpenCalc(int c)
{
	string opts;
	int opts2;
	int a;
	int b;
	bool isAdd = false;
	bool isSub = false;
	bool isMulti = false;
	bool isDivi = false;
	bool hascons = false;
	
	cout << "Input a number: ";
	cin >> a;
	cout << "Input a second number: ";
	cin >> b;
	
	cout << "Has Conditions? [y/n]: ";
	cin >> opts;
	
	if (opts == "y") 
	{
		hascons = true;
	}
	
	else if (opts == "n")
	{
		hascons = false;
	}
	
	else
	{
		cout << "Unknown char.";
	}
	
	cout << "Operations \n" << "[1] addition \n" << "[2] subtraction \n" << "[3] multiplication \n" << "[4] division \n"; 
	cin >> opts2;
	
	/* Fuck C++ for not supporting switches as strings lmao
	switch (opts2)
	{
		case 'add':
			isAdd = true;
			break;
			
		case 'sub':
			isSub = true;
			break;
			
		case 'multi':
			isMulti = true;
			break;
			
		case 'divi':
			isDivi = true;
			break;
	}
	*/
	
	switch (opts2)
	{
		case 1:
			isAdd = true;
			break;
		
		case 2:
			isSub = true;
			break;
			
		case 3:
			isMulti = true;
			break;
			
		case 4:
			isDivi = true;
			break;
	}
	
	if (isAdd == true)
	{
		res = a + b;
		if (hascons == true)
		{
			if (res >= c || res <= c)
			{
				cout << res << " is either equal, greater than or less than " << c;
			}
		}
		else
		{
			cout << res;
		}
	}
	
	if (isSub == true)
	{
		res = a - b;
		if (hascons == true)
		{
			if (res >= c || res <= c)
			{
				cout << res << " is either equal, greater than or less than " << c;
			}
		}
		else
		{
			cout << res;
		}
	}
	
	if (isMulti == true)
	{
		res = a * b;
		if (hascons == true)
		{
			if (res >= c || res <= c)
			{
				cout << res << " is either equal, greater than or less than " << c;
			}
		}
		else
		{
			cout << res;
		}
	}
	
	if (isDivi == true)
	{
		res = a / b;
		if (hascons == true)
		{
			if (res >= c || res <= c)
			{
				cout << res << " is either equal, greater than or less than " << c;
			}
		}
		else
		{
			cout << res;
		}
	}
}

/*
============================ Sub Functions ============================
*/

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
		void CalcStart(int c, int d, int e) {
			int a;
			int b;
			int curOpr;
			int secCurOpr;
			int thrCurOpr;
			bool hascons = false;
			bool multiOprd = false;
			string opts;
			string opts2;
			string opts3;
			
			cout << "Input a number: ";
			cin >> a;
			
			cout << "Input a second number: ";
			cin >> b;
			
			cout << "Include Conditions? [y/n]: ";
			cin >> opts;
			
			if (opts == "y") {
				hascons = true;
			} else if (opts == "n") {
				hascons = false;
			} else {
				cout << "Unknown Char.";
			}
			
			cout << "Include Multiple Operations? [y/n]: ";
			cin >> opts2;
			
			if (opts2 == "y") {
				multiOprd = true;
			} else if (opts2 == "n") {
				multiOprd = false;
			} else {
				cout << "Unknown Char.";
			}
			
			/*
			cout << "Include Decimals? [y/n]: ";
			cin >> opts3;
			
			if (opts3 == "y") {
				isDeci = true;
			} else if (opts3 == "n") {
				isDeci == false;
			} else {
				cout << "Unknown Char.";
			}
			*/
			
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
					break;
				
				case 2:
					subCurNums = true;
					break;
					
				case 3:
					multiCurNums = true;
					break;
					
				case 4:
					diviCurNums = true;
					break;
			}
			
			if (multiOprd == true) {
				cout << "Operations (Second Operation) \n" << "[1] addition \n" << "[2] subtraction \n" << "[3] multiplication \n" << "[4] division \n";
				cin >> secCurOpr;
			}
			
			bool secAddCurNums = false;
			bool secSubCurNums = false;
			bool secMultiCurNums = false;
			bool secDiviCurNums = false;
			
			switch (secCurOpr)
			{
				case 1:
					secAddCurNums = true;
					break;
					
				case 2:
					secSubCurNums = true;
					break;
					
				case 3:
					secMultiCurNums = true;
					break;
					
				case 4:
					secDiviCurNums = true;
					break;
			}
			
			if (multiOprd == true) {
				cout << "Operations (Third Operation) \n" << "[1] addition \n" << "[2] subtraction \n" << "[3] multiplication \n" << "[4] division \n";
				cin >> thrCurOpr;
			}
			
			bool thrAddCurNums = false;
			bool thrSubCurNums = false;
			bool thrMultiCurNums = false;
			bool thrDiviCurNums = false;
			
			switch (thrCurOpr)
			{
				case 1:
					thrAddCurNums = true;
					break;
					
				case 2:
					thrSubCurNums = true;
					break;
					
				case 3:
					thrMultiCurNums = true;
					break;
					
				case 4:
					thrDiviCurNums = true;
					break;
			}
			
			if (addCurNums == true) {
				if (multiOprd == true) {
					if (secAddCurNums == true) {
						res = a + b + d;
						if (thrDiviCurNums == true) {
							res = a + b + d / e;
						}
					} else if (secSubCurNums == true) {
						res = a + b - d;
						if (thrMultiCurNums == true) {
							res = a + b - d * e;
						}
					} else if (secMultiCurNums == true) {
						res = a + b * d;
						if (thrSubCurNums == true) {
							res = a + b * d - e;
						}
					} else if (secDiviCurNums == true) {
						res = a + b / d;
						if (thrAddCurNums == true) {
							res = a + b / d + e;
						}
					}
				} else {
					res = a + b;
				}
				if (hascons == true) {
					if (res >= c || res <= c) {
						cout << res;
					} else {
						cout << res;
					}
				} else {
					cout << res;
				}
			}
		
			if (subCurNums == true) {
				if (multiOprd == true) {
					if (secAddCurNums == true) {
						res = a - b + d;
						if (thrDiviCurNums == true) {
							res = a - b + d / e;
						}
					} else if (secSubCurNums == true) {
						res = a - b - d;
						if (thrMultiCurNums == true) {
							res = a - b - d * e;
						}
					} else if (secMultiCurNums == true) {
						res = a - b * d;
						if (thrSubCurNums == true) {
							res = a - b * d - e;
						}
					} else if (secDiviCurNums == true) {
						res = a - b / d;
						if (thrAddCurNums == true) {
							res = a - b / d + e;
						}
					}
				} else {
					res = a - b;
				}
				if (hascons == true) {
					if (res >= c || res <= c) {
						cout << res;
					} else {
						cout << res;
					}
				} else {
					cout << res;
				}
			}
			
			if (multiCurNums == true) {
				if (multiOprd == true) {
					if (secAddCurNums == true) {
						res = a * b + d;
						if (thrDiviCurNums == true) {
							res = a * b + d / e;
						}
					} else if (secSubCurNums == true) {
						res = a * b - d;
						if (thrMultiCurNums == true) {
							res = a * b - d * e;
						}
					} else if (secMultiCurNums == true) {
						res = a * b * d;
						if (thrSubCurNums == true) {
							res = a * b * d - e;
						}
					} else if (secDiviCurNums == true) {
						res = a * b / d;
						if (thrAddCurNums == true) {
							res = a * b / d + e;
						}
					}
				} else {
					res = a * b;
				}
				if (hascons == true) {
					if (res >= c || res <= c) {
						cout << res;
					} else {
						cout << res;
					}
				} else {
					cout << res;
				}
			}
			
			if (diviCurNums == true) {
				if (multiOprd == true) {
					if (secAddCurNums == true) {
						res = a / b + d;
						if (thrDiviCurNums == true) {
							res = a / b + d / e;
						}
					} else if (secMultiCurNums == true) {
						res = a / b - d;
						if (thrSubCurNums == true) {
							res = a / b - d * e;
						}
					} else if (secSubCurNums == true) {
						res = a / b * d;
						if (thrMultiCurNums == true) {
							res = a / b * d - e;
						}
					} else if (secAddCurNums == true) {
						res = a / b / d;
						if (thrDiviCurNums == true) {
							res = a / b / d + e;
						}
					}
				} else {
					res = a / b;
				}
				if (hascons == true) {
					if (res >= c || res <= c) {
						cout << res;
					} else {	
						cout << res;
					}
				} else {
					cout << res;
				}
			}
		}
		/*
		If you prefer using the old one:
		- Type In "OpenCalc" in "int main()"
		- Fill The "OpenCalc" function's args (arguements)
		*/
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
		void Obj() {
			int objType;
			int extObjType;
			int arrayObjType;
			string strArrayObjType;
			int extArrayObjType;
			int arrayObjAmount;
			int arrayLength;
			string strObjType;
			bool isString = false;
			bool isInt = false;
			bool isFloat = false;
			bool isDouble = false;
			bool isArray = false;
			string obj;
			
			/*
			================== Strings ==================
			*/
			
			string str_arrObj1;
			string str_arrObj2;
			string str_arrObj3;
			string str_arrObj4;
			string str_arrObj5;
			string str_arrObj6;
			string str_arrObj7;
			string str_arrObj8;
			
			/*
			================== Integers ==================
			*/
			
			int int_arrObj1;
			int int_arrObj2;
			int int_arrObj3;
			int int_arrObj4;
			int int_arrObj5;
			int int_arrObj6;
			int int_arrObj7;
			int int_arrObj8;
			
			/*
			================== Floats ==================
			*/
			
			float float_arrObj1;
			float float_arrObj2;
			float float_arrObj3;
			float float_arrObj4;
			float float_arrObj5;
			float float_arrObj6;
			float float_arrObj7;
			float float_arrObj8;
			
			/*
			================== Doubles ==================
			*/
			
			double double_arrObj1;
			double double_arrObj2;
			double double_arrObj3;
			double double_arrObj4;
			double double_arrObj5;
			double double_arrObj6;
			double double_arrObj7;
			double double_arrObj8;
			
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
					cout << "Object String: " <<  objStr;
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
					cout << "[1] string \n" << "[2] integer \n" << "[3] float \n" << "[4] double";
					cin >> arrayObjType;
					cout << "How many objects do you want for your array? \n";
					cout << "[1] 3 \n" << "[2] 5 \n" << "[3] 8 \n";
					cin >> arrayObjAmount;
					break;
			}
			
			/*
			string strArray[arrayLength];
			int intArray[arrayLength];
			float floatArray[arrayLength];
			double doubleArray[arrayLength];
			*/
			
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
			
			switch (arrayObjAmount)
			{
				case 1:
					arrayLength = 3;
					break;
				case 2:
					arrayLength = 5;
					break;
				case 3:
					arrayLength = 8;
					break;
			}
			
			if (arrayLength == 3)
			{
				cout << "Input the elements for your array: \n";
				if (strArrayObjType == "string")
				{
					cout << "Element One: ";
					cin >> str_arrObj1;
					cout << "Element Two: ";
					cin >> str_arrObj2;
					cout << "Element Three: ";
					cin >> str_arrObj3;
					string strArray[arrayLength] = {str_arrObj1, str_arrObj2, str_arrObj3};
					for (int i = 0; i < 3; ++i) {
						cout << strArray[i] << " ";
					}
				}
				else if (strArrayObjType == "integer")
				{
					cout << "Element One: ";
					cin >> int_arrObj1;
					cout << "Element Two: ";
					cin >> int_arrObj2;
					cout << "Element Three: ";
					cin >> int_arrObj3;
					int intArray[arrayLength] = {int_arrObj1, int_arrObj2, int_arrObj3};
					for (int i = 0; i < 3; ++i) {
						cout << intArray[i] << " ";
					}
				}
				else if (strArrayObjType == "float")
				{
					cout << "Element One: ";
					cin >> float_arrObj1;
					cout << "Element Two: ";
					cin >> float_arrObj2;
					cout << "Element Three: ";
					cin >> float_arrObj3;
					float floatArray[arrayLength] = {float_arrObj1, float_arrObj2, float_arrObj3};
					for (int i = 0; i < 3; ++i) {
						cout << floatArray[i] << " ";
					}
				}
				else if (strArrayObjType == "double")
				{
					cout << "Element One: ";
					cin >> double_arrObj1;
					cout << "Element Two: ";
					cin >> double_arrObj2;
					cout << "Element Three: ";
					cin >> double_arrObj3;
					double doubleArray[arrayLength] = {double_arrObj1, double_arrObj2, double_arrObj3};
					for (int i = 0; i < 3; ++i) {
						cout << doubleArray[i] << " ";
					}
				}
			}
			
			if (arrayLength == 5)
			{
				cout << "Input the elements for your array: \n";
				if (strArrayObjType == "string")
				{
					cout << "Element One: ";
					cin >> str_arrObj1;
					cout << "Element Two: ";
					cin >> str_arrObj2;
					cout << "Element Three: ";
					cin >> str_arrObj3;
					cout << "Element Four: ";
					cin >> str_arrObj4;
					cout << "Element Five: ";
					cin >> str_arrObj5;
					string strArray[arrayLength] = {str_arrObj1, str_arrObj2, str_arrObj3, str_arrObj4, str_arrObj5};
					for (int i = 0; i < 5; ++i) {
						cout << strArray[i] << " ";
					}
				}
				else if (strArrayObjType == "integer")
				{
					cout << "Element One: ";
					cin >> int_arrObj1;
					cout << "Element Two: ";
					cin >> int_arrObj2;
					cout << "Element Three: ";
					cin >> int_arrObj3;
					cout << "Element Four: ";
					cin >> int_arrObj4;
					cout << "Element Five: ";
					cin >> int_arrObj5;
					int intArray[arrayLength] = {int_arrObj1, int_arrObj2, int_arrObj3, int_arrObj4, int_arrObj5};
					for (int i = 0; i < 5; ++i) {
						cout << intArray[i] << " ";
					}
				}
				else if (strArrayObjType == "float")
				{
					cout << "Element One: ";
					cin >> float_arrObj1;
					cout << "Element Two: ";
					cin >> float_arrObj2;
					cout << "Element Three: ";
					cin >> float_arrObj3;
					cout << "Element Four: ";
					cin >> float_arrObj4;
					cout << "Element Five: ";
					cin >> float_arrObj5;
					float floatArray[arrayLength] = {float_arrObj1, float_arrObj2, float_arrObj3, float_arrObj4, float_arrObj5};
					for (int i = 0; i < 5; ++i) {
						cout << floatArray[i] << " ";
					}
				}
				else if (strArrayObjType == "double")
				{
					cout << "Element One: ";
					cin >> double_arrObj1;
					cout << "Element Two: ";
					cin >> double_arrObj2;
					cout << "Element Three: ";
					cin >> double_arrObj3;
					cout << "Element Four: ";
					cin >> double_arrObj4;
					cout << "Element Five: ";
					cin >> double_arrObj5;
					double doubleArray[arrayLength] = {double_arrObj1, double_arrObj2, double_arrObj3, double_arrObj4, double_arrObj5};
					for (int i = 0; i < 5; ++i) {
						cout << doubleArray[i] << " ";
					}
				}
			}
			
			if (arrayLength == 8)
			{
				cout << "Input the elements for your array: \n";
				if (strArrayObjType == "string")
				{
					cout << "Element One: ";
					cin >> str_arrObj1;
					cout << "Element Two: ";
					cin >> str_arrObj2;
					cout << "Element Three: ";
					cin >> str_arrObj3;
					cout << "Element Four: ";
					cin >> str_arrObj4;
					cout << "Element Five: ";
					cin >> str_arrObj5;
					cout << "Element Six: ";
					cin >> str_arrObj6;
					cout << "Element Seven: ";
					cin >> str_arrObj7;
					cout << "Element Eight: ";
					cin >> str_arrObj8;
					string strArray[arrayLength] = {str_arrObj1, str_arrObj2, str_arrObj3, str_arrObj4, str_arrObj5, str_arrObj6, str_arrObj7, str_arrObj8};
					for (int i = 0; i < 8; ++i) {
						cout << strArray[i] << " ";
					}
				}
				else if (strArrayObjType == "integer")
				{
					cout << "Element One: ";
					cin >> int_arrObj1;
					cout << "Element Two: ";
					cin >> int_arrObj2;
					cout << "Element Three: ";
					cin >> int_arrObj3;
					cout << "Element Four: ";
					cin >> int_arrObj4;
					cout << "Element Five: ";
					cin >> int_arrObj5;
					cout << "Element Six: ";
					cin >> int_arrObj6;
					cout << "Element Seven: ";
					cin >> int_arrObj7;
					cout << "Element Eight: ";
					cin >> int_arrObj8;
					int intArray[arrayLength] = {int_arrObj1, int_arrObj2, int_arrObj3, int_arrObj4, int_arrObj5, int_arrObj6, int_arrObj7, int_arrObj8};
					for (int i = 0; i < 8; ++i) {
						cout << intArray[i] << " ";
					}
				}
				else if (strArrayObjType == "float")
				{
					cout << "Element One: ";
					cin >> int_arrObj1;
					cout << "Element Two: ";
					cin >> float_arrObj2;
					cout << "Element Three: ";
					cin >> float_arrObj3;
					cout << "Element Four: ";
					cin >> float_arrObj4;
					cout << "Element Five: ";
					cin >> float_arrObj5;
					cout << "Element Six: ";
					cin >> float_arrObj6;
					cout << "Element Seven: ";
					cin >> float_arrObj7;
					cout << "Element Eight: ";
					cin >> float_arrObj8;
					float floatArray[arrayLength] = {float_arrObj1, float_arrObj2, float_arrObj3, float_arrObj4, float_arrObj5, float_arrObj6, float_arrObj7, float_arrObj8};
					for (int i = 0; i < 8; ++i) {
						cout << floatArray[i] << " ";
					}
				}
				else if (strArrayObjType == "double")
				{
					cout << "Element One: ";
					cin >> double_arrObj1;
					cout << "Element Two: ";
					cin >> double_arrObj2;
					cout << "Element Three: ";
					cin >> double_arrObj3;
					cout << "Element Four: ";
					cin >> double_arrObj4;
					cout << "Element Five: ";
					cin >> double_arrObj5;
					cout << "Element Six: ";
					cin >> double_arrObj6;
					cout << "Element Seven: ";
					cin >> double_arrObj7;
					cout << "Element Eight: ";
					cin >> double_arrObj8;
					double doubleArray[arrayLength] = {double_arrObj1, double_arrObj2, double_arrObj3, double_arrObj4, double_arrObj5, double_arrObj6, double_arrObj7, double_arrObj8};
					for (int i = 0; i < 8; ++i) {
						cout << doubleArray[i] << " ";
					}
				}
			}
		}
	
		void CustomClass() 
		{
			/*
			============================ Strings ============================
			*/
			
			string className;
			string strObjType;
			string opts;
			string accessOpts;
			string str_objField;
			
			/*
			============================ Integers ============================
			*/
			
			int optsObjType;
			int extObjType;
			int pubObjAmount = 0;
			int privObjAmount = 0;
			
			/*
			============================ Bools ============================
			*/
			
			bool isString = false;
			bool isInt = false;
			bool isFloat = false;
			bool isDouble = false;
			bool isPublic = false;
			bool isPrivate = false;
			bool hasConstructor = false;
			
			/*
			============================ Types ============================
			*/
			
			string strType;
			int intType;
			float floatType;
			double doubleType;
			
			/*
			============================ Objects ============================
			*/
			
			string objName;
			string objName2;
			string objName3;
			string objName4;
			string objName5;
			string objName6;
			string objName7;
			string objName8;
			
			string privobjName;
			string privobjName2;
			string privobjName3;
			string privobjName4;
			string privobjName5;
			string privobjName6;
			string privobjName7;
			string privobjName8;
			
			string objStr;
			int objInt;
			float objFloat;
			double objDouble;
			
			cout << "Input a name for your class: \n";
			cin >> className;
			cout << "Include a constructor? [y/n]: ";
			cin >> opts;
			
			if (opts == "y") {
				hasConstructor = true;
			} else if (opts == "n") {
				hasConstructor = false;
			} else {
				cout << "Unknown character: " << opts;
			}
			
			cout << "Input the amount of public objects (Maximum is 8): \n";
			cin >> pubObjAmount;
			isPublic = true;
			cout << "Input the amount of private objects (Maximum is 8): \n";
			cin >> privObjAmount;
			isPrivate = true;
			
			if (pubObjAmount > 8 || privObjAmount > 8) {
				cout << "FUCK YOU, DONT GO ABOVE 8 I SAID.";
			}
			
			switch (pubObjAmount)
			{
				case 1:
					cout << "Object 1 (name): ";
					cin >> objName;
					cout << "Object 1 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					break;
				case 2:
					cout << "Object 1 (name): ";
					cin >> objName;
					cout << "Object 1 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 2 (name): ";
					cin >> objName2;
					cout << "Object 2 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					break;
				case 3:
					cout << "Object 1 (name): ";
					cin >> objName;
					cout << "Object 1 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 2 (name): ";
					cin >> objName2;
					cout << "Object 2 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 3 (name): ";
					cin >> objName3;
					cout << "Object 3 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					break;
				case 4:
					cout << "Object 1 (name): ";
					cin >> objName;
					cout << "Object 1 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 2 (name): ";
					cin >> objName2;
					cout << "Object 2 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 3 (name): ";
					cin >> objName3;
					cout << "Object 3 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 4 (name): ";
					cin >> objName4;
					cout << "Object 4 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					break;
				case 5:
					cout << "Object 1 (name): ";
					cin >> objName;
					cout << "Object 1 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 2 (name): ";
					cin >> objName2;
					cout << "Object 2 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 3 (name): ";
					cin >> objName3;
					cout << "Object 3 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 4 (name): ";
					cin >> objName4;
					cout << "Object 4 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 5 (name): ";
					cin >> objName5;
					cout << "Object 5 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					break;
				case 6:
					cout << "Object 1 (name): ";
					cin >> objName;
					cout << "Object 1 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 2 (name): ";
					cin >> objName2;
					cout << "Object 2 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 3 (name): ";
					cin >> objName3;
					cout << "Object 3 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 4 (name): ";
					cin >> objName4;
					cout << "Object 4 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 5 (name): ";
					cin >> objName5;
					cout << "Object 5 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 6 (name): ";
					cin >> objName6;
					cout << "Object 6 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					break;
				case 7:
					cout << "Object 1 (name): ";
					cin >> objName;
					cout << "Object 1 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 2 (name): ";
					cin >> objName2;
					cout << "Object 2 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 3 (name): ";
					cin >> objName3;
					cout << "Object 3 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 4 (name): ";
					cin >> objName4;
					cout << "Object 4 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 5 (name): ";
					cin >> objName5;
					cout << "Object 5 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 6 (name): ";
					cin >> objName6;
					cout << "Object 6 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 7 (name): ";
					cin >> objName7;
					cout << "Object 7 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					break;
				case 8:
					cout << "Object 1 (name): ";
					cin >> objName;
					cout << "Object 1 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 2 (name): ";
					cin >> objName2;
					cout << "Object 2 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 3 (name): ";
					cin >> objName3;
					cout << "Object 3 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 4 (name): ";
					cin >> objName4;
					cout << "Object 4 (type): \n";
					cout << "[1] string \n[2] integer \n [3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 5 (name): ";
					cin >> objName5;
					cout << "Object 5 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 6 (name): ";
					cin >> objName6;
					cout << "Object 6 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 7 (name): ";
					cin >> objName7;
					cout << "Object 7 (type): \n";
					cout << "[1] string \n [2] integer \n [3] float \n [4] double \n";
					cin >> optsObjType;
					cout << "Object 8 (name): ";
					cin >> objName8;
					cout << "Object 8 (type): \n";
					cout << "[1] string \n [2] integer \n [3] float \n [4] double \n";
					cin >> optsObjType;
					break;
			}
			
			switch (privObjAmount)
			{
				case 1:
					cout << "Object 1 (name): ";
					cin >> privobjName;
					cout << "Object 1 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					break;
				case 2:
					cout << "Object 1 (name): ";
					cin >> privobjName;
					cout << "Object 1 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 2 (name): ";
					cin >> privobjName2;
					cout << "Object 2 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					break;
				case 3:
					cout << "Object 1 (name): ";
					cin >> privobjName;
					cout << "Object 1 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 2 (name): ";
					cin >> privobjName2;
					cout << "Object 2 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 3 (name): ";
					cin >> privobjName3;
					cout << "Object 3 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					break;
				case 4:
					cout << "Object 1 (name): ";
					cin >> privobjName;
					cout << "Object 1 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 2 (name): ";
					cin >> privobjName2;
					cout << "Object 2 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 3 (name): ";
					cin >> privobjName3;
					cout << "Object 3 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 4 (name): ";
					cin >> privobjName4;
					cout << "Object 4 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					break;
				case 5:
					cout << "Object 1 (name): ";
					cin >> privobjName;
					cout << "Object 1 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 2 (name): ";
					cin >> privobjName2;
					cout << "Object 2 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 3 (name): ";
					cin >> privobjName3;
					cout << "Object 3 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 4 (name): ";
					cin >> privobjName4;
					cout << "Object 4 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 5 (name): ";
					cin >> privobjName5;
					cout << "Object 5 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					break;
				case 6:
					cout << "Object 1 (name): ";
					cin >> privobjName;
					cout << "Object 1 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 2 (name): ";
					cin >> privobjName2;
					cout << "Object 2 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 3 (name): ";
					cin >> privobjName3;
					cout << "Object 3 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 4 (name): ";
					cin >> privobjName4;
					cout << "Object 4 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 5 (name): ";
					cin >> privobjName5;
					cout << "Object 5 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 6 (name): ";
					cin >> privobjName6;
					cout << "Object 6 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					break;
				case 7:
					cout << "Object 1 (name): ";
					cin >> privobjName;
					cout << "Object 1 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 2 (name): ";
					cin >> privobjName2;
					cout << "Object 2 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 3 (name): ";
					cin >> privobjName3;
					cout << "Object 3 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 4 (name): ";
					cin >> privobjName4;
					cout << "Object 4 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 5 (name): ";
					cin >> privobjName5;
					cout << "Object 5 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 6 (name): ";
					cin >> privobjName6;
					cout << "Object 6 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 7 (name): ";
					cin >> privobjName7;
					cout << "Object 7 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					break;
				case 8:
					cout << "Object 1 (name): ";
					cin >> privobjName;
					cout << "Object 1 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 2 (name): ";
					cin >> privobjName2;
					cout << "Object 2 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 3 (name): ";
					cin >> privobjName3;
					cout << "Object 3 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 4 (name): ";
					cin >> privobjName4;
					cout << "Object 4 (type): \n";
					cout << "[1] string \n[2] integer \n [3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 5 (name): ";
					cin >> privobjName5;
					cout << "Object 5 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 6 (name): ";
					cin >> privobjName6;
					cout << "Object 6 (type): \n";
					cout << "[1] string \n[2] integer \n[3] float \n[4] double \n";
					cin >> optsObjType;
					cout << "Object 7 (name): ";
					cin >> privobjName7;
					cout << "Object 7 (type): \n";
					cout << "[1] string \n [2] integer \n [3] float \n [4] double \n";
					cin >> optsObjType;
					cout << "Object 8 (name): ";
					cin >> privobjName8;
					cout << "Object 8 (type): \n";
					cout << "[1] string \n [2] integer \n [3] float \n [4] double \n";
					cin >> optsObjType;
					break;
			}
			
			switch (optsObjType)
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
			}
			
			cout << "Select an Object from " << className  << ": \n";
			cout << "Public Objects: \n" << objName << "\n" << objName2 << "\n" << objName3 << "\n" << objName4 << "\n" << objName5 << "\n" << objName6 << "\n" << objName7 << "\n" << objName8 << "\n";
			cout << "Private Objects: \n" << privobjName << "\n" << privobjName2 << "\n" << privobjName3 << "\n" << privobjName4 << "\n" << privobjName5 << "\n" << privobjName6 << "\n" << privobjName7 << "\n" << privobjName8 << "\n";	
			
			if (isPublic == true)
			{
				cin >> str_objField;
				if (str_objField == objName || str_objField == objName2 || str_objField == objName3 || str_objField == objName4 || str_objField == objName5 || str_objField == objName6 || str_objField == objName7 || str_objField == objName8)
				{
					if (strObjType == "string") {
						cout << "Input some string: \n";
						cin >> objStr;
						cout << "Name: " << str_objField << "\n";
						cout << "String: " << objStr << "\n";
					} else if (strObjType == "integer") {
						cout << "Input some numbers: \n";
						cin >> objInt;
						cout << "Name: " << str_objField << "\n";
						cout << "Integer: " << objInt << "\n";
					} else if (strObjType == "float") {
						cout << "Input some numbers: \n";
						cin >> objFloat;
						cout << "Name: " << str_objField << "\n";
						cout << "Float: " << objFloat << "\n";
					} else if (strObjType == "double") {
						cout << "Input some numbers: \n";
						cin >> objDouble;
						cout << "Name: " << str_objField << "\n";
						cout << "Double: " << objDouble << "\n";
					}
				} else {
					cout << "Unknown Object: " << str_objField;
				}
			}
			
			else if (isPrivate == true)
			{
				cout << "Object is private and cannot be accessed.";
			}
		}
};

Create Create;

/*
============================ Code Writing ============================
*/

int main()
{
	
	// Write custom code here
	
	return 0;
	
}
