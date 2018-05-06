package com.pattern;

public class MainTest {

	public static void main(String[] args) {
		IComponent component = new ConcreteComponent();
		IComponent concreteDecorator = new ConcreteDecorator(component);
		IComponent concreteDecorator2 = new ConcreteDecorator2(concreteDecorator);
		concreteDecorator2.showName();
	}
}
