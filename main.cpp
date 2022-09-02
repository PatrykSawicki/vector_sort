#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//*************************************************************************************
int main()
{
   vector<char> vz;
   char znak;
   vz.clear();

   while(cin.get(znak) && znak != 10)
   {
        vz.push_back(znak);
   }

   for(char znak : vz) { cout << znak; cout << endl; }

   sort(vz.begin(), vz.end());
   vz.erase(unique(vz.begin(), vz.end()),   vz.end());

   for(char el : vz) { cout << el; cout << endl; }
}

