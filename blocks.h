/* blocks */
static const Block blocks[] = {
	/* icon   command                update  signal */
	{ "",     "status-temp",         1,      7 },
	{ "",     "status-cpu",          2,      6 },
	{ "",     "status-filesystem",   60,     5 },
	{ "",     "status-memory",       5,      4 },
	{ "",     "status-delim",        0,      0 },
	{ "",     "status-volume",       0,      3 },
	{ "",     "status-delim",        0,      0 },
	{ "",     "status-updates",      1800,   2 },
	{ "",     "status-time",         5,      1 },
};

/* delimiter */
static char delim[] = "\0"; /* NULL ('\0') means no delimiter */
static unsigned int delimLen = 0;
