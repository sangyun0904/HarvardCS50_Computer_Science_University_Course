C언어를 기계여 즉 바이너리 파일로 변환해주는 시스템을 컴파일러라고 부르고 가장 유명한 컴파일러는 clang ,gcc등이있다.

그냥 clang을 활용해 컴파일하면 a.out이라는 기본 아웃풋 파일이 생성된다. 그리고 clang -o (output) hello hello.c 와 같이 command line argument를 사용해서 아웃풋 파일의 이름을 지정해줄 수 있다. 

비슷하게 #include를 통해 오픈소스를 추가하고 단지 clang 만을 사용해 컴파일 하고 싶으면 -l(linking) command line argument를 추가해 주어야 한다. 

컴파일은 다음과 같은 과정을 거친다.

1. preprocessing
'#include'는 코드를 어디서 가져오는 걸까 주로 C언어 오픈소스를 설치하면  
/usr/include 와 같은 경로에 파일이 생성되는데 그곳에서 즉 로컬 기기의 생성된 파일에서 코드를 가지고 온다.
그리고 preprocessing 과정에서 이 #include줄을 실제 필요한 코드로 바꾼다.

2. compiling
compiling 과정에서 컴파일러는 코드를 어셈블리 코드로 바꾼다. CPU와 같은 장치는 이 어셈블리 코드를 보고 동작한다.

3. assembling
assembling 과정에서는 이 어셈블리 코드를 실제 바이너리 코드로 변경한다. 

4. linking
마지막 linking 과정에서는 내가 작성한 코드의 바이너리 코드와 #include를 통해서 가져온 /usr/include 경로의 파일에 저장되어 있는 바이너리 코드를 연결한다. 

make 명령어를 통해 코드를 컴파일 할 때에도 이 모든 과정이 일어난다.