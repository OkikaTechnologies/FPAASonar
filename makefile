
ApiLib.so: ApiCode.o CAMCode.o StateDrivenCode.o rtc.so
	gcc  -shared -o ApiLib.so ApiCode.o CAMCode.o StateDrivenCode.o

ApiCode.o : ApiCode.c
	gcc -c ApiCode.c

CAMCode.o : CAMCode.c
	gcc -c CAMCode.c

StateDrivenCode.o : StateDrivenCode.c
	gcc -c StateDrivenCode.c

rtc.so : rtc.c
	gcc -shared -o rtc.so rtc.c





