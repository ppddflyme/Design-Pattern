package com.pattern;

public class ConcreteNode2 implements Node {

	@Override
	public void showMe() {
		System.out.println("ConcreteNode2::showMe()");

	}

	@Override
	public void accept(Visitor v) {
		v.visit(this);
		
	}

}
