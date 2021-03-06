/*
V-Script-Main-Version
1.4
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
============================ Sub-Functions ============================
*/

void throwError(string errStr)
{
	cout << errStr;
	isError = true;
}

void outputStr(string str)
{
	cout << str;
}

void outputNum(int num)
{
	cout << num;
}

void outputFloat(float num)
{
	cout << num;
}

void outputCustomFunc(string funcName)
{
	cout << funcName << "() {\n";
}

/*
============================ Structures ============================
*/

struct Object
{
	string name;
	string objStr;
	string opts;
	string objTypeStr;
	int type;
	int objInt;
	float objFloat;
	bool isString = false;
	bool isInt = false;
	bool isFloat = false;
	bool outputCode = false;
};

/*
============================ Main Functions ============================
*/

void SetObjectData(Object);
void GetObjectData(Object);

void CreateArray()
{
	string objType;
	int extObjType;
	int opts;
	int arrayLength;

	cout << "Array Type: \n";
	cout << "[1] string\n[2] integer\n[3] float\n[4] double\n\n";
	cin >> opts;

	switch (opts)
	{
		case 1:
			objType = "string";
			extObjType = 1;
			break;

		case 2:
			objType = "integer";
			extObjType = 2;
			break;

		case 3:
			objType = "float";
			extObjType = 3;
			break;

		case 4:
			objType = "double";
			extObjType = 4;
			break;
	}

	cout << "\nInput the length for your array: ";
	cin >> arrayLength;
	cout << "\nInput the elements for your array: \n";

	string stringArray[arrayLength];
	int intArray[arrayLength];
	float floatArray[arrayLength];
	double doubleArray[arrayLength];

	switch (extObjType)
	{
		case 1:
			for (int i = 0; i < arrayLength; i++) {
				cin >> stringArray[i];
			}
			cout << "\nArray Elements: \n";
			for (int i = 0; i < arrayLength; i++) {
				cout << stringArray[i] << " ";
			}
		break;

		case 2:
			for (int i = 0; i < arrayLength; i++) {
				cin >> intArray[i];
			}
			cout << "\nArray Elements: \n";
			for (int i = 0; i < arrayLength; i++) {
				cout << intArray[i] << " ";
			}
		break;

		case 3:
			for (int i = 0; i < arrayLength; i++) {
				cin >> floatArray[i];
			}
			cout << "\nArray Elements: \n";
			for (int i = 0; i < arrayLength; i++) {
				cout << floatArray[i] << " ";
			}
		break;

		case 4:
			for (int i = 0; i < arrayLength; i++) {
				cin >> doubleArray[i];
			}
			cout << "\nArray Elements: \n";
			for (int i = 0; i < arrayLength; i++) {
				cout << doubleArray[i] << " ";
			}
		break;
	}
}

int res;

/*
============================ Main Classes ============================
*/

class Out {
	public:
		void OutStr(string oStr) {
			outputStr(oStr);
		}

		void OutInt(int oNum) {
			outputNum(oNum);
		}

