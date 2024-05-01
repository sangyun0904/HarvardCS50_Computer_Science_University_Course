# Lesson5. Memory 

메모리의 위치를 표현할때 16진수를 사용한다. 
16 진수는 16진수인것을 알리기 위해 앞에 0x를 붙인다. 

C에서 &는 변수의 메모리 주소를 반환해준다. 반대로 *는 주소에 들어있는 값을 반환해준다.

### Pointers
C언어에는 다른 컴퓨터 언어와 다르게 pointer라는 개념이 존재한다. pointer는 어떤 값의 주소를 저장하는 변수이다. 즉 쉽게 말하면 포인터는 주소이다.

int n = 50;

int *p = &n;

char a[], int b[] 와 같이 배열의 변수 a, b에는 배열 첫번째 값의 주소가 저장된다. 배열은 각각의 값들을 나란히 저장하기 때문에 첫번째 값의 주소와 인덱스 만으로 모든 값들을 가져올 수 있는 것이다. 