### ex00

**개요**

name과 grade(1~150)을 멤버 변수로 갖는 Bureaucrat 클래스를 작성한다.

**진행**

- grade범위를 벗어나는 것을 방지하기 위해 try-catch문을 이용한다.
	- 예외를 만들어줘야 하므로 throw 키워드를 사용한다.
	- ~~grade가 높아서 발생한 예외와 낮아서 발생한 예외를 구분해야하므로 값을 담을 수 있는 객체를 사용한다. (c++ <stdexcept> 라이브러리에서 제공하는 out_of_range를 사용했다.)~~
	- 서브젝트에서 exception class는 Orthodox Canonical Form을 지키지 않아도 된다고 적혀있어 구현해야한다는 것을 알게됐다..
		- 클래스 내부에 std::exception클래스를 상속받은 GradeTooHighException, GradeTooLowException를 구현한 뒤 what()함수를 오버라이딩하여 예외를 throw한다.

- Bureaucrat을 스트림으로 출력했을 때 출력될 문구를 operator <<()함수를 오버로딩하여 출력한다.

- 생성할 때부터 잘못된 값이 들어올 경우에는 파라미터로 초기화하기 전 가장 낮은 grade인 150으로 초기화를 먼저 진행한다.

- name변수가 const string이므로 복사 생성자나 대입 연산자를 이용했을 때도 값이 바뀌어선 안된다. 서브젝트에 맞게 구현은 하되 private 접근 지정자 내부에 선언하여 외부에서 함수를 호출할 수 없도록 한다.

***

### ex01

**개요**

Bureaucrat의 인스턴스가 사인을 해 줄 Form 클래스를 작성한다.
Form클래스는 사인받을 수 있는 grade와 실행할 수 있는 grade멤버 변수를 갖는다.

**진행**

- Bureaucrat 객체를 파라미터로 받는 beSigned() 멤버 함수를 작성한다.
	- 사인을 해주는 것은 Bureaucrat이므로 signForm()함수에서 Form 객체를 파라미터로 받아 Form에 사인을 하게 하고, beSigned()함수를 this포인터를 이용하여 파라미터로 보내며 호출한다. 
	- Form에 사인을 했는지 하지 못했는지 Bureaucrat의 이름과 함께 출력한다.

- grade범위를 벗어나는 것을 방지하기 위해 try-catch문을 이용한다.
	- 예외를 만들어줘야 하므로 throw 키워드를 사용한다.
	- 서브젝트에서 요구한 것과 같이 Form::GradeTooHighException와 Form::GradeTooLowException를 예외로 보낸다.
		- exception을 상속받은 두 중첩 클래스를 구현한다.

***

### ex02

**개요**

AForm 추상 클래스를 상속받는 ShrubberyCreationForm, RobotomyRequestForm, PresidentialPardonForm 클래스를 구현한다.
각 클래스는 다른 sign grade, execute grade, execute()를 가진다.
Bureaucrat는 Form을 확인한 후 기준 점수를 넘으면 execute 한다.

**진행**

- AForm 클래스의 멤버 변수가 모두 private이라 자식 클래스에서 execute()함수를 각자 오버라이딩하면 복잡해질 것이라는 생각에 execute()는 부모클래스에서만 구현한 뒤, execute()에서 호출 할 construct()함수를 자식 클래스 별로 구현했다. 
	- construct()함수에선 서브젝트에서 요구한 행동을 구현했다.

- Bureaucrat의 executeForm()은 파라미터로 전달받은 Form의 execute()함수를 호출해 Form이 sign을 받았는 지, execute grade가 기준보다 높은지를 확인한다.
	- execute()에서 grade를 확인한 뒤, 높으면 자식클래스의 construct()함수를 호출하고, 낮으면 예외를 던져 catch하게 한다.

***

### ex03

**개요**

Intern클래스의 makeForm()은 폼의 이름과 타겟 이름을 파라미터로 받아 해당하는 폼을 생성하여 리턴한다.

**진행**

- switch문을 이용하여 파라미터로 넘어온 폼이 존재하는 지 확인하고, 존재하면 new키워드를 이용하여 생성한 후 리턴한다.
	- 리턴하기 전 서브젝트에서 요구한 출력문을 출력한다.
	- 존재하지않으면 에러 문구를 출력한다.
	


