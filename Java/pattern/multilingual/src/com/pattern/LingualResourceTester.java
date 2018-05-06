package com.pattern;

public class LingualResourceTester {

	public static void main(String[] args) {
		LingualResource lingualResource = LingualResource.getInstance("en", "US");
		String usDollar = lingualResource.getLocaleString("USD");
		System.out.println("USD=" + usDollar);
		LingualResource lingZh = LingualResource.getInstance("zh", "CH");
		String usDollarZh = lingZh.getLocaleString("USD");
		System.out.println("USD=" + usDollarZh);
		
		LingualResource lingualResource2 = LingualResource.getInstance("en", "US");
		String usDollar2 = lingualResource2.getLocaleString("JPY");
		System.out.println("JPY=" + usDollar2);
		LingualResource lingZh2 = LingualResource.getInstance("zh", "CH");
		String usDollarZh2 = lingZh2.getLocaleString("JPY");
		System.out.println("JPY=" + usDollarZh2);

	}

}
