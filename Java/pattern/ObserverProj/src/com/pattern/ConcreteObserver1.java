package com.pattern;

public class ConcreteObserver1 implements Observer {

	@Override
	public void update(String msg) {
		System.out.println("ConcreteObserver1: msg = " + msg);

	}

}
