package com.pattern;

public class Tester {

	public static void main(String[] args) {
		Expression leftConstant = new Constant(true);
		Expression rightConstant = new Constant(false);
		Expression and = new And(leftConstant, new And(leftConstant, rightConstant));
		System.out.println(""+ and.interpret());

	}

}
