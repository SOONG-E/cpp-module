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
	- 상속받은 클래스가 상속받은 클래스의 생성자 함수는 호출할 수 없다. (기존)
	- 가상 상속을 하면 파생 함수도 기본 클래스의 생성자 함수를 호출할 수 있다.

- 다이아몬드 상속이지만 사실 ScavTrap이 상속받은 ClapTrap과 FragTrap이 상속받은 ClapTrap이 동시에 존재하여 Y모양의 상속이 된다.
	- ClapTrap의 멤버에 접근하는 경우 어느쪽 ClapTrap의 멤버에 접근하는 지에 대한 모호함이 생긴다.
		- FragTrap과 ScavTrap이 ClapTrap을 virtual 상속으로 상속받아 모호성을 제거한다.
		- 가상 테이블을 이용하여 ClapTrap의 멤버에 접근하므로 모호성을 제거할 수 있다.
	

- 가상 상속을 받은 경우 DiamondTrap은 ClapTrap class의 생성자 함수를 한번만 호출할 수 있다.
	- ScavTrap이나 FragTrap에서 중복으로 호출하지않게 주의해야한다.
	- DiamondTrap와 ScavTrap(FragTrap)에서 ClapTrap의 다른 생성자 함수를 호출하는 경우 DiamondTrap에서 이미 생성자 함수를 호출했기때문에 ScavTrap(FragTrap)에서 호출한 생성자 함수는 호출되지않는다. 기대한 대로 작동되도록 주의하여 작성해야한다.