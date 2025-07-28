package mylab;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;

@Controller
public class FormController {

    @GetMapping("/form")
    public String showForm() {
        return "form";
    }

    @PostMapping("/submit")
    public String submitForm(@RequestParam String name, @RequestParam String rollNo, Model model) {
        model.addAttribute("name", name);
        model.addAttribute("rollNo", rollNo);
        return "result";
    }
}


// package mylab;

// import org.springframework.web.bind.annotation.GetMapping;
// import org.springframework.web.bind.annotation.RestController;
// import java.util.HashMap;
// import java.util.Map;

// @RestController
// public class HelloController {

//     @GetMapping("/hello")
//     public Map<String, String> helloMessage() {
//         Map<String, String> response = new HashMap<>();
//         response.put("name", "Aditya Tiwari");
//         response.put("rollNumber", "2301641540017");
//         response.put("message", "Welcome to Spring Boot REST API!");
//         return response;
//     }
// }
