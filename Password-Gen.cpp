#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;

static const char alphanum[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";
int size = sizeof(alphanum) - 1;

int main()
{
    /* Password-Generator
	   Generate a strong password with a desired length!
	*/
    int length;
    cout << "Generate a strong password! Select a number from 8 to 15\n";

	// Length of password must be in between 8 to 15 characters
	do
	{
    	cout << "Length of password: ";
    	cin >> length;

		// Edge case if the user types a non-integer input
		if (!cin)
    	{
      		cout << "Type only numbers between 8-15." << endl;
      		cin.clear();
      		cin.ignore(numeric_limits<streamsize>::max(), '\n');
      		continue;
    	}

		// Too short
		if (length < 8)
		{
			cout << "Length too short. Password length must be more than 8" << endl;
		}
		// Too long
		else if (length > 15)
		{
			cout << "Length too long. Password length must be less than 15" << endl;
		}
	}
	while (length < 8 || length > 15);

	cout << "---🔐Password Generated🔐--Copy paste below----\n";
    srand(time(0));
	for (int i = 0; i < length; i++)
	{
        cout << alphanum[rand() % ::size];
    }
	cout << "\n";

    cout << "-----------------------------------------------\n";
    cout << "THANK YOU FOR USING MY TOOL :3 \n"<<endl;
    cout << "-DROID\n";

	cout << "░░░░░░░░░░░░░░░░░███████ ]▄▄▄▄▄▄▄▄▄-----------******\n";
	cout << "░░░░░░░░░░░░▂▄▅█████████▅▄▃▂\n";
	cout << "░░░░░░░░░░░I███████████████████].\n";
    
    return 0;
}
