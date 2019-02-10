
// Assign OS appropriate screen clearing command. 
#ifdef __linux__
	// static const std::string OpSys="Linux";
	#define CLR "clear"
#else
	// static const std::string OpSys="Windows";
	#define CLR "cls"
#endif

