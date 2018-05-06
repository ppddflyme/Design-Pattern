package com.pattern;

public class Main {

	public static void main(String[] args) {
		Singleton instance = Singleton.getInstance();
		instance.sayHi();
		
		SingletonLazyMan singletonInstance = SingletonLazyMan.getInstance();
		singletonInstance.sayHi();
		
		RegSingleton regChildInstance = RegSingletonChild.getInstance();
		regChildInstance.sayHi();
		RegSingleton regInstance = RegSingleton.getInstance("com.pattern.RegSingleton");
		regInstance.sayHi();

	}

}
