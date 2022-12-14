**ex00** : 업캐스팅, virtual 함수
**ex01** : 활용
**ex02** : 가상화, (pure)virtual 클래스

***

### ex00

**개요**

Animal을 상속받은 Cat, Dog class를 Animal 클래스의 포인터로 호출하여 사용한다.

**진행**

- Animal클래스 포인터에 Cat, Dog를 할당(업캐스팅)한 뒤, 오버라이딩한 함수를 호출할 경우 오버라이딩이 되지않은 Animal클래스의 맴버 함수가 호출된다.
	- Animal클래스에서 자식 클래스가 오버라이딩할 함수을 Virtual 키워드를 붙여 가상화해준다.
	- 어떤 함수를 호출할 지 컴파일 시 정하지 않고 런타임 시 정하는 동적 바인딩을 이용해 부모 클래스 포인터로 자식 클래스를 호출할 때도 오버라이딩한 함수가 호출되게 한다.
	- 가상 테이블을 이용해 함수를 찾아가므로 부모 클래스의 포인터로 자식 클래스를 호출할 때도 적절한 함수를 호출할 수 있다.

- delete를 이용해 부모 클래스 포인터를 할당 해제 해줄 때 부모 클래스의 소멸자부터 호출된다
	- 자식 클래스를 소멸시킬 때는 자식 클래스 소멸자 호출 -> 부모 클래스의 소멸자 호출 순서로 진행되어야한다.
	- ```"error: delete called on non-final 'Animal' that has virtual functions but non-virtual destructor" ```
	위같은 에러가 발생한다.
	- 자식 클래스의 소멸자부터 호출되지 않고 주소에 존재하는 부모 클래스의 소멸자부터 호출되므로 발생한 문제이다.
	- 소멸자도 가상화하여 자식 클래스가 소멸될 떄 적절한 소멸자가 호출되도록 한다.
- WrongAnimal, WrongCat class를 생성한다.
	- makesound()함수에 virtual 키워드를 제외하여 구현 후, 어떤 문제가 발생하는 지 확인한다.

**진행 후**

- getType()함수를 사용했을 때 자식 클래스를 생성할 때 초기화한 값이 반환되는 지 확인한다.
- 자식 클래스가 오버라이딩한 함수 makeSound()가 적절하게 호출되는 지 확인한다.
- 여러 개의 다른 객체가 동일한 기능을 다른 방식으로 처리할 수 있다는 것을 확인한다.
- 오버라이딩한 함수에 virtual키워드를 지워 어떻게 작동하는 지 확인한다.

***

### ex01

**개요**

100개의 ideas를 가지는 Brain클래스를 구현한 뒤, Dog와 Cat클래스가 Brain클래스 인스턴스의 포인터를 멤버 변수로 가지게한다.
Dog와 Cat의 객체가 생성될 때 Brain클래스의 객체를 동적 할당한 뒤, 소멸될 때 메모리 할당을 해제한다.

**진행**

- string배열인 ideas를 맴버 변수로 갖는 Brain 클래스를 구현한다.
- Dog와 Cat의 생성자에서 Brain의 객체를 동적 할당한다(포인터로 가지게 한다.).
	- Brain이 깊은 복사가 되도록 한다.
	- ~~Brain을 포인터로 가지기 때문에 Brain클래스 내부에 구현해둔 대입 연산자를 사용하지않는다.~~
		- ~~Dog와 Cat내부에서 깊은 복사를 진행한다.~~
	- brain을 포인터로 참조하여 대입하면 Brain의 assignment operator를 호출하여 copy한다.
	```
	*brain = *(obj.brain);
	```
- 소멸자에서 동적 할당받은 것을 해제해준다.
- 복사 생성자와 할당 연산자를 구현할 때 포인터 멤버 변수가 얕은 복사가 되지않도록 주의한다.

***

### ex02

**개요**

Animal클래스를 기능은 같지만 인스턴스화가 불가하게 작성한다.

**진행**

- 클래스를 추상화하면(추상 클래스로 작성하면) 인스턴스화를 할 수 없다.
- 멤버 함수 중 하나라도 끝에 '= 0'이 붙어있다면 그 클래스는 추상 클래스가 된다.
	- const같은 키워드도 '= 0' 전에 붙이면된다.
	- 추상 멤버 함수는 자식 클래스에서 꼭! 오버라이딩 되어야한다.
	부모 클래스에서는 함수 구현을 하지 않아도 된다.
	- 만약 자식 클래스에서 오버라이딩을 하지 않으면 아래와 같은 에러가 발생한다.
	```
	function "Animal::makeSound" is a pure virtual function
	```
	- 오버라이딩을 하지않고 선언을 하면 아래와 같은 에러가 발생한다.
	```
	object of abstract class type "Dog" is not allowed:C/C++(322)
	main.cpp(18, 24): pure virtual function "Animal::makeSound" has no overrider
	```
- 인스턴스가 될 수 없기 때문에 Orthodox Canonical Form을 지킨 생성자와 필요없다고 생각했다!
	- 추상 클래스여도 자식 클래스의 인스턴스를 업캐스팅하여 대입하면 부모 클래스의 대입 연산자를 사용하는 것을 확인했다.
	```
		Animal* j = new Dog();
		Animal* i = new Cat();

		*i = *j;
	```

	```
	* thread #1, queue = 'com.apple.main-thread', stop reason = step in
		frame #0: 0x0000000100000da4 Animal`Animal::operator=(this=0x0000000100304080, obj=0x0000000100205880) at Animal.cpp:33:9
	30   }
	31  
	32   Animal& Animal::operator=(Animal& obj){
	-> 33           type = obj.type;
	34  
	35           return (*this);
	36   }
	```

***

### ex03

**개요**

AMateria클래스를 상속받은 Dog, Cat클래스를 구현하고, IChracter클래스(인터페이스)를 상속받은 Character, IMateriaSource클래스(인터페이스)를 상속받은 MateriaSource클래스를 구현한다.

**진행**

- c++ 자체에서 인터페이스 기능을 제공하지는 않지만 멤버 함수가 모두 추상 함수라면 그 클래스는 인터페이스라고 부를 수 있다.

- 인벤토리에 넣어둔 값을 제거하는 uneuip()함수에서 delete를 사용하면 안된다.(요구사항)
	- inventory를 포인터 배열로 선언한다.
	- uneuip()함수를 호출할 때 해제할 메테리얼의 주소를 저장해두도록 한다.

- 복사 할당자, 대입 연산자 내부의 복사는 모두 깊은 복사여야한다.
	- 배열의 주소를 대입하는 게 아니라 원소의 내용을 대입하여 원본의 내용이 바뀌더라도 함께 바뀌지않도록한다.

- 항상 leak이 발생하지 않도록 주의한다.

- concrete class = 인스턴스화 가능한 클래스 = 추상 클래스가 아닌 클래스

**진행 후**

- 제공받은 main.cpp를 이용하니 leak이 발생했다. (출력 결과 자체는 예상했던 것과 같이 나왔다.)
	- 클래스 소멸자에서 배열 내부 원소를 delete하면 leak 문제를 해결할 수 있지만 uneuip()에서 delete를 사용하지 말라는 문구를 클래스에서는 포인터로 받아온 객체의 메모리 문제를 고려하지말라는 의미로 판단했다.
		- fix. Material 소멸자에서 delete를 해줬다.
		- 테스트를 더 해보라는 문구를 보고 main.cpp를 수정하여 테스트를 더 진행했다. 
