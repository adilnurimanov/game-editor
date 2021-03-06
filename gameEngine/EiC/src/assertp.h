
void abort(void);

#ifndef __F1LE__
#define __F1LE__	""
#endif

#if !defined(NDEBUG) && !defined(_WIN32_WCE) //maks

#define assertandpause(p, args)	if(p){fprintf(stderr,\
		"ASSERT : %s, At line %d in file %s.\n",\
		#p, __LINE__,__F1LE__);\
		printf args;\
		fprintf(stderr,"<Key to continue>");\
		getchar();}



#define assertp(p, args)	if(p){\
		fprintf(stderr,\
		"ASSERT : %s, At line %d in file %s.\nCalled From: ",\
		#p, __LINE__,__F1LE__);\
		printf args; abort();}

#else
#define assertandpause(p, args)
#define assertp(p, args)
#endif
