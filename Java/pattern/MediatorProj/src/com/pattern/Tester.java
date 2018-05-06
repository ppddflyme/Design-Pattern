package com.pattern;

public class Tester {

	public static void main(String[] args) {
		ConcreteMediator mediator = new ConcreteMediator();
		ConcreteColleague1 colleague1 = new ConcreteColleague1(mediator);
		mediator.createConcreteMediator();
		mediator.colleagueChanged(colleague1);

	}

}
