
// Assign OS appropriate screen clearing command. 
#ifdef __linux__
	// static const string OpSys="Linux";
	#define CLR "clear"
#else
	// static const string OpSys="Windows";
	#define CLR "cls"
#endif

