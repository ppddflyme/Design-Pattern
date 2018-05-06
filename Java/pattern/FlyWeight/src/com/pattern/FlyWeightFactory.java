package com.pattern;

import java.nio.file.Files;
import java.util.HashMap;

public class FlyWeightFactory {
	private HashMap<Character, FlyWeight> flies;
	
	public FlyWeightFactory () {
		flies = new HashMap<>(10);
	}
	
	public FlyWeight factory(Character state) {
		if (flies.containsKey(state))
			return flies.get(state);
		else {
			FlyWeight flyWeight = new ConcreteFlyWeight(state);
			flies.put(state, flyWeight);
			return flyWeight;
		}
	}
}
