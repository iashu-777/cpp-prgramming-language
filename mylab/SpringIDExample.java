package mylab;

@interface Component {
}

@interface Autowired {
}

// This would be a Spring-managed service class
@Component
class GreetingService {
    public void greet() {
        System.out.println("◻ Welcome to Spring Framework using @Component and @Autowired!");
    }
}

// Main class simulating Spring Dependency Injection
@Component
public class SpringIDExample {

    @Autowired
    GreetingService service = new GreetingService(); // Normally injected by Spring

    public void display() {
        service.greet();
    }

    public static void main(String[] args) {
        System.out.println("Simulating Spring Container and Dependency Injection...");

        SpringIDExample example = new SpringIDExample();
        example.display();
    }
}
