SOURCE = ../../base/CMXA.c\
	../../base/CNXA.c\
	../../base/DAXA.c\
	../../base/DDXA.c\
	../../base/DQXA.c\
	../../base/DTXA.c\
	../../base/EDXA.c\
	../../base/EHXA.c\
	../../base/ERXA.c\
	../../base/FSXA.c\
	../../base/GLXA.c\
	../../base/GNEQ.c\
	../../base/GNMA.c\
	../../base/GNMF.c\
	../../base/GPXA.c\
	../../base/MCXA.c\
	../../base/MSXA.c\
	../../base/NLXA.c\
	../../base/OOXA.c\
	../../base/PLXA.c\
	../../base/SBXA.c\
	../../base/SMXA.c\
	../../base/THXA.c\
	../../base/TMXA.c\
	../../base/TTXA.c\
	../../base/TTXAxAP.c\
	CCYY.c\
	CCYY_extern.c


HEADER = CCYY_extern.h

	
INCPATH = -I../../header -I../extern -I.

	 
LIBRARY = -L../../../IT/lib -lc -lm

	 
all:clean CCYY
CCYY:$(SOURCE) $(HEADER)
	gcc -shared -fPIC -Wall $(INCPATH) $(LIBRARY) -o libCCYY.so $(SOURCE)
clean:
	rm -f libCCYY.so
	 
	 
	
	 
