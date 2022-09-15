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


int main()
{
	Example_KeyBoard();

	return 0;
}