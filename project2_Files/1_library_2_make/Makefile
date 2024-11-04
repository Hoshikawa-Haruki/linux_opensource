# 목적 파일들 경로
OBJECTS = source/plus.o source/minus.o source/multiply.o source/devide.o

# 최종 생성 파일
programs/make_main : lib/libstatic.a source/calculate.c
	gcc -g -o programs/make_main -I./header -L./lib source/calculate.c -lstatic

# 정적 라이브러리 생성
lib/libstatic.a : $(OBJECTS)
	ar rcs lib/libstatic.a $(OBJECTS)

# 개별 목적 파일 생성
source/plus.o : source/plus.c
	gcc -o source/plus.o -c source/plus.c

source/minus.o : source/minus.c
	gcc -o source/minus.o -c source/minus.c

source/multiply.o : source/multiply.c
	gcc -o source/multiply.o -c source/multiply.c

source/devide.o : source/devide.c
	gcc -o source/devide.o -c source/devide.c

# 실행 명령
run : 
	programs/make_main
	
# 청소 명령
clean :
	rm -f programs/make_main $(OBJECTS) lib/libstatic.a