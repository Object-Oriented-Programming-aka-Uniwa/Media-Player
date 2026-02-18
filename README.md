<p align="center">
  <img src="https://www.especial.gr/wp-content/uploads/2019/03/panepisthmio-dut-attikhs.png" alt="UNIWA" width="150"/>
</p>

<p align="center">
  <strong>UNIVERSITY OF WEST ATTICA</strong><br>
  SCHOOL OF ENGINEERING<br>
  DEPARTMENT OF COMPUTER ENGINEERING AND INFORMATICS
</p>

<p align="center">
  <a href="https://www.uniwa.gr" target="_blank">University of West Attica</a> ·
  <a href="https://ice.uniwa.gr" target="_blank">Department of Computer Engineering and Informatics</a>
</p>

---

<p align="center">
  <strong>Object-Oriented Programming</strong>
</p>

<h1 align="center">
  Media Player
</h1>

<p align="center">
  <strong>Vasileios Evangelos Athanasiou</strong><br>
  Student ID: 19390005
</p>

<p align="center">
  <a href="https://github.com/Ath21" target="_blank">GitHub</a> ·
  <a href="https://www.linkedin.com/in/vasilis-athanasiou-7036b53a4/" target="_blank">LinkedIn</a>
</p>

<hr/>

<p align="center">
  <strong>Supervision</strong>
</p>

<p align="center">
  Supervisor: Cleo Sgouropoulou, Professor<br>
</p>

<p align="center">
  <a href="https://ice.uniwa.gr/en/emd_person/georgios-meletiou/" target="_blank">UNIWA Profile</a> ·
  <a href="https://www.linkedin.com/in/cleo-sgouropoulou-51683525/" target="_blank">LinkedIn</a>
</p>

<p align="center">
  Co-supervisor: Georgios Meletiou, Laboratory Teaching Staff<br>
</p>

<p align="center">
  <a href="https://ice.uniwa.gr/en/emd_person/georgios-meletiou/" target="_blank">UNIWA Profile</a>
</p>

</hr>

---

<p align="center">
  Athens, August 2022
</p>

---

<p align="center">
  <img src="https://www.computerhope.com/jargon/w/wmp.png" width="250"/>
</p>

---

# README

## Media Player

This repository contains a **C++ project** implementing a **Media Player management system**, demonstrating object-oriented programming concepts, class relationships, and exception handling.

---

## Table of Contents

| Section | Folder/File                              | Description                                       |
| ------: | ---------------------------------------- | ------------------------------------------------- |
|       1 | `assign/`                                | Assignment material for the Media Player workshop |
|     1.1 | `assign/Examination ac.year 2021-22.png` | Exercise description in English                   |
|     1.2 | `assign/Εξέταση ακ.έτους 2021-22.png`    | Exercise description in Greek                     |
|       2 | `src/`                                   | Source code files for Media Player project        |
|     2.1 | `src/main.cpp`                           | Main C++ program                                  |
|     2.2 | `src/App.cpp`                            | Implementation of App class                       |
|     2.3 | `src/App.h`                              | Header file for App class                         |
|     2.4 | `src/AppConst.cpp`                       | Implementation of App constants                   |
|     2.5 | `src/AppConst.h`                         | Header file for App constants                     |
|     2.6 | `src/AppData.cpp`                        | Implementation of App data management             |
|     2.7 | `src/AppData.h`                          | Header file for App data management               |
|     2.8 | `src/Companies.txt`                      | Text file with company data                       |
|     2.9 | `src/Game.cpp`                           | Implementation of Game class                      |
|    2.10 | `src/Game.h`                             | Header file for Game class                        |
|    2.11 | `src/MediaPlayer.cpp`                    | Implementation of MediaPlayer class               |
|    2.12 | `src/MediaPlayer.h`                      | Header file for MediaPlayer class                 |
|       3 | `UML/`                                   | UML diagrams for the Media Player project         |
|     3.1 | `UML/Classes.png`                        | Class diagram                                     |
|       3 | `README.md`                              | Project documentation                             |
|       4 | `INSTALL.md`                             | Usage instructions                                |

---

## 1. Project Overview

The system manages three primary entities:

1. **Game** – Attributes: Code, Title, Game Category, Online status, Manufacturer
2. **Media Player Application** – Attributes: Code, Title, Supported Formats, Manufacturer
3. **App Manufacturer** – Attributes: Code, Title, Email

Operations are performed via the `AppData` class, including:

- Maintaining a list of all applications
- Maintaining a list of manufacturers
- Inserting or deleting applications
- Adding manufacturers
- Printing application details using `<<` operator
- Writing manufacturer details to a file
- Querying Media Player apps that support a specific format

---

## 2. Key Features

- **Encapsulation:** All attributes are private; no public attributes
- **Class Design:** Each class has a `Code` field (string) without using `std::string` for the field
- **Constructors:** Implemented for `Media Player Application` class
- **Exception Handling:** Manages errors in operations and memory handling
- **Stream Output:** Overloaded `<<` operator outputs readable application information
- **Data Management:** Supports insertion, deletion, and querying of applications and manufacturers

---

## 3. Conclusion

This project demonstrates OOP principles in C++ through a Media Player management system, emphasizing class relationships, encapsulation, exception handling, and operator overloading to manage applications, games, and manufacturers efficiently.
