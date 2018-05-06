package com.pattern;

public class ConcreteComponent implements IComponent {

	@Override
	public void showName() {
		System.out.println("ConcreteComponent");
	}
}
