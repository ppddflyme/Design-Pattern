package com.pattern;

public class ConcreteColleague1 extends Colleague {

	public ConcreteColleague1(Mediator mediator) {
		super(mediator);
		// TODO Auto-generated constructor stub
	}

	@Override
	public void action() {
		System.out.println("ConcreteColleague1::action()");

	}

}
