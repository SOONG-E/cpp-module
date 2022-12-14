### ex00

**개요**

어떤 타입이 파라미터로 전달돼도 작동하는 swap(), min(), max()함수를 구현한다.

**진행**

- Function templates을 이용해 모든 타입에 대한 함수를 반복적으로 구현하지 않고 한번만 작성한다.
- 어떤 타입을 파라미터로 넣어도 잘 작동하는 지 확인한다.


***

### ex01

**개요**

iter()함수에 파라미터로 보낸 배열과 함수 포인터를 이용해 배열의 모든 원소가 함수를 호출하도록 한다.
iter()함수는 어떤 타입이나 파라미터로 전달받을 수 있다.

**진행**
- 파라미터로 전달받은 배열의 길이 len과 for문을 이용해 len만큼 배열의 원소가 파라미터로 받은 함수를 호출하도록 한다.
- 어떤 타입이 파라미터로 전달돼도 잘 작동되게 Function templates을 이용한다.
- 파라미터로 const값이 전달돼도 잘 작동되게 함수 포인터의 반환 타입과 배열의 타입에 const를 붙인다.
	- const	타입이 아닌 타입을 const타입으로 implict cast는 할 수 있지만 const타입을 아닌 타입으로 implict cast를 할 수는 없다.
- iter()함수의 반환 타입이 void라 원소가 호출하는 함수의 반환 타입도 const로 지정했다.

***

### ex02

**개요**

new 키워드를 이용해 배열을 생성하고 배열에 관한 정보를 갖는 Array 클래스를 구현한다.

**진행**

- []를 이용해 배열의 원소에 접근이 가능해야한다.
	- operator[]를 오버로딩하여 접근이 가능하게한다.

- 복사 생성자와 대입 연산자를 호출할 때 깊은 복사가 되도록한다.
	- 포인터를 대입하지않고 원소의 값을 복사하여 깊은 복사를 한다.

- 배열의 크기를 저장하여 size()함수를 호출할 때 크기를 반환해주고, 배열의 범위를 벗어날 때 예외를 throw한다.
	- 배열의 크기를 멤버 변수로 저장한다.
	- 배열에 접근할 때 배열의 범위를 벗어나는 지 체크한다.

- 클래스 구현은 .tpp파일에서 한다.
	- 클래스 선언을 해둔 .hpp 파일 하단에 .tpp파일을 include한다.
	- .tpp파일에선 .hpp파일은 include하지않아도된다.
		- 컴파일 과정에서 합쳐진다.
