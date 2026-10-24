  
/*Characters for the ASCII CodesWrite a program that uses a loop to display the characters for each
ASCII code 32 through 127. Display 16 characters on each line with one space between characters.//
*/
#include <iostream>
using namespace std;

int main()
{
	for (int count = 32; count <= 127; ++count)
	{
		cout << char(count);
		if (count % 16 == 0)
			cout << endl;
	}

}

