package com.example.students.controllers;

import com.example.students.model.Student;
import com.example.students.repository.StudentRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import javax.validation.Valid;
import java.util.List;
import java.util.Optional;


@RestController
@RequestMapping("/api")
public class StudentController {

    @Autowired
    StudentRepository studentRepository;

    @GetMapping("/students")
    public List<Student> getAllStudents() {
        return studentRepository.findAll();
    }

    @GetMapping("/students/{id}")
    public Optional<Student> getById(@PathVariable(value = "id") Long id) {
        return studentRepository.findById(id);
    }

    @PostMapping("/students")
    public Student createStudent(@Valid @RequestBody Student student) {
        return studentRepository.save(student);
    }

    @PutMapping("/students/{id}")
    public Student updateStudent(@PathVariable(value = "id") Long id,
                                 @Valid @RequestBody Student studentDetails) {
        Optional<Student> student = studentRepository.findById(id);
        student.get().setName(studentDetails.getName());
        student.get().setTeam(studentDetails.getTeam());
        Student response = studentRepository.save(student.get());
        return response;
    }

    @DeleteMapping("/students/{id}")
    public ResponseEntity<?> deleteStudent(@PathVariable(value = "id") Long id) {
        Optional<Student> student = studentRepository.findById(id);
        studentRepository.delete(student.get());
        return ResponseEntity.ok().build();
    }
}
