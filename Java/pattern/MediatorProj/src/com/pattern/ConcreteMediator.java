package com.pattern;

public class ConcreteMediator implements Mediator {
	private ConcreteColleague1 colleague1;
	private ConcreteColleague2 colleague2;
	
	@Override
	public void colleagueChanged(Colleague colleague) {
		colleague1.action();
		colleague2.action();

	}
	
	public void createConcreteMediator() {
		colleague1 = new ConcreteColleague1(this);
		colleague2 = new ConcreteColleague2(this);
	}

}
