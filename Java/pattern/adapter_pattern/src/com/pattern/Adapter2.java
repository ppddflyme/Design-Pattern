package com.pattern;

public class Adapter2 implements TargetClass {
	AdapteeObject myAdaptee;

	public Adapter2(AdapteeObject myAdaptee) {
		super();
		this.myAdaptee = myAdaptee;
	}

	@Override
	public void sayHi() {
		myAdaptee.sayHi();
	}

	@Override
	public void sayHello() {
		System.out.println("Hello");
	}

}
