const는 상수화라는 의미입니다.
위의 경우 const Point& a 라고 지정하면, a의 레퍼런스 대상을 변경할 수 없게 한다라는 뜻이 됩니다.

2. call by value vs. call by reference
call by value 방식의 값 전달은 값을 복사해서 전달합니다.
주의: 클래스 오브젝트의 call by value 전달을 위해서는 필히 복사생성자(Copy Constructor)를 구현해야만 합니다.
인자 전달 후, 원본 값과 전혀 별개의 개체임으로 함수안에서 값을 변경해도, 원본 인자에 영향을 주지 않습니다.
call by reference 방식의 값 전달은 원본의 값의 그대로 사용하며, 참조만 전달합니다. (C에서는 포인터로 이를 흉내내었으나, C++에서는 별도로 제공합니다.)
원본을 전달하기 때문에, 함수안에서 개체에 조작을 행한경우, 함수 종료후에도 그 영향이 남아있게 됩니다.
위 설명에서 본 것과 같이 값을 복사하는 행위가 없기 때문에 call by refernce가 call by value보다 빠릅니다.
https://qna.programmers.co.kr/questions/2212/c-const-reference-%EB%B3%80%EC%88%98%EC%99%80-%EA%B7%B8%EB%83%A5-%EB%B3%80%EC%88%98%EC%9D%98-%EC%B0%A8%EC%9D%B4%EC%A0%90



해석하면 template 클래스(혹은 함수)는 컴파일 타임에 인스턴스화되는데(링크 타임이 아니라), cpp파일은 link-time에 다른 cpp파일들을 인지할 수 있다. 헤더파일은 #include 덕분에 컴파일타임에 알려지게 된다. 그래서 헤더파일에 선언과 구현이 모두 있어야 하는것이다.
https://welikecse.tistory.com/40
 

템플릿 클래스(혹은 함수)를 헤더파일과 cpp파일로 나눠서 선언, 구현을 따로 작성하려면 할 수는 있다. 템플릿 클래스를 사용하는 파일(위의 나의 코드 예시에선 main.cpp)에서 템플릿 클래스가 구현된 Template.cpp파일을 include해주면 된다.

https://learn.microsoft.com/ko-kr/cpp/cpp/function-template-instantiation?view=msvc-170

함수포인ㅌ어 https://reakwon.tistory.com/17

scope ::
https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=tipsware&logNo=221056751962