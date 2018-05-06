package com.pattern;

public class MyInvoker {
	private ICommand command;

	public MyInvoker(ICommand command) {
		super();
		this.command = command;
	}
	
	public void run () {
		command.exec();
	}
}
