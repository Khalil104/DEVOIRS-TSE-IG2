#include <fstream>
 #include <string>
#include <iostream>
using namespace std;
void copier(string chemin1,string chemin2)
{
   ifstream in{chemin1 };
   ofstream out{chemin2 };
   string s;
   while (getline(in, s))
      out << s << endl;
}
int main() {

 copier("fichier1.txt","fichier2.txt");
return 0;
}
