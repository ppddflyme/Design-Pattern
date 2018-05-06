package com.pattern;

public class MainTester {

	public static void main(String[] args) {
		IComponent_trans leaf = new LeafComponent_trans();
		IComponent_trans leaf2 = new LeafComponent_trans();
		IComponent_trans leaf3 = new LeafComponent_trans();
		IComponent_trans leaf4 = new LeafComponent_trans();
		IComponent_trans leaf5 = new LeafComponent_trans();
		IComponent_trans composite = new Composite_trans();
		IComponent_trans composite2 = new Composite_trans();
		
		composite.addChild(leaf);
		composite2.addChild(leaf2);
		composite2.addChild(leaf3);
		composite2.addChild(leaf4);
		composite2.addChild(leaf5);
		composite.addChild(composite2);
		composite.loopChild();
		System.out.println("******************************");
		composite.deleteChild(leaf);
		composite.loopChild();
		System.out.println("******************************");
		composite.deleteChild(composite2);
		composite.loopChild();
		System.out.println("******************************");
		System.out.println("66666666666666666666666666666666666666666666666666666");
		
		IComponent_safety leafSafety = new LeafComponent_safety();
		IComponent_safety leafSafety2 = new LeafComponent_safety();
		IComponent_safety leafSafety3 = new LeafComponent_safety();
		IComponent_safety leafSafety4 = new LeafComponent_safety();
		IComponent_safety leafSafety5 = new LeafComponent_safety();
		Composite_safety compositeSafety = new Composite_safety();
		Composite_safety compositeSafety2 = new Composite_safety();
		
		compositeSafety.addChild(leafSafety);
		compositeSafety2.addChild(leafSafety2);
		compositeSafety2.addChild(leafSafety3);
		compositeSafety2.addChild(leafSafety4);
		compositeSafety2.addChild(leafSafety5);
		compositeSafety.addChild(compositeSafety2);
		compositeSafety.loopChild();
		System.out.println("******************************");
		compositeSafety.deleteChild(leafSafety);
		compositeSafety.loopChild();
		System.out.println("******************************");
		compositeSafety.deleteChild(compositeSafety2);
		compositeSafety.loopChild();
		System.out.println("******************************");
	}

}
