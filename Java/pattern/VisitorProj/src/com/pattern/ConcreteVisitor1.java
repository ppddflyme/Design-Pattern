package com.pattern;

public class ConcreteVisitor1 implements Visitor {

	@Override
	public void visit(ConcreteNode1 concreteNode1) {
		concreteNode1.showMe();

	}

	@Override
	public void visit(ConcreteNode2 concreteNode2) {
		concreteNode2.showMe();

	}

}
