### ex00

**개요**

scalar 값을 입력으로 받아 char, int, float, double 타입으로 변환한다.

**진행**

- strtof()함수를 이용해 string을 float으로 변환한다.
	- static_cast로는 string을 다른 값으로 변환할 수 없다.
- isnan(), isinf()함수를 이용해 nan, inf, -inf값을 구분한다.
	- int 타입에 inf값이 들어오면 MIN_INT값을 가지게된다.
	- isinf()반환값이 true인 경우 impossible이라고 명시해준다. (서브젝트에 맞게 출력한다.)
- static_cast를 이용해 float타입을 다른 타입으로 cast한다.

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