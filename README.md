```
 ____  _             _            _     ____                       _
/ ___|| |_ _   _  __| | ___ _ __ | |_  |  _ \ ___ _ __   ___  _ __| |_
\___ \| __| | | |/ _` |/ _ \ '_ \| __| | |_) / _ \ '_ \ / _ \| '__| __|
 ___) | |_| |_| | (_| |  __/ | | | |_  |  _ <  __/ |_) | (_) | |  | |_
|____/ \__|\__,_|\__,_|\___|_| |_|\__| |_| \_\___| .__/ \___/|_|   \__|
                                                 |_|
  ____              _    ____                           _
 / ___|__ _ _ __ __| |  / ___| ___ _ __   ___ _ __ __ _| |_ ___  _ __
| |   / _` | '__/ _` | | |  _ / _ \ '_ \ / _ \ '__/ _` | __/ _ \| '__|
| |__| (_| | | | (_| | | |_| |  __/ | | |  __/ | | (_| | || (_) | |
 \____\__,_|_|  \__,_|  \____|\___|_| |_|\___|_|  \__,_|\__\___/|_|
```

# Student Report Card Generator

A simple CLI-based C program to manage student report cards efficiently.

---

## About

This project is a Student Report Card Generator implemented in C. It allows users to maintain student records, including their marks, roll numbers, and names, and calculates their percentage based on the best-of-five subjects rule.

---

## Features Implemented So Far

- Add multiple new students with their name, roll number, and marks for six subjects:
  - English Language
  - English Literature
  - Physics
  - Chemistry
  - Mathematics
  - Biology
- Calculate student percentage applying the "best of five" subjects rule.
- Display all students' report cards with name, roll number, and percentage.
- Dynamic memory allocation for storing student records.
- Proper memory management with freeing allocated memory on program exit.
- A simple menu-driven Command Line Interface (CLI) for user interaction.

---

## Upcoming Features

- Search for a student by roll number.
- Update existing student details.
- Delete a student record.
- Save all student report cards to a file for persistent storage.
- Load student report cards from a file.
- Improve input validation and error handling.
- Add sorting and filtering options for student records.
- Possibly create a graphical user interface (GUI) version.

---

## Usage

Compile the program using the provided Makefile:

```bash
make
```

to run the file, use the following command:

```bash
make run
```
and follow the on-screen commands.
