#include <iostream>

using namespace std;

#include "../ajwKeyBoard/KeyBoard.h"
void Example_KeyBoard()
{
	ajwCommon::KeyBoard* keyBoard = new ajwCommon::KeyBoard();

	while (true)
	{
		keyBoard->Update();
		if (keyBoard->Down(VK_F1))
			cout << "Hello World" << endl;
	}

	delete keyBoard;
}


#include "../ajwUtility/Utility.h"
void Example_Utility()
{
	wstring a = L"abc";

	string b = Utility::ToString(a);

	string test = "abc/a2c/ab3/";

	vector<string> dest;

	Utility::SplitString(dest, test, "/");
	for (string s : dest)
		cout << s << endl;

	cout << b << endl;

	Utility::CreateFolders("abd");

}


int main()
{
	//Example_KeyBoard();

	Example_Utility();

	return 0;
}