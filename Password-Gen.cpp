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
    cout <<"Input Number of char for a pass\n";
    cin >> length;
    

    if(length == 8){
    srand(time(0));
    for (int i = 0; i < length; i++)
    {
        cout << alphanum[rand() % ::size];
        
    }
    cout<<"  Password-Generated🔐";
  }
    else if(length == 9){
    srand(time(0));
    for(int i = 0; i < length; i++){
    cout <<alphanum[rand() % ::size];
    
    }
    cout<<"  Password-Generated🔐";
  }
else if(length == 10){
srand(time(0));
for(int i = 0; i < length; i++){
   cout <<alphanum[rand() % ::size];
   
}
cout<<" Password-Generated🔐";

}
else if(length == 11){
srand(time(0));
for(int i = 0; i < length; i++){
   cout <<alphanum[rand() % ::size];
   
}
cout<<" Password-Generated🔐";
}
    else if(length <= 7 ){
    cout <<"Only 8 characters and above can be generated👩‍🔧";
    
    }
    else{
    cout <<"❌INVALID❌";
    }
    
    return 0;
}
