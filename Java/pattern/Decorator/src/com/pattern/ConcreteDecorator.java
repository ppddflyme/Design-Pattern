package com.pattern;

public class ConcreteDecorator extends Decorator {

	public ConcreteDecorator(IComponent m_component) {
		super(m_component);
	}
	
	public void showName() {
		super.showName();
		System.out.println("ConcreteDecorator");
	}

}
