package com.pattern;

public class Test {

	public static void main(String[] args) {
		ObjectStructure oStructure = new ObjectStructure();
		Node node1 = new ConcreteNode1();
		Node node2 = new ConcreteNode2();
		Visitor v1 = new ConcreteVisitor1();
		oStructure.addNode(node1);
		oStructure.addNode(node2);
		oStructure.loopCollect(v1);

	}

}
