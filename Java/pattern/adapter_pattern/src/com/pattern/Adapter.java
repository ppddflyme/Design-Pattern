package com.pattern;

public class Adapter extends Adaptee implements TargetClass {

	@Override
	public void sayHello() {
		System.out.println("Hello");
	}

}
