package com.pattern;

public class Builder1 extends IBuilder {
	public Builder1(IProduct myProduct) {
		super();
		this.myProduct = myProduct;
	}

	private IProduct myProduct;

	@Override
	public void createPart1() {
		myProduct.product_part1();

	}

	@Override
	public void createPart2() {
		myProduct.product_part2();

	}

}
