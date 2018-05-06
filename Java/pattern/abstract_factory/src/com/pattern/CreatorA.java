package com.pattern;

public class CreatorA implements ICreator {

	@Override
	public IProduct createProductA() {
		return new ProductA();
	}

	@Override
	public IProduct2 createProduct2A() {
		// TODO Auto-generated method stub
		return new Product2A();
	}

}
