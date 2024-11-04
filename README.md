<h1> 2024학년도 2학기 <br> 오픈소스 프로젝트 LAB2 과제 실습 </h1>
20203105 이승환
<h3> 과제 내용 </h3>
1. 사칙연산 (덧셈 add, 뺄셈 subtract, 곱셈 multiply, 나눗셈 divide) 에 대한 함수와 이 함수들을 이용하는 예제 프로그램을 각각 작성하고, 정적 라이브러리, 공유 라이브러리, 동적 라이브러리 방식을 각각 이용하여 예제 프로그램을 실 행시킨 결과를 보이시오. <br>
2. 위 문제에 대하여, C 소스 파일들을 목적 파일로 만들고, 또한 이 파일들을 이용하여 라이브러리 또는 실행 파일로 만들어 주는 Makefile을 작성하여 실행시켜 보시오. 이 때, 라이브러리 관련 파일들은 서브디렉토리에 두도록 한다. <br>
3. GIT 의 사용법을 정리하고, Github 사이트에 자신의 계정을 만들고 위아래의 모든 과제를 lab2 프로젝트에 올리시오. <br>
4. GDB 와 DDD의 사용법을 정리하고, 위 2번 실습 예제에 대하여 GDB 및 DDD 테스트 결과를 나타내시오. <br>
5. perror() 함수 구현 : 라이브러리 함수인 perror() 함수와 동일하게 동작하는 my_perror() 함수를 구현하고, 이를 이용하여 예제 13에서 perror() 함수를 대체하여 프로그램을 실행해 보자.<br> 
6. assert() 함수 구현 : 라이브러리 함수인 assert() 함수와 동일하게 동작하는 my_assert() 함수를 구현하고, 이를 이용하여 5장 예제 14에서 assert() 함수를 대체하여 프로그램을 실행해 보자. <br>
7. 위 1-2번 실습문제의 프로그램에 대하여 gprof 프로파일링과 Valgrind 메모리 누수 디버깅을 적용하여 보시오. <br>
8. 두 행렬의 크기를 입력받아서 필요한 만큼의 메모리를 동적으로 할당하여 행렬의 내용을 저장하고 두 행렬을 더하는 프로그램을 작성하시오. <br>
9. 위 8번 문제를 C++ STL 의 vector 컨테이너를 활용하여 구현하시오. <br>
10. 학생 수를 입력받은 다음, 학생의 이름, 중간, 기말 점수를 기록하는 구조체를 학생 수만큼 동적으로 할당받아서, 이를 트리 구조체로 활용하여 트리 탐색을 할 수 있는 프로그램을 작성하시오. 
11. 위 10번 문제를 C++ STL 의 map 컨테이너 등을 활용하여 구현해 본다.<br>
<br><br>
<h3> 파일 목록 </h1>

```

├── README.md
└── project2_Files
    ├── 10_struct
    │   ├── Makefile
    │   ├── programs
    │   │   └── main
    │   └── source
    │       └── main.c
    ├── 11_map
    │   ├── Makefile
    │   ├── programs
    │   │   └── main
    │   └── source
    │       └── main.cpp
    ├── 1_library_2_make
    │   ├── Makefile
    │   ├── header
    │   │   └── calculate.h
    │   ├── lib
    │   │   ├── libshared.so -> libshared.so.1.0.1
    │   │   ├── libshared.so.1 -> libshared.so.1.0.1
    │   │   ├── libshared.so.1.0.1
    │   │   └── libstatic.a
    │   ├── programs
    │   │   ├── make_main
    │   │   ├── share_main
    │   │   └── static_main
    │   └── source
    │       ├── calculate.c
    │       ├── devide.c
    │       ├── devide.o
    │       ├── dynamic_main
    │       ├── dynamic_main.c
    │       ├── minus.c
    │       ├── minus.o
    │       ├── multiply.c
    │       ├── multiply.o
    │       ├── plus.c
    │       └── plus.o
    ├── 4_GDB_DDD
    │   └── programs
    │       └── gdb_ddd
    ├── 5_perror
    │   ├── Makefile
    │   ├── header
    │   │   └── my_perror.h
    │   ├── lib
    │   │   └── libmy_perror.a
    │   ├── programs
    │   │   ├── main
    │   │   └── testFile.txt
    │   └── source
    │       ├── main.c
    │       ├── my_perror.c
    │       ├── my_perror.o
    │       └── perror_use.c
    ├── 6_assert
    │   ├── Makefile
    │   ├── header
    │   │   └── my_assert.h
    │   ├── programs
    │   │   └── main
    │   └── source
    │       ├── main.c
    │       └── my_assert.c
    ├── 7_gprof_valgrind
    │   ├── 7_1_gprof
    │   │   ├── analysis.txt
    │   │   ├── gmon.out
    │   │   └── testgprof
    │   ├── 7_2_valgrind
    │   └── testvalgrind
    ├── 8_matrix
    │   ├── Makefile
    │   ├── programs
    │   │   └── main
    │   └── source
    │       └── main.c
    └── 9_vector
        ├── Makefile
        ├── programs
        │   └── main
        └── source
            └── main.cpp

```
