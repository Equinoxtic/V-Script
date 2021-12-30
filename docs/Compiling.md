# Installation for compiling with MinGW

MinGW (download): https://sourceforge.net/projects/mingw/

## Installing Packages

- Open up the MinGW installer
- You should see this prompt:

![image](https://user-images.githubusercontent.com/86795271/147414297-d5be26e3-ff11-4274-917f-a99065dc2820.png)

- Click "Install" and after that "Continue"
- After that you should see this prompt shown here (which includes the packages for C++ compiling):

![image](https://user-images.githubusercontent.com/86795271/147414342-b96834ac-9b37-4c95-95be-0d042c54da80.png)

- Right click on each of these packages and mark them for installation (all of them by the way) - (shown here):

![image](https://user-images.githubusercontent.com/86795271/147414381-2dd3b604-bb6e-4f1b-acb0-4e679691c6c3.png)

![image](https://user-images.githubusercontent.com/86795271/147414732-abebfaa1-4876-415d-a763-b3d4310df288.png)

- Then click on "Installation", and then click on "Apply Changes"

![image](https://user-images.githubusercontent.com/86795271/147414394-aeef8caf-55cf-4b79-aa5d-ff2b4838cec7.png)

- After that it should lead you to another prompt
- And then click the "Apply"

- Wait for the Installation to finish...
- Ater the installation is finished click on "Close"
- And your done for installing the MinGW compiler!

## Adding MinGW to the System Enviroment Variables

- Open up your C: Folder
- Open up "MinGW > bin", and then copy that path
- Type this in:

![image](https://user-images.githubusercontent.com/86795271/147414524-742a7611-b21c-4373-a9cd-36659b713512.png)

- Click on "Path" (shown here):

![image](https://user-images.githubusercontent.com/86795271/147414540-87869fdc-9219-49c5-90ce-22b5fdca0f3b.png)

- And then "Edit":

![image](https://user-images.githubusercontent.com/86795271/147414558-aeda6c33-9434-40f7-811e-b4c5bc276a2b.png)

- And then click on "New"
- And paste in the path we copied earlier (Or copy here if you didn't) > (C:\MinGW\bin)

![image](https://user-images.githubusercontent.com/86795271/147414619-2ce92189-6e3a-4564-95f2-33d51b9930ac.png)

- And you're done for adding MinGW to the System Enviroment Variables!
- To test if the compiler works open up "cmd" and then type in "g++ --version"
- It should show this up:

![image](https://user-images.githubusercontent.com/86795271/147414694-4b6c77b6-4f76-4d48-be1b-ab61e7b5df62.png)

- Next step, keep "cmd" on, or open it up again if you'd happen to close it.
- Type all of these in "cmd":

```
mkdir SampleProgram
cd SampleProgram
code .
```

- It should open up VS-Code
- Next, make a new file and name it anything, and it SHOULD have a '.cpp' at the end.

![image](https://user-images.githubusercontent.com/86795271/147572026-ca21b440-929b-4542-827f-604c9bea1816.png)

![image](https://user-images.githubusercontent.com/86795271/147572061-59506938-39a7-40ed-aff9-9ec0b761f25b.png)

- Next copy and paste his code:

```
#include<iostream>

using namespace std;

int main()
{
    cout << "Hello World!";
}
```

- After that, press CTRL + SHIFT + B.
- And then find, "C/C++: g++.exe build active file"
- If you found it, press enter and it should make the .exe file for your program
- Next after that, open up your terminal and the type in: 

```
.\{Filename}
```

- And it should output the code in the terminal.

And there we go! You're pretty much ready to compile the program.

## Dev-C++ Compiling

- Install Dev-C++

Dev-C++ (download): https://sourceforge.net/projects/orwelldevcpp/

- Then once Dev-C++ is installed open it up, and then click "File"

![image](https://user-images.githubusercontent.com/86795271/147767162-7640488c-1f2c-4235-ac87-991ce901e34a.png)

- Then "New", and then "Project..."

![image](https://user-images.githubusercontent.com/86795271/147767176-049769ef-9a76-45ad-b1ad-5c6c8f03ec7a.png)

![image](https://user-images.githubusercontent.com/86795271/147767206-d9d721fd-dba0-4932-8aec-53ea783c90d0.png)

- And then select "Empty Project"

![image](https://user-images.githubusercontent.com/86795271/147767223-57408fd5-7258-4908-8430-b9e492969180.png)

- Name it whatever you want
- Once after that, delete the current file that you're on by right-clicking on it, and then click on "Remove File"

![image](https://user-images.githubusercontent.com/86795271/147767301-eec2d781-c52f-4447-ae7c-58e0884fcf7b.png)

- After that, right-click on the project and then click "Add To Project"

![image](https://user-images.githubusercontent.com/86795271/147767326-810e0ee7-4b3c-435f-a1fc-f1f7bf16a667.png)

- And then find and open up your extracted folder of V-Script and add "MainScript.cpp"

![image](https://user-images.githubusercontent.com/86795271/147767421-50a2a611-5c6a-414b-a5fe-888862ab669f.png)

- After that, click on "Tools" then "Compiler Options"

![image](https://user-images.githubusercontent.com/86795271/147767637-27864a41-0dbe-43fc-84e4-58fd10c3d279.png)

- Then go to "Settings" then "Linker" and then set "Generate debugging information (-g3) to "Yes"

![image](https://user-images.githubusercontent.com/86795271/147767784-fd5a99c9-bb7a-40fe-825c-37b86201ec82.png)

- Next after that, press F9 to compile the program

And then you're done for compiling with Dev-C++!
