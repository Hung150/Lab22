#include <iostream>
#include <string>
using namespace std;

int main()
{
string text;

cout<< "Enter a string ";

getline(cin, text);

for (int i = text.find_last_of( '\\') + 1; i < text.find_last_of('.'); i++){
cout<< text[i];
}
cout<< endl;
}
