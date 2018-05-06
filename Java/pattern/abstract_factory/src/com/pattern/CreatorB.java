package com.pattern;

public class CreatorB implements ICreator {

	@Override
	public IProduct createProductA() {
		// TODO Auto-generated method stub
		return new ProductB();
	}

	@Override
	public IProduct2 createProduct2A() {
		// TODO Auto-generated method stub
		return new Product2B();
	}

}
