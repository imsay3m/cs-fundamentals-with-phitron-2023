CREATE DATABASE StudentLibManagement;
USE StudentLibManagement;


CREATE TABLE student(
    roll VARCHAR(4) PRIMARY KEY,
    name VARCHAR(50)
);

CREATE TABLE librarian(
    lib_id VARCHAR(4) PRIMARY KEY,
    lib_name VARCHAR(50)
);

CREATE TABLE book(
    book_id VARCHAR(4) PRIMARY KEY,
    book_name VARCHAR(50),
    book_genre VARCHAR(50)
);

CREATE TABLE borrow(
    who_borrowed_roll VARCHAR(4),
    which_book_id VARCHAR(4),
    borrow_date DATE,
    return_date DATE,

    FOREIGN KEY(who_borrowed_roll) REFERENCES student(roll),
    FOREIGN KEY(which_book_id) REFERENCES book(book_id),

    PRIMARY KEY(who_borrowed_roll, which_book_id)
);

CREATE TABLE permission(
    which_book_id VARCHAR(4),
    who_permitted_lib_id VARCHAR(4),

    FOREIGN KEY(which_book_id) REFERENCES book(book_id),
    FOREIGN KEY(who_permitted_lib_id) REFERENCES librarian(lib_id),

    PRIMARY KEY(which_book_id, who_permitted_lib_id)
);