//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/            /*Update Interval*/ /*Update Signal*/
	{"",     "status-temp",         1,                  7},
	{"",     "status-cpu",          2,                  6},
	{"",     "status-filesystem",   60,                 5},
	{"",     "status-memory",       5,                  4},

	{"",     "status-delim",        0,                  0},

	{"",     "status-volume",       0,                  3},

	{"",     "status-delim",        0,                  0},

	{"",     "status-updates",      1800,               2},
	{"",     "status-time",         5,                  1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "\0";
static unsigned int delimLen = 0;
