### ex00

**개요**

scalar 값을 입력으로 받아 char, int, float, double 타입으로 변환한다.

**진행**

- 서브젝트에 원래 타입을 감지한 후, 원래의 타입으로 변환하고, 변한 값을 explicitly 하게 변환하라고 명시돼있다.
	- 입력값을 파싱하여 입력값의 타입이 뭔지 감지한다.
	- 생성자에서 감지한 타입을 이용해 다른 값으로 변환하는 함수를 호출한다.
- 오버플로우나 이상한 값이 들어오면 유저에게 변환이 불가능하다고 알려야 한다.
	- 이상한 값인 경우 파싱 중에 감지하여 conversion때 불가능하다고 알린다.
	- 가장 큰 범위를 표현할 수 있는 double타입의 변수를 이용해 본 값을 저장한 뒤, 다른 타입의 값들과 비교하여 오버플로우/언더플로우가 생겼는 지 확인한다.
- isnan()/isinf() 함수를 사용하여 nan, inf값이 들어왔는 지 확인한다.
- char의 경우 isprint(), isascii()함수를 이용하여 Non displayable, impossible을 구분한다.

****

###  ex01

**개요**

Serialization을 실습한다.

**진행**

- uintptr_t
 : Integer type capable of holding a value converted from a void pointer and then be converted back to that type with a value that compares equal to the original pointer.
	 -  설명된 것처럼 원래 타입으로 다시 변환될 때 포인터를 저장하는 목적으로 사용된다. (안정적으로 포인터를 저장할 수 있다.)

- 인스턴스의 포인터가 uintptr_t 로 변환되고, uintptr_t가 클래스 인스턴스의 포인터로 변환되어야한다.
	- 어떤 포인터 타입이든 어떤 포인터 타입으로 변환할 수 있는 reinterpret_cast를 이용한다.

- Data타입의 인스턴스가 serialize와 deserialize를 거쳤을 때 캐스팅 중 값 손실이 없었는지, 같은 주소를 가르키고있는 지를 확인한다.

****

### ex02

**개요**

추상 클래스인 Base를 상속받은 A, B, C를 업캐스팅한 후 어떤 클래스인지 구분한다.

**진행**

- 포인터, 래퍼런스를 클래스(or void *)로 변환할 수 있고, polymorphic클래스를 다운 캐스팅 할 수 있는 dynamic_cast를 이용한다.

- 포인터를 dynamic_cast 할 때와 래퍼런스를 dynamic_cast때의 차이를 구분한다.
	- 캐스팅이 실패한 경우 캐스팅하려한 변수가 포인터면 NULL을 반환하지만, 래퍼런스일 경우 bad_cast 예외를 throw한다.
	- 캐스팅이 실패한 경우에 대해 차이를 두어 구현한다.

- 랜덤으로 A, B, C중 하나를 할당하여 리턴해야한다.
	- srand(), time(), rand()를 이용하여 랜덤으로 셋 중 하나를 선택한다.