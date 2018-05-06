package com.pattern;

import javax.sound.midi.Receiver;

public class ConcreteCommand implements ICommand {

	private MyReceiver receiver;
	public ConcreteCommand(MyReceiver receiver) {
		super();
		this.receiver = receiver;
	}
	@Override
	public void exec() {
		receiver.sayHi();
	}

}
