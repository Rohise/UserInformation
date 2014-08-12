#include <iostream>

using namespace std;

void main_menu();
void adult_stuff();
void SFW_stuff();

int main()
{
  int option;
  do
  {
    main_menu();
    cin >> option;
    if (option == 1)
    {
      cout << endl;
      adult_stuff();
      cout << endl;
    }
    else if (option == 2)
    {
      cout << endl;
      SFW_stuff();
      cout << endl;
    }
    else
    cout << "It was nice seeing you again!" << endl;
  }while (option == 1 || option == 2);
  return 0;
}

void main_menu()
{
  cout << "Hello Master! How may I help you today?" << endl;
  cout << "For adult stuff press 1, for SFW stuff press 2." << endl;
}

void adult_stuff()
{
  cout << "insertsite: Username:  Password: ." << endl;
  cout << "insertsite: Username:  Password: ." << endl;
}

void SFW_stuff()
{
  cout << "insertsite: Username: Password: " << endl;
  cout << "insertsite: Username: Password: " << endl;
  cout << "insertsite: Username: Password: " << endl;
}
