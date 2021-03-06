package com.pattern;

public abstract class Colleague {
	public Mediator mediator;
	
	public Colleague(Mediator mediator) {
		super();
		this.mediator = mediator;
	}
	
	public abstract void action();
	
	public void change() {
		mediator.colleagueChanged(this);
	}
}
