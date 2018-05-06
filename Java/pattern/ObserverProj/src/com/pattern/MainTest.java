package com.pattern;

public class MainTest {

	public static void main(String[] args) {
		Observer ob1 = new ConcreteObserver1();
		Observer ob2 = new ConcreteObserver2();
		ConcreteSubject subject = new ConcreteSubject();
		subject.addObserver(ob1);
		subject.addObserver(ob2);
		subject.nofityAll("Hello World");
		
		System.out.println("**************************************");
		
		ConcreteSubjectNew subjectNew = new ConcreteSubjectNew();
		subjectNew.addObserver(ob1);
		subjectNew.addObserver(ob2);
		subjectNew.changeState("gogogo");

	}

}
