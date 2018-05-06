package com.pattern;

public interface IComponent_trans {
	void addChild(IComponent_trans child);
	void deleteChild(IComponent_trans child);
	void loopChild();
	void displayClassName();
}
