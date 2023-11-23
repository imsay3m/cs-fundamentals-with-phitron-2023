CREATE SCHEMA mini_student_library_management_system;
USE mini_student_library_management_system;
CREATE TABLE student (
    studentid INT AUTO_INCREMENT PRIMARY KEY,
    Name VARCHAR(255) NOT NULL,
    email VARCHAR(255) NOT NULL,
    phone VARCHAR(15),
    address TEXT
);

CREATE TABLE book (
    isbn VARCHAR(13) PRIMARY KEY,
    title VARCHAR(255) NOT NULL,
    author VARCHAR(255) NOT NULL,
    genre VARCHAR(50),
    totalcopies INT NOT NULL,
    availablecopies INT NOT NULL
);

CREATE TABLE borrowing (
    borrowid INT AUTO_INCREMENT PRIMARY KEY,
    studentid INT,
    isbn VARCHAR(13),
    borrowdate DATE NOT NULL,
    duedate DATE NOT NULL,
    returndate DATE,
    FOREIGN KEY (studentid) REFERENCES student(studentid),
    FOREIGN KEY (isbn) REFERENCES book(isbn)
);



SELECT * FROM mini_student_library_management_system.borrowing;
SELECT * FROM mini_student_library_management_system.student;

-- Insert 10 entries into the Student table
INSERT INTO Student (Name, Email, Phone, Address) VALUES
('John Doe', 'john.doe@example.com', '123-456-7890', '123 Main St'),
('Jane Smith', 'jane.smith@example.com', '987-654-3210', '456 Oak St'),
('Bob Johnson', 'bob.johnson@example.com', '555-123-4567', '789 Elm St'),
('Alice Brown', 'alice.brown@example.com', '444-789-0123', '321 Pine St'),
('Charlie Davis', 'charlie.davis@example.com', '222-333-4444', '567 Maple St'),
('Eva White', 'eva.white@example.com', '111-222-3333', '890 Birch St'),
('David Miller', 'david.miller@example.com', '999-888-7777', '234 Cedar St'),
('Sophie Wilson', 'sophie.wilson@example.com', '666-777-8888', '876 Spruce St'),
('Michael Lee', 'michael.lee@example.com', '333-555-9999', '543 Fir St'),
('Olivia Harris', 'olivia.harris@example.com', '777-666-5555', '765 Redwood St');

-- Insert 10 entries into the Book table
INSERT INTO Book (ISBN, Title, Author, Genre, TotalCopies, AvailableCopies) VALUES
('1234567890123', 'Book Title 1', 'Author 1', 'Fiction', 10, 10),
('2345678901234', 'Book Title 2', 'Author 2', 'Non-Fiction', 15, 15),
('3456789012345', 'Book Title 3', 'Author 3', 'Mystery', 20, 20),
('4567890123456', 'Book Title 4', 'Author 4', 'Science Fiction', 12, 12),
('5678901234567', 'Book Title 5', 'Author 5', 'History', 8, 8),
('6789012345678', 'Book Title 6', 'Author 6', 'Biography', 18, 18),
('7890123456789', 'Book Title 7', 'Author 7', 'Romance', 25, 25),
('8901234567890', 'Book Title 8', 'Author 8', 'Thriller', 14, 14),
('9012345678901', 'Book Title 9', 'Author 9', 'Fantasy', 22, 22),
('0123456789012', 'Book Title 10', 'Author 10', 'Self-Help', 30, 30);

-- Insert 10 entries into the Borrowing table
INSERT INTO Borrowing (StudentID, ISBN, BorrowDate, DueDate, ReturnDate)
VALUES
(1, '1234567890123', '2023-01-01', '2023-01-15', '2023-01-10'),
(2, '2345678901234', '2023-02-01', '2023-02-15', '2023-02-10'),
(3, '3456789012345', '2023-03-01', '2023-03-15', '2023-03-10'),
(4, '4567890123456', '2023-04-01', '2023-04-15', '2023-04-10'),
(5, '5678901234567', '2023-05-01', '2023-05-15', '2023-05-10'),
(6, '6789012345678', '2023-06-01', '2023-06-15', '2023-06-10'),
(7, '7890123456789', '2023-07-01', '2023-07-15', '2023-07-10'),
(8, '8901234567890', '2023-08-01', '2023-08-15', '2023-08-10'),
(9, '9012345678901', '2023-09-01', '2023-09-15', '2023-09-10'),
(10, '0123456789012', '2023-10-01', '2023-10-15', '2023-10-10');



SELECT MAX(availablecopies)
FROM book;

-- Q.2
INSERT INTO borrowing (studentid, isbn, borrowdate, duedate)
SELECT 3, isbn, '2023-11-11', '2023-11-25'  
FROM book
ORDER BY availablecopies DESC
LIMIT 1;




-- Q.3
UPDATE book
SET availablecopies = availablecopies - 1
WHERE isbn = '9781234567890';


-- Q.4
SELECT * 
FROM Borrowing
WHERE ReturnDate IS NULL AND DueDate < CURDATE();



-- Q.8
SELECT MIN(salary) 
FROM employees
WHERE salary > (
	SELECT MIN(salary)
	FROM employees
);


-- Q.9
CREATE TABLE employee (
	employee_id VARCHAR(4) PRIMARY KEY,
	department_id VARCHAR(4) NOT NULL,
	FOREIGN KEY (department_id) REFERENCES department (department_id)
	ON DELETE SET NULL
);

CREATE TABLE JobHistory (
	employee_id VARCHAR(4) NOT NULL,
	start_date DATE,
	end_date DATE,
	job_id VARCHAR(4) NOT NULL,
	department_id VARCHAR(4),
	FOREIGN KEY (employee_id) REFERENCES employee (employee_id)
    ON DELETE CASCADE
);

CREATE TABLE department (
	department_id VARCHAR(4) PRIMARY KEY,
	department_name VARCHAR(50) NOT NULL
);
