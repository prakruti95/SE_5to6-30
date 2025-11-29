package com.example.singleagent;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

@SpringBootApplication
public class SingleAgentApplication {

	public static void main(String[] args) 
	{
		SpringApplication.run(SingleAgentApplication.class, args);
		
		System.out.println("Hello");
	}

}
