### ex00


**개요**

Orthodox Canonical Form을 이용하여 Fixed 클래스를 구현한다.

**진행**

- 기본 생성자를 구현한다.
- 복사 생성자를 구현한다.
	- 깊은 복사가 되도록 유의한다!
- 대입 연산자를 오버로딩한다.
	- 깊은 복사가 되도록 유의한다!
- 소멸자를 구현한다.

- 복사 생성자와 대입 연산자 같은 경우 복사하는 변수에 포인터 변수(동적 할당받는 변수) 등 얕은 복사가 되면 안되는 변수들이 있는지 확인하며 구현한다.

****

### ex01

**개요**

고정 소수점과 부동 소수점의 차이를 이해한 뒤, int값과 float값을 고정 소수점을 이용해 int 타입에 저장한다.

**진행**

- 고정 소수점과 부동 소수점의 차이를 알아야한다.
	- 고정 소수점은 고정된 비트만을 이용해 소수를 표현해야한다.
	- 부동 소수점은 지수를 이용하기때문에 소수점을 표현하는 비트 수가 바뀐다. (32비트를 이용하는 타입의 경우 - 제일 앞 비트는 부호 비트, 그 뒤 8비트는 지수부, 나머지 23비트는 가수부로 이뤄진다.)
- 서브젝트에선 소수 부분을 8비트로 표현하라고 했으므로 비트를 8번 왼쪽으로 시프트하여 값을 저장하여야한다.
	- float값은 부동 소수점이기때문에 그냥 8번시프트를 하여 int타입 변수에 저장하면 아예 다른 값이 되어버린다.
		- 부동 소수 연산은 자동으로 해주니 8번 시프트할 때 이용되는 연산인 2^8을 곱하여 int타입을 8번 시프트할 때와 같은 결과를 얻어낸다.
		- 연산 후, fround()함수를 이용해 소수 부분을 반올림해준다.
		- 다시 소수점을 표시하기 위해서는 오른쪽으로 8번 시프트 대신 2^8의 값으로 나눠준다.

- 값을 출력할 땐 값이 소수인지 인트인지를 구분하여 toInt(), toFloat()를 호출해야한다.
	- 소수를 표현하는 비트에 값이 있는지 확인하여 구분한 뒤 적절한 함수를 호출한다.
	- 2.0, 3.0과 같이 소수지만 소수값이 존재하지않는 경우엔 자동으로 int와 같이 출력되므로 신경쓰지 않아도된다.

****

### ex02

**개요**

Fixed클래스 간의 연산을 연산자 오버로딩을 통해 수행한다.

**진행**

- 연산자 원형 함수의 리턴 타입, const 키워드 유무를 확인해가며 오버로딩한다.
- 전위연산자와 후위연산자의 경우 값을 변경한 후 리턴하는지, 변경될 값을 따로 저장해둔 후 변경 전 값을 리턴할 지를 잘 구분해야한다.

****

### ex03

**개요**

Fixed클래스를 통해 표현된 좌표값을 이용해 한 점이 삼각형 내부에 존재하는지 확인한다.

**진행**

- 멤버 변수가 const 타입이다.
	- 복사 생성자의 경우 
		- 초기화 리스트를 이용해 초기화한다.
	- 복사 할당 연산자의 경우 
		- const 멤버 변수가 있어 복사가 불가하다는 것을 알려준다.
- bsp()함수의 파라미터로 Point const타입을 전달한다. 
	- 전달하면서 call by value을 사용하기 때문에 복사 생성자를 거쳐 값을 복사해준다.
		- 복사 생성자로 전달해주는 객체의 값을 이용해 초기화 리스트에 값을 넣어준다.
- 점이 삼각형 내부에 있다면 점을 이용해 새로운 삼각형을 세 개 만들어냈을 때, 다 더한 값이 삼각형의 넓이와 같아야한다.
	- 점을 이용해 만든 삼각형 세 개의 넓이를 계산하고, 원래 삼각형의 넓이를 계산한 후 비교한다.

