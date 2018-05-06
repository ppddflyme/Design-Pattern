package com.pattern;

public class ConcreteColleague2 extends Colleague {

	public ConcreteColleague2(Mediator mediator) {
		super(mediator);
		// TODO Auto-generated constructor stub
	}

	@Override
	public void action() {
		System.out.println("ConcreteColleague2::action()");

	}

}
