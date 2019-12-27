#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
ifstream fromFile("SlimShady.txt");

string text;

while (!fromFile.eof()) {
getline(fromFile, text);
}
fromFile.close();

ofstream toFile("SlimShady.txt");

for (int i = 0; i < text.size(); i++) {
if (text[i] != ' ' || text[i] == ' ' && text[i - 1] != ' ') {
toFile<< text[i];
}
}


return 0;
}

