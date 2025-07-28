class Animal {
    // Method to demonstrate behavior in Animal
    void sound() {
        System.out.println("Animal makes a sound");
    }
}

// Child class (subclass) inheriting from Animal
class Dog extends Animal {
    // Method overriding (runtime polymorphism)
    @Override
    void sound() {
        System.out.println("Dog barks");
    }

    // Method overloading (compile-time polymorphism)
    void bark() {
        System.out.println("Dog is barking softly...");
    }

    void bark(String type) {
        System.out.println("Dog is barking " + type);
    }

    void bark(int times) {
        System.out.println("Dog barked " + times + " times!");
    }
}

// Main class with main() method
public class InheritancePolymorphismDemo {

    public static void main(String[] args) {

        // Display student info
        System.out.println("Name: Devanshi Arora");
        System.out.println("Roll Number: 2301641530065\n");

        // Inheritance and method overriding (runtime polymorphism)
        Animal a = new Animal();
        Dog d = new Dog();
        Animal ref; // Parent class reference

        System.out.println("Calling sound() on Animal object:");
        a.sound(); // Outputs: Animal makes a sound
        System.out.println("\nCalling sound() on Dog object:");
        d.sound(); // Outputs: Dog barks (overridden method)

        System.out.println("\nUsing Animal reference to call Dog's overridden method:");
        ref = d;
        ref.sound(); // Outputs: Dog barks (runtime polymorphism)

        // Method Overloading
        System.out.println("\nMethod Overloading examples:");
        d.bark();
        d.bark("loudly");
        d.bark(3);
    }
}
