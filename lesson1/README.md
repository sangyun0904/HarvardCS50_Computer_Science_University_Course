# HarvardCS50 Computer Science University Course

## Lesson 1

### 1. 컴퓨터틑 bit로 모든 것을 처리한다 
 - bit가 8개 모이면 byte 가된다.
 - binary 2진수로 모든것이 표현된다 .

### 2. 문자를 표현하기 위해 ASCII Code 를 만들었다. 
 - 심지어 숫자도 1에서 9까지를 표현하는 ASCII Code가 있다. 
 - 알파벳 외의 여러나라 문자나 이모지까지 표현하기 위해 Ucivode가 만들어진다. 
 - 이모지 사람 피부톤이나 variation을 표현할때는 따로 메모리를 사용해 선택하도록 한다.

### 3. RGB를 각각 byte 256개의 숫자를 부여하고 모든 색을 표현한다.
 - 각각의 픽셀에 특정색을 부여해 큰 그림이 된다. 
 - 동영상은 연속적인 그림을 통해 표현된다.
 - 영화, TV 방송, 스트리밍 영상 콘텐츠, 스마트폰 모두 표준 프레임 속도인 24fps 를 사용한다. 초당 24 프레임 
 - 음악도 비슷한 방법으로 2진수의 숫자로 표현한다. 
 
### 4. 스마트폰의 연락처를 보면 사전순으로 정렬되어 있다. 
 - 전화번호부에서 John Harvard를 찾을때 앞페이지부터 찾으면 많은 시간이 걸린다. 
 - 2페이지씩 넘기면서 찾으면 2배로 빨라진다. 못찾고 지나칠수도 있지만 지나친 것을 안 순간 한페이지만 뒤로 넘기면 되기 때문에 크게 영향을 미치지 않는다. 
 - 그러나 우리는 정렬되어 있으면 대충 감으로 때려가며 페이지를 펼친다. 이 순간 전화번호부 페이지 수에 따른 John Harvard를 찾는 시간을 표현하는 그래프는 linear에서 log 그래포르 변하게 된다. 
 - 페이지가 많아지면 많아질수록 이 알고리즘은 무척 효율적인 알고리즘이 된다. 
 - 이러한 문제를 해결하는 방식을 알고리즘이라 부르고 이것을 말로 풀어 작성한 것을 개발자들은 pseudo code 수도 코드라고 부른다.

### 5.   수도코드를 작성할때 Call, Open, Quit과 같은 행동이나 동사들을 사용하는데 이는 개발에서 function 함수가된다.
 - Abstraction과 Implementation : 어떤것을 구체적이지 않은 즉 추상적인 관점에서 표현힐때 abstract이라 하고 이것을 구체적으로 다루기 위해 적용하는 것을 implementation이라 한다. 예를 들어 일반적인 운전자는 자동차의 부품 하나하나의 움직임을 전부 이해하고 있지 않기 때문에 abstract하게 자동차를 이해하고 있지만 자동차 엔지니어는 구체적으로 implement하여 자동차를 설계하고 정비한다. 
 - 즉 어떤 기능을 함수로 만들고 함수명을 부르는 것 만으로 그 기능을 수행하도록 만드는 것을 abstration 추상화라고 말할 수 있다. 
 - 이렇게 기능을 추상화하여 반복을 줄이고 코드를 간단하게 만드는 과정을 refactoring 리펙토링이라고 한다.
 - Event 어떤 사건이 다른 사건의 trigger가 될때 첫번째 사건을 Event라 부른다. . 
