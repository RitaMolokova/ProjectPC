using namespace std;
#include <iostream>
#include "myLibrary.h"

int main() 
{
	int ans;
	cout << "1 - Office PC; 2 - Game PC; 3 - Home PC";
	cin >> ans;
	switch (ans) {
		case(1):
			PC* office = new Office("Name", "CPU", "GPU", "SSD", "RAM", "Micro");
			break;
		case(2):
			PC* game = new Game("Name", "CPU", "GPU", "SSD", "RAM", "Keyboard", "Headphone");
			break;
		case(3):
			PC* home = new Home("Name", "CPU", "GPU", "SSD", "RAM", "Camera");
			break;
	}
	cout << pc->GetPrice();
}