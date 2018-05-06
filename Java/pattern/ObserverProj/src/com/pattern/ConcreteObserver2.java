package com.pattern;

public class ConcreteObserver2 implements Observer {

	@Override
	public void update(String msg) {
		System.out.println("ConcreteObserver2: msg = " + msg);

	}

}
