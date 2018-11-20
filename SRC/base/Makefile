SOURCE = CMXA.c\
	CNXA.c\
	DAXA.c\
	DDXA.c\
	DQXA.c\
	DTXA.c\
	EDXA.c\
	EHXA.c\
	ERXA.c\
	FSXA.c\
	GLXA.c\
	GNEQ.c\
	GNMA.c\
	GNMF.c\
	GPXA.c\
	MCXA.c\
	MSXA.c\
	NLXA.c\
	OOXA.c\
	PLXA.c\
	SBXA.c\
	SMXA.c\
	THXA.c\
	TMXA.c\
	TTXA.c\
	TTXAxAP.c

	
HEADER = 

	
INCPATH = -I../header -I. -I./extern

	 
LIBRARY = -L../../../IT/lib -lm

	 
all:base
base:$(SOURCE) $(HEADER)
	gcc -shared -fPIC -Wall $(INCPATH) $(LIBRARY) -o libbase.so $(SOURCE)
	 
	 
	
	 
