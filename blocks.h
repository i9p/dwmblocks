/* blocks */
static const Block blocks[] = {
	/* icon   command                update  signal */
	{ "",     "status-temp",         1,      8 },
	{ "",     "status-cpu",          2,      7 },
	{ "",     "status-filesystem",   60,     6 },
	{ "",     "status-memory",       5,      5 },
	{ "",     "status-network",      1,      4 },
	{ "",     "status-delim",        0,      0 },
	{ "",     "status-volume",       0,      3 },
	{ "",     "status-delim",        0,      0 },
	{ "",     "status-updates",      1800,   2 },
	{ "",     "status-time",         5,      1 },
};

/* delimiter */
static char delim[] = ""; /* NULL ('\0') means no delimiter */
static unsigned int delimLen = 0;
