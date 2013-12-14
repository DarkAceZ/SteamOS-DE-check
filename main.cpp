#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
	string de;
	de = getenv("DESKTOP_SESSION");
	if (de == "SteamOS")
	  system("steam");
	exit(0);
}
