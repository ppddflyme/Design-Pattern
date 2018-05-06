package com.pattern;

public class ClassWithoutClone {
	public static void main(String[] args) throws CloneNotSupportedException {
		ClassWithoutClone testClass = new ClassWithoutClone();
		testClass.clone();
	}

}
