package com.pattern;

import java.util.HashMap;
import java.util.Locale;
import java.util.ResourceBundle;

public class LingualResource {
	private String language = "en";
	private String region = "US";
	private String localeCode = "en_US";
	private static final String FILE_NAME = "res";
	private static HashMap instances = new HashMap(19);
	private Locale locale = null;
	private ResourceBundle resourceBundle = null;
	private LingualResource lnkLingualResource;
	
	private LingualResource(String language, String region) {
		this.localeCode = language;
		this.region = region;
		localeCode = makeLocaleCode(language, region);
		locale = new Locale(language, region);
		resourceBundle = ResourceBundle.getBundle(FILE_NAME, locale);
		instances.put(makeLocaleCode(language, region), this);
	}
	
	private LingualResource() {
		
	}
	
	public synchronized static LingualResource
	           getInstance(String language, String region) {
		if (instances.containsKey(makeLocaleCode(language, region))) {
			return (LingualResource)instances.get(makeLocaleCode(language, region));
		}
		else {
			return new LingualResource(language, region);
		}
	}
	
	public String getLocaleString(String code) {
		return resourceBundle.getString(code);
	}

	private static String makeLocaleCode(String language, String region) { 
		return language + "_" + region;
	}

}
