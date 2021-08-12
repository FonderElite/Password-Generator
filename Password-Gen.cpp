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


    //password length
    int length;
    cout <<"Input a number to generate a strong password\n";
    cout <<"Amount: ";
    cin >> length;
    

    if(length == 8){
    srand(time(0));
    for (int i = 0; i < length; i++)
    {
        cout << alphanum[rand() % ::size];
        
    }
     cout<<" 🔐Password-Generated<<🔐\n";
  }
    else if(length == 9){
    srand(time(0));
    for(int i = 0; i < length; i++){
    cout <<alphanum[rand() % ::size];
    
    }
        cout<<" 🔐Password-Generated<<🔐\n";
  }
else if(length == 10){
srand(time(0));
for(int i = 0; i < length; i++){
   cout <<alphanum[rand() % ::size];
   
}
    cout<<" 🔐Password-Generated<<🔐\n";

}
else if(length == 11){
srand(time(0));
for(int i = 0; i < length; i++){
   cout <<alphanum[rand() % ::size];
   
}
    cout<<" 🔐Password-Generated🔐\n";
}
else if(length == 12){
    srand(time(0));
    for(int i = 0; i <= length; i++){
        cout << alphanum[rand() % ::size];
    }
    

}
else if(length == 13){
    srand(time(0));
    for(int i = 0; i <= length; i++){
        cout << alphanum[rand() % ::size];
    }
    
   cout<<" 🔐Password-Generated🔐";
}

else if(length == 14){
    srand(time(0));
    for(int i = 0; i <= length; i++){
        cout << alphanum[rand() % ::size];
    }
    
   cout<<" 🔐Password-Generated🔐";
}

else if(length == 15){
    srand(time(0));
    for(int i = 0; i <= length; i++){
        cout << alphanum[rand() % ::size];
    }
    
   cout<<" 🔐Password-Generated🔐";
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
