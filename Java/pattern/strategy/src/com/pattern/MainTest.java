package com.pattern;

public class MainTest {

	public static void main(String[] args) {
		Context context = new Context(new ConcreteStrategy1());
		context.operation();
		Context context2 = new Context(new ConcreteStrategy2());
		context2.operation();
	}
}
