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
    cout << "Generate a strong password!\nSelect a number from 8 to 15\n";

    int length;
	// Ask the user for the length of the password
	// Length must be in between 8 to 15 characters
	while (true)
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
		else if (length < 8)
		{
			cout << "Length too short. Password length must be more than 8" << endl;
			continue;
		}
		// Too long
		else if (length > 15)
		{
			cout << "Length too long. Password length must be less than 15" << endl;
			continue;
		}
		// If it passes all these tests, the user input is valid
		else
		{
			break;
		}
	}

	// Generate the password with a given length
	cout << "---🔐Password Generated🔐----Copy below--------\n";
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
