#include <iostream>
#include <fstream>

using namespace std;

int main() {
char c;
fstream firstFile("first.txt", fstream::in | fstream::app);
fstream secondFile("second.txt", fstream::in );
fstream tempFile("tempFile.txt", fstream::out | fstream::app);
if (firstFile.fail() | secondFile.fail()) {
cout<< "L'ouverture de l'un des fichier a échoué. Assurez vous qu'ils existent.";
}
else {

while (secondFile.get(c)) {
tempFile << c;
}
while (firstFile.get(c)) {
tempFile << c;
}
firstFile.close();
secondFile.close();
tempFile.close();
remove("first.txt");
rename("tempFile.txt", "first.txt");
}
}

