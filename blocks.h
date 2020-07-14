//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

  {"", "internet",            1,  9},
	
	{"🧠", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"🔊", "volume",						 1,		10},

	{"", "battery",						  60,		11},

	{"", "weather",					3600,		8},

	{"", "datetime",						1,		12},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
