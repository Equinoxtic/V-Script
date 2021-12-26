/*
V-Script-Dev-Version
1.0b-dev
*/

#include<iostream>
#include<stdlib.h>
#include<fstream>

/*
This .cpp file is only exclusive for the 'Main Developer'
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

void throwError(string errStr)
{
	cout << errStr;
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

class MCRedstone
{
	public:
		void CreateCircuit()
		{
			/*
			=== Strings ===
			*/

			string strSource;
			string strFace;
			string strOutput;
			string coutOpts;

			/*
			=== Ints ===
			*/

			int optsFacing;
			int optsSrcBlock;
			int extSrcBlock;
			int extSrcFace;
			int redstoneLength;

			/*
			=== Floats ===
			*/

			float redstonePower;
			float redstoneSignal = redstonePower - 0.5;

			/*
			=== Bools - Source Block ===
			*/

			bool isLever;
			bool isBOR;
			bool isDS;
			bool isOre;
			bool isButton;
			bool isPressure;

			/*
			=== Bools - Face ===
			*/

			bool isForward = false;
			bool isBackward = false;
			bool isLeft = false;
			bool isRight = false;

			/*
			=== Arrays ===
			*/

			string redstoneList[redstoneLength];

			/*
			=== Other ===
			*/

			bool coutRedstoneList = false;
			bool powered = false;

			cout << "Select Source Block: \n";
			cout << "[1] Lever\n[2] Block Of Redstone\n[3] Daylight Sensor\n[4] Redstone Ore\n[5] Button\n[6] Pressure Plate";
			cin >> optsSrcBlock;

			switch (optsSrcBlock)
			{
				case 1:
					strSource = "lever";
					isLever = true;
					extSrcBlock = 1;
					break;
				case 2:
					strSource = "block of redstone";
					isBOR = true;
					extSrcBlock = 2;
					break;
				case 3:
					strSource = "daylight sensor";
					isDS = true;
					extSrcBlock = 3;
					break;
				case 4:
					strSource = "redstone ore";
					isOre = true;
					extSrcBlock = 4;
					break;
				case 5:
					strSource = "button";
					isButton = true;
					extSrcBlock = 5;
					break;
				case 6:
					strSource = "pressure plate";
					isPressure = true;
					extSrcBlock = 6;
					break;
			}

			cout << "Input the amount of Redstone (Maximum is 64): \n";
			cin >> redstoneLength;

			if (redstoneLength > 64) {
				cout << "Maximum is 64.";
			}

			switch (extSrcBlock)
			{
				case 1:
					strOutput = "Source: lever";
					redstonePower = 7.5;
					break;
				case 2:
					strOutput = "Source: block of redstone";
					redstonePower = 9.5;
					break;
				case 3:
					strOutput = "Source: daylight sensor";
					redstonePower = 6.0;
					break;
				case 4:
					strOutput = "Source: redstone ore";
					redstonePower = 6.5;
					break;
				case 5:
					strOutput = "Source: button";
					redstonePower = 7.5;
					break;
				case 6:
					strOutput = "Source: pressure plate";
					redstonePower = 7.0;
					break;
			}
			
			cout << strOutput;
			cout << "Redstone Power: " << redstonePower << "\n";
			cout << "Input the directions for the redstones: \n";
			cout << "[1] Left\n[2] Forward\n[3] Backward\n[4] Right";
			cin >> optsFacing;

			switch (optsFacing)
			{
				case 1:
					isLeft = true;
					strFace = "left";
					extSrcFace = 1;
					break;
				case 2:
					isForward = true;
					strFace = "forward";
					extSrcFace = 2;
					break;
				case 3:
					isBackward = true;
					strFace = "backward";
					extSrcFace = 3;
					break;
				case 4:
					isRight = true;
					strFace = "right";
					extSrcFace = 4;
					break;
			}

			for (int i = 0; i < redstoneLength; i++) {
				cin >> redstoneList[i];
			}

			cout << "Print all? [y/n]: ";
			cin >> coutOpts;

			if (coutOpts == "y") {
				coutRedstoneList = true;
			} else if (coutOpts == "n") {
				coutRedstoneList = false;
			} else {
				cout << "Unknown character: " << coutOpts;
			}

			if (coutRedstoneList == true) {
				for (int i = 0; i < redstoneLength; i++) {
					cout << redstoneList[i] << "\n";
				}
			}

			
		}
};

MCRedstone MCRCreate;

/*
============================ Code Writing ============================
*/

int main()
{
	
	// Write custom code

	// For exiting

	string pressC;
	cout << "Type in ''C'' to close the program\n> ";
	cin >> pressC;

	if (pressC != "C")
	{
		throwError("Unknown character.");
	}
	
	return 0;
	
}
