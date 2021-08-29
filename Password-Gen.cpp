#include <iostream>
#include <cstdlib>
#include <ctime>
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
    cout <<"Generate a strong password! Select a number from 8 to 15\n";
    cout <<"Amount: ";
    cin >> length;

	// Length of password must be in between 8 to 15 characters
    if (length >= 8 && length <= 15)
	{
    	srand(time(0));
		for (int i = 0; i < length; i++)
		{
        	cout << alphanum[rand() % ::size];
        }
		cout<<" 🔐Password-Generated<<🔐\n";
    }

    else if(length <= 7 ){
    cout <<"Only 8 characters and above can be generated👩‍🔧\n";
    }
    else{
    cout <<"❌INVALID❌\n";
    }
    cout<<"-----------------------------------------------\n";
    cout<<"THANK YOU FOR USING MY TOOL :3 \n"<<endl;
    cout<<"-DROID\n";

	cout<<"░░░░░░░░░░░░░░░░░███████ ]▄▄▄▄▄▄▄▄▄-----------******\n";
	cout<<"░░░░░░░░░░░░▂▄▅█████████▅▄▃▂\n";
	cout<<"░░░░░░░░░░░I███████████████████].\n";
    
    return 0;
}
