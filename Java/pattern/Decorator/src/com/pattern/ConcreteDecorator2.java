package com.pattern;

public class ConcreteDecorator2 extends Decorator {

	public ConcreteDecorator2(IComponent m_component) {
		super(m_component);
		// TODO Auto-generated constructor stub
	}
	
	public void showName() {
		super.showName();
		System.out.print("ConcreteDecorator2::showName()");
	}

}
