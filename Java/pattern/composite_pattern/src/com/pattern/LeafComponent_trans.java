package com.pattern;

public class LeafComponent_trans implements IComponent_trans {

	@Override
	public void addChild(IComponent_trans child) {
		System.out.println("I'm leaf, I cannot add child");
	}

	@Override
	public void deleteChild(IComponent_trans child) {
		System.out.println("I'm leaf, I cannot delete child");
	}

	@Override
	public void loopChild() {
		System.out.println("I'm leaf, I cannot loop child");
	}

	@Override
	public void displayClassName() {
		Class<?> enclosingClass = getClass().getEnclosingClass();
		if (enclosingClass != null) {
		  System.out.println(enclosingClass.getName());
		} else {
		  System.out.println(getClass().getName());
		}
	}
}
