package com.pattern;

public class LeafComponent_safety extends IComponent_safety {

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
