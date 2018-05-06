package com.pattern;

public class Main {

	public static void main(String[] args) {
		Adapter testClass = new Adapter();
		testClass.sayHi();
		testClass.sayHello();
		
		AdapteeObject adapteeObject = new AdapteeObject();
		Adapter2 testClass2 = new Adapter2(adapteeObject);
		testClass2.sayHi();
		testClass2.sayHello();
	}
}
