package com.pattern;

public class Director {
	public Director(IBuilder myBuilder) {
		super();
		this.myBuilder = myBuilder;
	}
	
	public void create() {
		myBuilder.createPart1();
		myBuilder.createPart2();
	}

	private IBuilder myBuilder;
	
}
