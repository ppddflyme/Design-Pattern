package com.pattern;

public class MainTest {

	public static void main(String[] args) {
		Abstraction abs = new RefinedAbstraction(new ConcreteImplementor());
		abs.operation();

	}

}
