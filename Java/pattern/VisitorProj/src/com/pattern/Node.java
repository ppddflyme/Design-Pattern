package com.pattern;

public interface Node {
	public void showMe();
	public void accept(Visitor v);
}
