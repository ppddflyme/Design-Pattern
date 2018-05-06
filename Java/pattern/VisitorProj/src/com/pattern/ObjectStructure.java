package com.pattern;
import java.util.ArrayList;

public class ObjectStructure {

	private ArrayList<Node> collect = new ArrayList<Node> (5);
	
	public void addNode(Node node) {
		collect.add(node);
	}
	
	public void loopCollect(Visitor v) {
		int len = collect.size();
		for (int i = 0; i < len; ++i) {
			collect.get(i).accept(v);
		}
	}
	
	
}
