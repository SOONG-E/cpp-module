### ex00

**개요**

남을 공격하고 공격받고, 자신을 치료할 수 있는 ClapTrap class를 생성한다.

**주의할 점**

다음 과제의 부모가 될 클래스이므로 실수 없게 꼼꼼하게 테스트한다.

***

### ex01

**개요**

ClapTrap class를 상속받는 ScavTrap class를 생성한다.
서브젝트에서 요구하는 새로운 멤버 함수를 구현한다.

**진행**

- ClapTrap의 private 접근 지정자에 속한 멤버들에 접근할 수 없다.
	- get/set함수를 구현한다.
	- or 멤버 변수들의 접근 지정자를 같은 클래스의 인스턴트들은 접근 할 수 있는 protected로 변경한다.
- ScavTrap class에만 존재하는 멤버를 선언, 구현한다.
	- ClapTrap class에 존재하는 멤버들을 선언하지 않고도 호출할 수 있는지 확인한다.
- 
- 의존성이 있는 ClapTrap class의 생성자 함수와 소멸자 함수를 호출한다.
	- 자식 클래스를 생성할 때 부모 클래스의 생성자 함수가 먼저 호출되는 것을 확인한다.
	- 자식 클래스가 소멸될 때 자식의 소멸자 함수가 먼저 호출된 뒤, 부모 쿨래스의 소멸자 함수가 호출되는 것을 확인한다.

***

### ex02

**개요**

ClapTrap class를 상속받는 FragTrap class를 생성한다.
서브젝트에서 요구하는 새로운 멤버 함수를 구현한다.

***

### ex03

**개요**

ScavTrap class와 FragTrap class를 상속받는 DiamondTrap class를 생성한다.
서브젝트에서 요구하는 새로운 멤버 변수와 함수를 구현한다.

**진행**

- 생성자 함수를 구현할 때 ClapTrap() 의존성을 적으면 에러가 발생한다.
	- 다이아몬드 상속이지만 사실 ScavTrap이 상속받은 ClapTrap과 FragTrap이 상속받은 ClapTrap이 동시에 존재하여 Y모양의 상속이 된다.
	- FragTrap과 ScavTrap이 ClapTrap을 virtual 상속으로 상속받아 모호성을 제거한다.

-  자식 클래스에 부모 클래스와 같은 이름의 멤버 변수, 함수를 선언해도된다.
	- 가상 상속을 받아 가상 테이블을 이용해 같은 이름의 멤버들에 접근하기때문에 같은 이름인(함수라면 인수까지 같은 경우) 멤버가 존재해도 모호성없이 접근, 호출할 수 있다.

- DiamondTrap의 기본 생성자 함수가 호출하는 ClapTrap class의 생성자 함수와 FragTrap or ScavTrap의 기본 생성자 함수가 호출하는 ClapTrap class의 생성자 함수가 다른 경우 +