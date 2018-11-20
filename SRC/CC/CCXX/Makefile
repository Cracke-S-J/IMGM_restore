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
	CCXX.c\
	CCXX_extern.c

HEADER = CCXX.h\
	CCXX_extern.h

INCPATH = -I../../header -I./extern -I.
	 

LIBRARY = -L../../../IT/lib -lc -lm
	 
all:clean CCXX
CCXX:$(SOURCE) $(HEADER)
	gcc -Wall $(INCPATH) $(LIBRARY) -o CCXX $(SOURCE) 
clean:
	rm -f CCXX	 
	 
	
	 
