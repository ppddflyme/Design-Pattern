package com.pattern;

public class RegSingletonChild extends RegSingleton {
	static RegSingleton getInstance() {
		return RegSingleton.getInstance("com.pattern.RegSingletonChild");
	}
	
	public void sayHi() {
		System.out.println("RegSingletonChild.sayHi");
	}
}
