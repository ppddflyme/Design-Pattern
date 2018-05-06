package com.pattern;

public class ConcreteNode1 implements Node {

	@Override
	public void showMe() {
		System.out.println("ConcreteNode1::showMe()");
	}

	@Override
	public void accept(Visitor v) {
		v.visit(this);
	}
	

}