		void OutFloat(float oNum){
			outputFloat(oNum);
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
			int a;
			int b;

			void InitNums()
			{
				cout << "Input the first number: ";
				cin >> a;
				cout << "Input the second number: ";
				cin >> b;
			}

			void Add() {
				res = a + b;
			}

			void Sub() {
				res = a - b;
			}

			void Multiply() {
				res = a * b;
			}

			void Divide() {
				res = a / b;
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

		void CustomFunction()
		{
			int argLength;
			int curArrayLength;
			int curNum;
			int opts;
			int ivar;
			int extCodeBlockType;
			string codeBlockType;
			string coutOpts;
			string functionName;
			string curStr;
			string curArrayName;

			cout << "=== Function Builder ===\n";
			cout << "Input a name for your function: ";
			cin >> functionName;

			cout << "void " << functionName << "() {...}\n";

			cout << "Select a preset code block for the function: \n";
			cout << "[1] Output string\n[2] Output number\n[3] Output all array elements\n";
			cin >> opts;

			switch (opts)
			{
				case 1:
					codeBlockType = "string";
					extCodeBlockType = 1;
					cout << "Input your string: ";
					cin >> curStr;
					cout << "String: ";
					outputStr(curStr);
					break;

				case 2:
					codeBlockType = "integer";
					extCodeBlockType = 2;
					cout << "Input your number: ";
					cin >> curNum;
					cout << "Number: ";
					outputNum(curNum);
					break;

				case 3:
					codeBlockType = "array";
					extCodeBlockType = 3;
					cout << "Input an array name: ";
					cin >> curArrayName;
					cout << curArrayName << "[]\n";
					cout << "\nInput the amount of elements you want for your array: ";
					cin >> curArrayLength;
					cout << curArrayName << "[" << curArrayLength << "]\n";
					cout << "for (int i = null;) {...}\n";
					cout << "\nInput the value for 'i': ";
					cin >> ivar;
					cout << "for (int i = " << ivar << "; i < " << curArrayLength << "; i++) {...}\n\n";
					string curArrayList[curArrayLength];
					cout << "Array Elements: \n";
					for (int i = ivar; i < curArrayLength; i++) {
						cout << curArrayList[i] << " ";
					}
					break;
			}
		}

		void CustomClass()
		{
			string className;
			string opts;
			int constructArgLength;
			int objLength;
			bool hasContructor;

			cout << "=== Class Builder ===\nEnter a name for your class: ";
			cin >> className;

			cout << "Include a contructor? [y/n]: ";
			cin >> opts;

			if (opts == "y") {
				hasContructor = true;
			} else if (opts == "n") {
				hasContructor = false;
			} else {
				throwError("Unknown Character.");
			}

			if (hasContructor == true)
			{
				cout << "\nInput the amount of arguments for your contructor: ";
				cin >> constructArgLength;
				string contructorArgList[constructArgLength];
				cout << "Input the name of the arguments: \n";
				for (int i = 0; i < constructArgLength; i++) {
					cin >> contructorArgList[i];
				}
				cout << "\nConstructor arguments: ";
				for (int i = 0; i < constructArgLength; i++) {
					cout << contructorArgList[i] << " ";
				}
			}

			cout << "\nInput the amount of objects for your class: ";
			cin >> objLength;
			string objList[objLength];
			cout << "Input the name for the objects of your class: \n";
			for (int i = 0; i < objLength; i++) {
				cin >> objList[i];
			}
			cout << "\nClass Objects: \n";
			for (int i = 0; i < objLength; i++) {
				cout << objList[i] << " ";
			}
		}
};

Create VCreate;

class Loops
{
	public:
		void cinFor()
		{
			int ivar;
			int a;
			int b;
			int c;
			int i;
			string secopts;
			string thropts;
			bool opta = false;
			bool optb = false;
			bool cont;
			bool br;

			cout << "=== For Loop Builder ===\nFirst For Loop method / Second For Loop method [1/2]: ";

			int opts;

			cin >> opts;


			cout << "for (int i = null;)\n";
			cout << "Input the value for 'i': ";
			cin >> ivar;

			switch (opts)
			{
				case 1:
					opta = true;
					break;
				case 2:
					optb = true;
					break;
			}

			if (opta == true)
			{
				cout << "for (int i = " << ivar << "; i <= a;\n";
				cout << "Input the value for 'a': ";
				cin >> a;
				cout << "for (int i = " << ivar << "; i <= " << a << "; i + b\n)";
				cout << "Input the value for 'b': ";
				cin >> b;
				cout << "for (int i = " << ivar << "; i <= " << a << "; i + " << b << ") {...}\n";
			}

			if (optb == true)
			{
				cout << "for (int i = " << ivar << "; i <= a;\n";
				cout << "Input the value for 'a': ";
				cin >> a;
				cout <<"for (int i = " << ivar << "; i <= " << a << "; i++) {...}";
			}

			cout << "if (i == c) {...}\n";
			cout << "Input the value for 'c': ";
			cin >> c;

			cout << "Set Break Syntax as [t/f]: ";
			cin >> secopts;

			if (secopts == "t") {
				br = true;
			} else if (secopts == "f") {
				br = false;
			} else {
				throwError("Unknown Character.");
			}

			cout << "Set Cotinue Syntax as [t/f]: ";
			cin >> thropts;

			if (thropts == "t") {
				cont = true;
			} else if (thropts == "f") {
				cont = false;
			} else {
				throwError("Unknown Character.");
			}

			if (opta == true)
			{
				for (int i = ivar; i <= a; i + b)
				{
					i++;
					cout << i << " ";
					if (i == c)
					{
						if (cont == true) {
							continue;
						} else if (br == true) {
							break;
						}
					}
				}
			}

			if (optb == true)
			{
				for (int i = ivar; i <= a; i++)
				{
					cout << i << " ";
					if (i == c)
					{
						if (cont == true) {
							continue;
						} else if (br == true) {
							break;
						}
					}
				}
			}
		}

		void cinWhile()
		{
			int ivar;
			int a;
			int b;
			bool opta = false;
			bool optb = false;
			bool cont;
			bool br;
			string secopts;
			string thropts;

			cout << "=== While Loop builder ===\nFirst While Loop method / Second WhileLoop method [1/2]: ";

			int opts;

			cin >> opts;

			switch (opts)
			{
				case 1:
					opta = true;
					break;
				case 2:
					optb = true;
					break;
			}

			cout << "int i = null;\n";
			cout << "Input the value for 'i': ";
			cin >> ivar;

			cout << "while (i < a) {...}\n";
			cout << "Input the value for 'a': ";
			cin >> a;

			cout << "if (i == b) {...}\n";
			cout << "Input the value for 'b': ";
			cin >> b;

			cout << "Set Break Syntax as [t/f]: ";
			cin >> secopts;

			if (secopts == "t") {
				br = true;
			} else if (secopts == "f") {
				br = false;
			} else {
				throwError("Unknown Character.");
			}

			cout << "Set Continue Syntax as [t/f]: ";
			cin >> thropts;

			if (thropts == "t") {
				cont = true;
			} else if (thropts == "f") {
				cont = false;
			} else {
				throwError("Unknown Character.");
			}

			if (opta == true) {
				int i = ivar;
				while (i < a)
				{
					cout << i << " ";
					i++;
					if (i == b)
					{
						if (br == true) {
							break;
						} else if (cont == true)  {
							continue;
						}
					}
				}
			}

			if (optb == true) {
				int i = ivar;
				do {
					i++;
					cout << i << " ";
					if (i == b)
					{
						if (br == true) {
							break;
						} else if (cont == true) {
							continue;
						}
					}
				}
				while (i < a);
			}
		}
};

Loops CinLoops;

/*
============================ Action Types ============================
*/

class ActionTypes
{
	public:
	int extClassType;
	string strClassType;

	void CalculateClassSelector()
	{
		int optFuncs;

		cout << "Select a function / class: \n";
		cout << "[1] CalcStart (Function)\n[2] Math (Class)\n";
		cin >> optFuncs;

		switch (optFuncs)
		{
			case 1:
				Calculate.CalcStart();
			break;

			case 2:
				MathSelector();
			break;
		}
	}

	void MathSelector()
	{
		int opts;

		cout << "Select a function: \n";
		cout << "[1] Add()\n[2] Sub()\n[3] Multiply()\n[4] Divide()\n";
		cin >> opts;

		Calculate.Math.InitNums();

		switch (opts)
		{
			case 1:
				Calculate.Math.Add();
			break;

			case 2:
				Calculate.Math.Sub();
			break;

			case 3:
				Calculate.Math.Multiply();
			break;

			case 4:
				Calculate.Math.Divide();
			break;
		}
		cout << res;
	}

	void CreateSelector()
	{
		int opts;

		cout << "Select a function: \n";
		cout << "[1] Obj()\n[2] CustomFunction()\n[3] CustomClass()\n";
		cin >> opts;

		switch (opts)
		{
			case 1:
				VCreate.Obj();
			break;

			case 2:
				VCreate.CustomFunction();
			break;

			case 3:
				VCreate.CustomClass();
			break;
		}
	}

	void LoopSelector()
	{
		string opts;

		cout << "Select a loop type: \n";
		cout << "[cinF] For Loop | [cinW] While Loop\n";
		cin >> opts;

		if (opts == "cinF") {
			CinLoops.cinFor();
		} else if (opts == "cinW") {
			CinLoops.cinWhile();
		} else {
			throwError("Unknown String.");
		}
	}

	void ClassSelector()
	{
		int classType;

		cout << "--- Classes ---\n\n";
		cout << "Select a class:\n[1] Calculator\n[2] Create\n[3] Loops\n";
		cin >> classType;

		switch (classType)
		{
			case 1:
				strClassType = "calculator";
				extClassType = 1;
				CalculateClassSelector();
			break;

			case 2:
				strClassType = "create";
				extClassType = 2;
				CreateSelector();
			break;

			case 3:
				strClassType = "loops";
				extClassType = 3;
				LoopSelector();
			break;
		}
	}

	void ObjectSelectionState()
	{
		Object Sample;
		int opts;

		cout << "Select an Object: \n";
		cout << "[1] Sample\n";
		cin >> opts;

		switch (opts)
		{
			case 1:
				SetObjectData(Sample);
			break;
		}
	}
};

ActionTypes Actions;

/*
============================ Code Writing ============================
*/

int main()
{

	// Main Stuff

	string strActionType;
	int actionType;
	int extActionType;

	cout << "===== V-Script =====\n\n";
	cout << "Select an Action: \n";
	cout << "--- Functions ---\n[1] Create an array\n[2] Set and Get Object Data\n[3] Class Selection...\n";
	cin >> actionType;

	switch (actionType)
	{
		case 1:
			strActionType = "create_array";
			extActionType = 1;
			CreateArray();
		break;

		case 2:
			strActionType = "set_and_get_obj_data";
			extActionType = 2;
			Actions.ObjectSelectionState();
		break;

		case 3:
			strActionType = "class_selector";
			extActionType = 3;
			Actions.ClassSelector();
		break;
	}

	// Write custom code here

	return 0;

}

void SetObjectData(Object Sample)
{
	cout << "Enter name: ";
	cin >> Sample.name;
	cout << "Object type: \n";
	cout << "[1] String\n[2] Integer\n[3] Float\n";
	cin >> Sample.type;

	switch (Sample.type)
	{
		case 1:
			Sample.isString = true;
			Sample.objTypeStr = "String";
			cout << "Input the string for your Object: ";
			cin >> Sample.objStr;
		break;

		case 2:
			Sample.isInt = true;
			Sample.objTypeStr = "Integer";
			cout << "Input the numbers for your Object: ";
			cin >> Sample.objInt;
		break;

		case 3:
			Sample.isFloat = true;
			Sample.objTypeStr = "Float";
			cout << "Input the numbers for your Object: ";
			cin >> Sample.objFloat;
		break;
	}

	cout << "Output code? [y/n]: ";
	cin >> Sample.opts;

	if (Sample.opts == "y") {
		Sample.outputCode = true;
	} else if (Sample.opts == "n") {
		Sample.outputCode = false;
	} else {
		throwError("Unknown Character.");
	}

	if (Sample.outputCode == true)
	{
		GetObjectData(Sample);
	}
}

void GetObjectData(Object Sample)
{
	cout << "Name: " << Sample.name << "\n";
	cout << "Type: " << Sample.objTypeStr << "\n";
	if (Sample.isString == true) {
		cout << "String: " << Sample.objStr;
	} else if (Sample.isInt == true) {
		cout << "Integer: " << Sample.objInt;
	} else if (Sample.isFloat == true) {
		cout << "Float: " << Sample.objFloat;
	}
}
