package com.pattern;

public class SingletonLazyMan {
	private static SingletonLazyMan instance = null;
	
	private SingletonLazyMan() {}
	
	public static synchronized SingletonLazyMan getInstance(){
		if (instance == null)
			instance = new SingletonLazyMan();
		return instance;
	}
	
	public void sayHi() {
		System.out.println("Hi");
	}

}
