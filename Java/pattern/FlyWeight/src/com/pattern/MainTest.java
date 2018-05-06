package com.pattern;

public class MainTest {

	public static void main(String[] args) {
		FlyWeightFactory factory = new FlyWeightFactory();
		FlyWeight flyWeight1 = factory.factory(new Character('c'));
		flyWeight1.operation("1234567");
		FlyWeight flyWeight2 = factory.factory(new Character('c'));
		flyWeight2.operation("2222222");
		
		/******************************************************************/
		System.out.println("/******************************************************************/");
		FlyWeightFactor_composite factory_com = new FlyWeightFactor_composite();
		ConcreteFlyWeight_composite flyWeight_composite =  (ConcreteFlyWeight_composite) factory_com.factory("abcdefg");
		flyWeight_composite.operation("123");
	}

}
