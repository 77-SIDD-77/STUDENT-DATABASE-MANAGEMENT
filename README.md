# STUDENT-DATABASE-MANAGEMENT
# Student Management System (C++)

This project is a simple **Student Management System** built using C++. It demonstrates the use of:

* Structures
* Unions
* Arrays
* Functions
* Searching, updating, deleting records
* Basic console input/output

---

## 📌 Features

### 1. **Add Student**

Stores student details including roll number, name, and contact detail (Email or Phone).

### 2. **Search Student**

Finds a student by roll number and displays their complete information.

### 3. **Display Students**

Displays details of all stored students.

### 4. **Update Student**

Allows updating name and contact details for an existing student.

### 5. **Delete Student**

Removes a student record and shifts remaining records to maintain order.

---

## 🧠 How It Works

### 🔹 Data Structures Used

* `struct Stud` — Stores roll number, name, and detail.
* `union Info` — Stores either email (char array) or phone (int array). This saves memory.
* `struct Detail` — Contains the union and a type indicator.

### 🔹 Global Array

* `students[200]` — Holds up to 200 student records.
* `totalstudents` — Tracks how many students are stored.

### 🔹 Main Operations

* `addstudent()`
* `searchstudent()`
* `displaystudent()`
* `updatestudent()`
* `deletestudent()`

### 🔹 Menu-Driven Program

The program runs in a loop until the user chooses Exit.

---

## ▶️ How to Run

1. Save the program as `student_management.cpp`.
2. Compile using:

   ```bash
   g++ student_management.cpp -o sms
   ```
3. Run the program:

   ```bash
   ./sms
   ```

---

## 📷 Sample Output

```
1. Add Student
2. Search Student
3. Display Student
4. Update Student
5. Delete Student
6. Exit
Enter your choice: 1
Enter Roll Number: 101
Enter Name: John
Enter Detail Type (1 for Email, 2 for Phone): 1
Enter Email: john@gmail.com
Student added successfully!
```

---

## 📌 Future Enhancements

* Add file handling to save data permanently
* Add validation for email and phone number
* Create a menu UI with better formatting
* Sort students by name or roll number

---

## 👨‍💻 Author

Created by **Siddhesh** as part of C++ programming practice.
