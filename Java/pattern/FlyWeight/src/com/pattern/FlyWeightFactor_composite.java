package com.pattern;

import java.util.HashMap;

public class FlyWeightFactor_composite {
	private  HashMap<Character, FlyWeight_root> flies = new HashMap<Character, FlyWeight_root>(100);
	
	public FlyWeightFactor_composite() {
		
	}
	
	FlyWeight_root factory(String state) {
		ConcreteFlyWeight_composite composite = new ConcreteFlyWeight_composite();
		for (int i = 0; i < state.length(); ++i) {
			composite.add(new Character(state.charAt(i)), factory(new Character(state.charAt(i))));
		}
		return composite;
	}

	private FlyWeight_root factory(Character character) {
		if (flies.containsKey(character))
			return flies.get(character);
		else {
			FlyWeight_root leafNode = new ConcreteFlyWeight_leaf(character);
			flies.put(character, leafNode);
			return leafNode;
		}
	}
	
	

}
