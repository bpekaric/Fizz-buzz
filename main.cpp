/* Copyright 2018 Borna Pekaric

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

Originally written in Orwell Dev-C++ 5.11*/

#include <iostream>
using namespace std;
int main()
{
	int number = 1;
	float remainder3, remainder5;
	while (number < 101)
	{
		remainder3 = number % 3;
		remainder5 = number % 5;
		if (remainder3 == 0 && remainder5 == 0)
		{
			cout << "Fizz buzz" << endl;
		}
		else
		{
			if (remainder3 == 0)
			{
				cout << "Fizz" << endl;
			}
			if (remainder5 == 0)
			{
				cout << "Buzz" << endl;
			}
			if (remainder3 != 0 && remainder5 != 0)
			{
				cout << number << endl;
			}
		}
		number = number + 1;
	}
	system("pause");
	return 0;
}
